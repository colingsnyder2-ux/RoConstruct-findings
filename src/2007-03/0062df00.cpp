// roc 2007-03 0062df00  unit: seg_00620000  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0062df00
//
// 0062df00  56                   push esi
// 0062df01  8bf1                 mov esi, ecx
// 0062df03  8b4674               mov eax, dword ptr [esi + 0x74]
// 0062df06  c7404c01000000       mov dword ptr [eax + 0x4c], 1
// 0062df0d  8b442408             mov eax, dword ptr [esp + 8]
// 0062df11  6a00                 push 0
// 0062df13  89466c               mov dword ptr [esi + 0x6c], eax
// 0062df16  89465c               mov dword ptr [esi + 0x5c], eax
// 0062df19  e8e2e1ffff           call 0x62c100
// 0062df1e  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 0062df21  51                   push ecx
// 0062df22  8bce                 mov ecx, esi
// 0062df24  e857f1ffff           call 0x62d080
// 0062df29  5e                   pop esi
// 0062df2a  c20400               ret 4
// copied from an identical function in another client (function ?fn_ROCX000008@MyXTPCommandBars@ns_ROCX000008@@QAEXH@Z)

namespace ns_ROCX000008 {
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
    void fn_ROCX000008(int);
};

void MyXTPCommandBars::fn_ROCX000008(int arg)
{
    int* p = (int*)field_74;
    p[0x13] = 1;
    field_6c = arg;
    field_5c = arg;
    sub_6329E0(0);
    sub_6338D0(field_5c);
}
}
