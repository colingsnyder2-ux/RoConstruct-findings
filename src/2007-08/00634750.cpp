// from server: 100% by colin
// roc 2007-08 00634750  unit: MyXTPCommandBars  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00634750
//
// 00634750  56                   push esi
// 00634751  8bf1                 mov esi, ecx
// 00634753  8b4674               mov eax, dword ptr [esi + 0x74]
// 00634756  c7404c01000000       mov dword ptr [eax + 0x4c], 1
// 0063475d  8b442408             mov eax, dword ptr [esp + 8]
// 00634761  6a00                 push 0
// 00634763  89466c               mov dword ptr [esi + 0x6c], eax
// 00634766  89465c               mov dword ptr [esi + 0x5c], eax
// 00634769  e872e2ffff           call 0x6329e0
// 0063476e  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 00634771  51                   push ecx
// 00634772  8bce                 mov ecx, esi
// 00634774  e857f1ffff           call 0x6338d0
// 00634779  5e                   pop esi
// 0063477a  c20400               ret 4

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
    void func_00634750(int);
};

void MyXTPCommandBars::func_00634750(int arg)
{
    int* p = (int*)field_74;
    p[0x13] = 1;
    field_6c = arg;
    field_5c = arg;
    sub_6329E0(0);
    sub_6338D0(field_5c);
}
