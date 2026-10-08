// from server: 100% by colin
// roc 2007-08 006a7ad0  unit: CXTPRibbonBar  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a7ad0
//
// 006a7ad0  8b8964020000         mov ecx, dword ptr [ecx + 0x264]
// 006a7ad6  81c178010000         add ecx, 0x178
// 006a7adc  e92f6d0500           jmp 0x6fe810

struct CXTPRibbonBar {
    char pad[0x264];
    void* field_264;
    void* get();
};

extern "C" void* __fastcall func_006fe810(void*);

void* CXTPRibbonBar::get()
{
    return func_006fe810((char*)field_264 + 0x178);
}
