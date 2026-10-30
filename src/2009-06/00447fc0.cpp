// roc 2009-06 00447fc0  unit: CRobloxModule  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00447fc0
//
// 00447fc0  8b4958               mov ecx, dword ptr [ecx + 0x58]
// 00447fc3  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 00447fc6  e9a5fdffff           jmp 0x447d70
// copied from an identical function in another client (function ?get@CRobloxModule@ns_ROCX00001d@ns_ROCX000000@@QAEHXZ)

namespace ns_ROCX000000 {
namespace ns_ROCX00001d {
struct Inner {
    int method();
};

struct Mid {
    char pad0[0x24];
    Inner* inner;
};

struct CRobloxModule {
    char pad0[0x58];
    Mid* mid;
    int get();
};

int CRobloxModule::get()
{
    Mid* m = this->mid;
    return m->inner->method();
}
}
}
