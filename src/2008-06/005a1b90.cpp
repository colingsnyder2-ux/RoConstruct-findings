// from server: 100% by tester
// roc 2008-06 005a1b90  unit: RBX::Workspace  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a1b90
//
// 005a1b90  8b442408             mov eax, dword ptr [esp + 8]
// 005a1b94  56                   push esi
// 005a1b95  8bf1                 mov esi, ecx
// 005a1b97  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a1b9b  50                   push eax
// 005a1b9c  51                   push ecx
// 005a1b9d  8bce                 mov ecx, esi
// 005a1b9f  e8ec58fbff           call 0x557490
// 005a1ba4  c644240c00           mov byte ptr [esp + 0xc], 0
// 005a1ba9  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005a1bad  52                   push edx
// 005a1bae  8d8e44030000         lea ecx, [esi + 0x344]
// 005a1bb4  e8874dfdff           call 0x576940
// 005a1bb9  5e                   pop esi
// 005a1bba  c20800               ret 8

struct Workspace {
    char pad[0x344];
    int field_2d4;
    void sub_0053e2a0(int, int);
    void sub_00558b60(int);
    void sub_0057bfa0(int, int);
};

void Workspace::sub_0057bfa0(int a, int b)
{
    sub_0053e2a0(a, b);
    char flag = 0;
    ((Workspace*)((char*)this + 0x344))->sub_00558b60(*(int*)&flag);
}
