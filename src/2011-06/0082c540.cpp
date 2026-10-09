// roc 2011-06 0082c540  unit: MyXTPCommandBars  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082c540
//
// 0082c540  56                   push esi
// 0082c541  8bf1                 mov esi, ecx
// 0082c543  8b4674               mov eax, dword ptr [esi + 0x74]
// 0082c546  c7404c01000000       mov dword ptr [eax + 0x4c], 1
// 0082c54d  8b442408             mov eax, dword ptr [esp + 8]
// 0082c551  6a00                 push 0
// 0082c553  89466c               mov dword ptr [esi + 0x6c], eax
// 0082c556  89465c               mov dword ptr [esi + 0x5c], eax
// 0082c559  e8e2e3ffff           call 0x82a940
// 0082c55e  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 0082c561  51                   push ecx
// 0082c562  8bce                 mov ecx, esi
// 0082c564  e857f1ffff           call 0x82b6c0
// 0082c569  5e                   pop esi
// 0082c56a  c20400               ret 4
// copied from an identical function in another client (function ?fn_ROCX000006@MyXTPCommandBars@ns_ROCX000006@@QAEXH@Z)

namespace ns_ROCX000006 {
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
    void fn_ROCX000006(int);
};

void MyXTPCommandBars::fn_ROCX000006(int arg)
{
    int* p = (int*)field_74;
    p[0x13] = 1;
    field_6c = arg;
    field_5c = arg;
    sub_6329E0(0);
    sub_6338D0(field_5c);
}
}
