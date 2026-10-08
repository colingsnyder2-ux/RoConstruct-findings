// from server: 61% by colin
// roc 2007-08 007175a0  unit: CXTPRibbonControlTab  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007175a0
//
// 007175a0  8b4984               mov ecx, dword ptr [ecx - 0x7c]
// 007175a3  e9c807f9ff           jmp 0x6a7d70

struct CXTPRibbonControlTab
{
    char pad[0x84];
    void* field_84;
    void get();
};

extern void func_006a7d70();

void CXTPRibbonControlTab::get()
{
    func_006a7d70();
}
