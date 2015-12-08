#ifndef GAME_MWWORLD_CUSTOMDATA_H
#define GAME_MWWORLD_CUSTOMDATA_H

namespace MWClass
{
    class CreatureCustomData;
    class NpcCustomData;
    class ContainerCustomData;
    class DoorCustomData;
    class CreatureLevListCustomData;
}

namespace MWWorld
{
    /// \brief Base class for the MW-class-specific part of RefData
    class CustomData
    {
        public:

            virtual ~CustomData() {}

            virtual CustomData *clone() const = 0;

            // Fast version of dynamic_cast<X&>. Needs to be overridden in the respective class.

            virtual MWClass::CreatureCustomData& asCreatureCustomData();

            virtual MWClass::NpcCustomData& asNpcCustomData();

            virtual MWClass::ContainerCustomData& asContainerCustomData();

            virtual MWClass::DoorCustomData& asDoorCustomData();

            virtual MWClass::CreatureLevListCustomData& asCreatureLevListCustomData();
    };
}

#endif
