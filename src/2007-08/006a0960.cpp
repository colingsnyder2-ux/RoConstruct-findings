// from server: 70% by colin
// roc 2007-08 006a0960  unit: CXTPNewToolbarDlg  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a0960
//
// 006a0960  8b442404             mov eax, dword ptr [esp + 4]
// 006a0964  8b5128               mov edx, dword ptr [ecx + 0x28]
// 006a0967  83c120               add ecx, 0x20
// 006a096a  50                   push eax
// 006a096b  52                   push edx
// 006a096c  e89f1f0300           call 0x6d2910
// 006a0971  c20400               ret 4

struct CXTPNewToolbarDlg {
    char pad[0x28];
    int field28;
    int method(int arg);
};

extern "C" int __stdcall sub_6d2910(int, int);

int CXTPNewToolbarDlg::method(int arg) {
    return sub_6d2910(field28, arg);
}
