// roc 2010-06 0044f7c0  unit: CRobloxModule  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0044f7c0
//
// 0044f7c0  8b4958               mov ecx, dword ptr [ecx + 0x58]
// 0044f7c3  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 0044f7c6  e9a5fdffff           jmp 0x44f570
// copied from an identical function in another client (function ?get@CRobloxModule@ns_ROCX000019@@QAEHXZ)

namespace ns_ROCX000019 {
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
