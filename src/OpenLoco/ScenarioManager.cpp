#include "ScenarioManager.h"
#include "Interop/Interop.hpp"

using namespace OpenLoco::Interop;

namespace OpenLoco::ScenarioManager
{
    // 0x0044452F
    void loadIndex(uint8_t al)
    {
        registers regs;
        regs.al = al;
        call(0x0044452F, regs);
    }
}
