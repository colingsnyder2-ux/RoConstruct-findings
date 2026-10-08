// from server: 83% by colin
// roc 2007-08 006a0510  unit: CXTPNewToolbarDlg  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a0510
//
// 006a0510  56                   push esi
// 006a0511  8bf1                 mov esi, ecx
// 006a0513  8d4e78               lea ecx, [esi + 0x78]
// 006a0516  ff15bcdd7700         call dword ptr [0x77ddbc]
// 006a051c  8bce                 mov ecx, esi
// 006a051e  e8effef8ff           call 0x630412
// 006a0523  f644240801           test byte ptr [esp + 8], 1
// 006a0528  7409                 je 0x6a0533
// 006a052a  56                   push esi
// 006a052b  e832f7f8ff           call 0x62fc62
// 006a0530  83c404               add esp, 4
// 006a0533  8bc6                 mov eax, esi
// 006a0535  5e                   pop esi
// 006a0536  c20400               ret 4

struct CXTPNewToolbarDlg {
    char pad[0x78];
    int field_78;
    void sub_630412();
    void sub_62FC62();
    void* sub_6A0510(unsigned int flags);
};

extern "C" void __fastcall sub_77DDBC(int*);

void* CXTPNewToolbarDlg::sub_6A0510(unsigned int flags) {
    sub_77DDBC(&field_78);
    sub_630412();
    if (flags & 1) {
        sub_62FC62();
    }
    return this;
}
