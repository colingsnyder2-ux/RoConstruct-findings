// from server: 97% by colin
// roc 2007-08 006f23d0  unit: CXTPImageEditorDlg  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f23d0
//
// 006f23d0  8b442404             mov eax, dword ptr [esp + 4]
// 006f23d4  56                   push esi
// 006f23d5  8bf1                 mov esi, ecx
// 006f23d7  8b08                 mov ecx, dword ptr [eax]
// 006f23d9  51                   push ecx
// 006f23da  e8dde1f3ff           call 0x6305bc
// 006f23df  50                   push eax
// 006f23e0  e84be9ffff           call 0x6f0d30
// 006f23e5  50                   push eax
// 006f23e6  e817def3ff           call 0x630202
// 006f23eb  83c408               add esp, 8
// 006f23ee  50                   push eax
// 006f23ef  8bce                 mov ecx, esi
// 006f23f1  e89affffff           call 0x6f2390
// 006f23f6  5e                   pop esi
// 006f23f7  c20800               ret 8

struct CXTPImageEditorDlg {
    int sub_6f2390(int);
    int func(int, int);
};

extern "C" int __cdecl sub_6305bc(int);
extern "C" int __cdecl sub_6f0d30(int);
extern "C" int __cdecl sub_630202(int);

int CXTPImageEditorDlg::func(int a, int b) {
    int v = sub_6305bc(*(int*)a);
    v = sub_6f0d30(v);
    v = sub_630202(v);
    return this->sub_6f2390(v);
}
