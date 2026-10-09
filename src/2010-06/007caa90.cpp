// roc 2010-06 007caa90  unit: MyXTPCommandBars  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007caa90
//
// 007caa90  56                   push esi
// 007caa91  8bf1                 mov esi, ecx
// 007caa93  8b4674               mov eax, dword ptr [esi + 0x74]
// 007caa96  c7404c01000000       mov dword ptr [eax + 0x4c], 1
// 007caa9d  8b442408             mov eax, dword ptr [esp + 8]
// 007caaa1  6a00                 push 0
// 007caaa3  89466c               mov dword ptr [esi + 0x6c], eax
// 007caaa6  89465c               mov dword ptr [esi + 0x5c], eax
// 007caaa9  e8c2e3ffff           call 0x7c8e70
// 007caaae  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 007caab1  51                   push ecx
// 007caab2  8bce                 mov ecx, esi
// 007caab4  e857f1ffff           call 0x7c9c10
// 007caab9  5e                   pop esi
// 007caaba  c20400               ret 4
// copied from an identical function in another client (function ?fn_ROCX00000a@MyXTPCommandBars@ns_ROCX00000a@@QAEXH@Z)

namespace ns_ROCX00000a {
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
    void fn_ROCX00000a(int);
};

void MyXTPCommandBars::fn_ROCX00000a(int arg)
{
    int* p = (int*)field_74;
    p[0x13] = 1;
    field_6c = arg;
    field_5c = arg;
    sub_6329E0(0);
    sub_6338D0(field_5c);
}
}
