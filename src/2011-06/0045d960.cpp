// roc 2011-06 0045d960  unit: CRobloxModule  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0045d960
//
// 0045d960  8b4958               mov ecx, dword ptr [ecx + 0x58]
// 0045d963  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 0045d966  e9a5fdffff           jmp 0x45d710
// copied from an identical function in another client (function ?get@CRobloxModule@ns_ROCX00001b@@QAEHXZ)

namespace ns_ROCX00001b {
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
