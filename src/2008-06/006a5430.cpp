// roc 2008-06 006a5430  unit: MyXTPCommandBars  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a5430
//
// 006a5430  56                   push esi
// 006a5431  8bf1                 mov esi, ecx
// 006a5433  8b4674               mov eax, dword ptr [esi + 0x74]
// 006a5436  c7404c01000000       mov dword ptr [eax + 0x4c], 1
// 006a543d  8b442408             mov eax, dword ptr [esp + 8]
// 006a5441  6a00                 push 0
// 006a5443  89466c               mov dword ptr [esi + 0x6c], eax
// 006a5446  89465c               mov dword ptr [esi + 0x5c], eax
// 006a5449  e8a2e3ffff           call 0x6a37f0
// 006a544e  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 006a5451  51                   push ecx
// 006a5452  8bce                 mov ecx, esi
// 006a5454  e857f1ffff           call 0x6a45b0
// 006a5459  5e                   pop esi
// 006a545a  c20400               ret 4
// copied from an identical function in another client (function ?fn_ROCX000004@MyXTPCommandBars@ns_ROCX000004@@QAEXH@Z)

namespace ns_ROCX000004 {
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
    void fn_ROCX000004(int);
};

void MyXTPCommandBars::fn_ROCX000004(int arg)
{
    int* p = (int*)field_74;
    p[0x13] = 1;
    field_6c = arg;
    field_5c = arg;
    sub_6329E0(0);
    sub_6338D0(field_5c);
}
}
