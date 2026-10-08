// from server: 84% by colin
// roc 2007-08 006a6e60  unit: CXTPMenuBar  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a6e60
//
// 006a6e60  53                   push ebx
// 006a6e61  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006a6e65  56                   push esi
// 006a6e66  57                   push edi
// 006a6e67  53                   push ebx
// 006a6e68  8bf1                 mov esi, ecx
// 006a6e6a  e881fcffff           call 0x6a6af0
// 006a6e6f  8bf8                 mov edi, eax
// 006a6e71  85ff                 test edi, edi
// 006a6e73  7410                 je 0x6a6e85
// 006a6e75  53                   push ebx
// 006a6e76  8d4e20               lea ecx, [esi + 0x20]
// 006a6e79  e862beffff           call 0x6a2ce0
// 006a6e7e  8bcf                 mov ecx, edi
// 006a6e80  e85f93f8ff           call 0x6301e4
// 006a6e85  5f                   pop edi
// 006a6e86  5e                   pop esi
// 006a6e87  5b                   pop ebx
// 006a6e88  c20400               ret 4

struct CXTPMenuBar {
    char pad[0x20];
    int sub_6a6af0(int);
    int sub_6a2ce0(int);
    int sub_6301e4();
    int func(int);
};

int CXTPMenuBar::func(int arg) {
    int result = sub_6a6af0(arg);
    if (result != 0) {
        ((CXTPMenuBar*)((char*)this + 0x20))->sub_6a2ce0(arg);
        ((CXTPMenuBar*)result)->sub_6301e4();
    }
    return result;
}
