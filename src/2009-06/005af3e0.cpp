// roc 2009-06 005af3e0  unit: RBX::TextureProxyBase  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005af3e0
//
// 005af3e0  55                   push ebp
// 005af3e1  8bec                 mov ebp, esp
// 005af3e3  51                   push ecx
// 005af3e4  894dfc               mov dword ptr [ebp - 4], ecx
// 005af3e7  8b45fc               mov eax, dword ptr [ebp - 4]
// 005af3ea  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005af3ed  894828               mov dword ptr [eax + 0x28], ecx
// 005af3f0  8be5                 mov esp, ebp
// 005af3f2  5d                   pop ebp
// 005af3f3  c20400               ret 4
// copied from an identical function in another client (function ?setValue@S@@QAEXH@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
#pragma optimize("", off)

struct S {
    char padding[0x28];
    int value;
    void setValue(int v);
};

void S::setValue(int v) {
    value = v;
}