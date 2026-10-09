// roc 2007-03 00448140  unit: seg_00440000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00448140
//
// 00448140  8b4958               mov ecx, dword ptr [ecx + 0x58]
// 00448143  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 00448146  e965fdffff           jmp 0x447eb0
// copied from an identical function in another client (function ?get@CRobloxModule@ns_ROCX000013@@QAEHXZ)

namespace ns_ROCX000013 {
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
