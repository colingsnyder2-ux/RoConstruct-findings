// roc 2009-12 0044e220  unit: CRobloxModule  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0044e220
//
// 0044e220  8b4958               mov ecx, dword ptr [ecx + 0x58]
// 0044e223  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 0044e226  e9a5fdffff           jmp 0x44dfd0
// copied from an identical function in another client (function ?get@CRobloxModule@ns_ROCX00001d@@QAEHXZ)

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
