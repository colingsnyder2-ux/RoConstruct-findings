// roc 2012-06 009a4b10  unit: MyXTPCommandBars  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a4b10
//
// 009a4b10  56                   push esi
// 009a4b11  8bf1                 mov esi, ecx
// 009a4b13  8b4674               mov eax, dword ptr [esi + 0x74]
// 009a4b16  c7404c01000000       mov dword ptr [eax + 0x4c], 1
// 009a4b1d  8b442408             mov eax, dword ptr [esp + 8]
// 009a4b21  6a00                 push 0
// 009a4b23  89466c               mov dword ptr [esi + 0x6c], eax
// 009a4b26  89465c               mov dword ptr [esi + 0x5c], eax
// 009a4b29  e8e2e3ffff           call 0x9a2f10
// 009a4b2e  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 009a4b31  51                   push ecx
// 009a4b32  8bce                 mov ecx, esi
// 009a4b34  e857f1ffff           call 0x9a3c90
// 009a4b39  5e                   pop esi
// 009a4b3a  c20400               ret 4
// copied from an identical function in another client (function ?fn_ROCX000001@MyXTPCommandBars@ns_ROCX000001@@QAEXH@Z)

namespace ns_ROCX000001 {
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
    void fn_ROCX000001(int);
};

void MyXTPCommandBars::fn_ROCX000001(int arg)
{
    int* p = (int*)field_74;
    p[0x13] = 1;
    field_6c = arg;
    field_5c = arg;
    sub_6329E0(0);
    sub_6338D0(field_5c);
}
}
