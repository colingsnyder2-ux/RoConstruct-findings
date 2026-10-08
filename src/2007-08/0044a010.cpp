// from server: 100% by colin
// roc 2007-08 0044a010  unit: CRobloxModule  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044a010
//
// 0044a010  8b4958               mov ecx, dword ptr [ecx + 0x58]
// 0044a013  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 0044a016  e9a5f8ffff           jmp 0x4498c0

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
