// from server: 84% by colin
// roc 2007-08 0067f9d0  unit: seg_00670000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067f9d0

extern "C" int (__stdcall *SystemParametersInfoA)(unsigned int, unsigned int, void*, unsigned int);
extern "C" void (__stdcall *sub_77D558)();

struct CXTPPrintPageHeaderFooter {
    char pad[0x20];
    int field20;
    char pad2[0x38];
    int field5c;
    int field60;
    int field64;
    int field68;
    int field6c;
    void Init();
};

void CXTPPrintPageHeaderFooter::Init() {
    SystemParametersInfoA(0x1f, 0x3c, &field20, 0);
    field5c = 0;
    sub_77D558();
    sub_77D558();
    sub_77D558();
    sub_77D558();
}
