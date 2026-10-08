// from server: 78% by colin
// roc 2007-08 006f10f0  unit: CXTPImageEditorDlg::CDlgToolBar  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f10f0
//
// 006f10f0  8b4164               mov eax, dword ptr [ecx + 0x64]
// 006f10f3  8b884c0a0000         mov ecx, dword ptr [eax + 0xa4c]
// 006f10f9  85c9                 test ecx, ecx
// 006f10fb  7405                 je 0x6f1102
// 006f10fd  e99e1efeff           jmp 0x6d2fa0
// 006f1102  33c0                 xor eax, eax
// 006f1104  c3                   ret 

struct Inner;

struct Outer {
    char pad[0x64];
    Inner* field_64;
    int get();
};

struct Inner {
    char pad[0xa4c];
    int field_a4c;
};

extern int __cdecl helper_6d2fa0();

int Outer::get()
{
    Inner* p = field_64;
    int v = p->field_a4c;
    if (v != 0)
        return helper_6d2fa0();
    return 0;
}
