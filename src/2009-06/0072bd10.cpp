// roc 2009-06 0072bd10  unit: MyXTPCommandBars  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0072bd10
//
// 0072bd10  56                   push esi
// 0072bd11  8bf1                 mov esi, ecx
// 0072bd13  8b4674               mov eax, dword ptr [esi + 0x74]
// 0072bd16  c7404c01000000       mov dword ptr [eax + 0x4c], 1
// 0072bd1d  8b442408             mov eax, dword ptr [esp + 8]
// 0072bd21  6a00                 push 0
// 0072bd23  89466c               mov dword ptr [esi + 0x6c], eax
// 0072bd26  89465c               mov dword ptr [esi + 0x5c], eax
// 0072bd29  e8c2e3ffff           call 0x72a0f0
// 0072bd2e  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 0072bd31  51                   push ecx
// 0072bd32  8bce                 mov ecx, esi
// 0072bd34  e857f1ffff           call 0x72ae90
// 0072bd39  5e                   pop esi
// 0072bd3a  c20400               ret 4
// copied from an identical function in another client (function ?fn_ROCX000000@MyXTPCommandBars@ns_ROCX000000@@QAEXH@Z)

namespace ns_ROCX000000 {
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
    void fn_ROCX000000(int);
};

void MyXTPCommandBars::fn_ROCX000000(int arg)
{
    int* p = (int*)field_74;
    p[0x13] = 1;
    field_6c = arg;
    field_5c = arg;
    sub_6329E0(0);
    sub_6338D0(field_5c);
}
}
