// roc 2009-12 008169c0  unit: MyXTPCommandBars  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008169c0
//
// 008169c0  56                   push esi
// 008169c1  8bf1                 mov esi, ecx
// 008169c3  8b4674               mov eax, dword ptr [esi + 0x74]
// 008169c6  c7404c01000000       mov dword ptr [eax + 0x4c], 1
// 008169cd  8b442408             mov eax, dword ptr [esp + 8]
// 008169d1  6a00                 push 0
// 008169d3  89466c               mov dword ptr [esi + 0x6c], eax
// 008169d6  89465c               mov dword ptr [esi + 0x5c], eax
// 008169d9  e8c2e3ffff           call 0x814da0
// 008169de  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 008169e1  51                   push ecx
// 008169e2  8bce                 mov ecx, esi
// 008169e4  e857f1ffff           call 0x815b40
// 008169e9  5e                   pop esi
// 008169ea  c20400               ret 4
// copied from an identical function in another client (function ?fn_ROCX00000e@MyXTPCommandBars@ns_ROCX00000e@@QAEXH@Z)

namespace ns_ROCX00000e {
struct MyXTPCommandBars
{
    char pad[0x4c];
    int field_4c;
    char pad2[0x0c];
    int field_5c;
    char pad3[0x0c];
    int field_6c;
    char pad4[0x04];
    int field_74;
    void sub_6329E0(int);
    void sub_6338D0(int);
    void fn_ROCX00000e(int);
};

void MyXTPCommandBars::fn_ROCX00000e(int arg)
{
    int* p = (int*)field_74;
    p[0x13] = 1;
    field_6c = arg;
    field_5c = arg;
    sub_6329E0(0);
    sub_6338D0(field_5c);
}
}
