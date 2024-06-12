#pragma once

#include "Core.h"

namespace Handles
{
    class HANDLES_API Application
    {
    public:
        Application();
        virtual ~Application();

        void Run();
    };
}