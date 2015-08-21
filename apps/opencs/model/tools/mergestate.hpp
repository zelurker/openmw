#ifndef CSM_TOOLS_MERGESTATE_H
#define CSM_TOOLS_MERGESTATE_H

#include <memory>

#include "../doc/document.hpp"

namespace CSMTools
{
    struct MergeState
    {
        std::auto_ptr<CSMDoc::Document> mTarget;
        CSMDoc::Document& mSource;
        bool mCompleted;

        MergeState (CSMDoc::Document& source) : mSource (source), mCompleted (false) {}
    };
}

#endif