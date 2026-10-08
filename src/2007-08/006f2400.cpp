// from server: 97% by colin
// roc 2007-08 006f2400  unit: CXTPImageEditorDlg  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f2400
//
// 006f2400  8b442408             mov eax, dword ptr [esp + 8]
// 006f2404  56                   push esi
// 006f2405  8bf1                 mov esi, ecx
// 006f2407  8b08                 mov ecx, dword ptr [eax]
// 006f2409  51                   push ecx
// 006f240a  e8ade1f3ff           call 0x6305bc
// 006f240f  50                   push eax
// 006f2410  e81be9ffff           call 0x6f0d30
// 006f2415  50                   push eax
// 006f2416  e8e7ddf3ff           call 0x630202
// 006f241b  83c408               add esp, 8
// 006f241e  50                   push eax
// 006f241f  8bce                 mov ecx, esi
// 006f2421  e86affffff           call 0x6f2390
// 006f2426  5e                   pop esi
// 006f2427  c20c00               ret 0xc

struct CXTPImageEditorDlg {
    int sub_6f2390(int);
    int func(int, int, int);
};

extern "C" int __cdecl sub_6305bc(int);
extern "C" int __cdecl sub_6f0d30(int);
extern "C" int __cdecl sub_630202(int);

int CXTPImageEditorDlg::func(int a, int b, int c) {
    int v = sub_6305bc(*(int*)b);
    v = sub_6f0d30(v);
    v = sub_630202(v);
    return this->sub_6f2390(v);
}
