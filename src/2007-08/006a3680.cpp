// from server: 64% by colin
// roc 2007-08 006a3680  unit: CXTPHookManager::CHookSink  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a3680
//
// 006a3680  8b442404             mov eax, dword ptr [esp + 4]
// 006a3684  56                   push esi
// 006a3685  57                   push edi
// 006a3686  8bf1                 mov esi, ecx
// 006a3688  6a00                 push 0
// 006a368a  8d7e14               lea edi, [esi + 0x14]
// 006a368d  50                   push eax
// 006a368e  8bcf                 mov ecx, edi
// 006a3690  e83bf7ffff           call 0x6a2dd0
// 006a3695  85c0                 test eax, eax
// 006a3697  7408                 je 0x6a36a1
// 006a3699  50                   push eax
// 006a369a  8bcf                 mov ecx, edi
// 006a369c  e8eff6ffff           call 0x6a2d90
// 006a36a1  837e2000             cmp dword ptr [esi + 0x20], 0
// 006a36a5  7512                 jne 0x6a36b9
// 006a36a7  6a00                 push 0
// 006a36a9  8bce                 mov ecx, esi
// 006a36ab  e8d0feffff           call 0x6a3580
// 006a36b0  6a00                 push 0
// 006a36b2  8bce                 mov ecx, esi
// 006a36b4  e877feffff           call 0x6a3530
// 006a36b9  5f                   pop edi
// 006a36ba  5e                   pop esi
// 006a36bb  c20400               ret 4

struct CHookSink {
    char pad[0x14];
    int field14;
    char pad2[0x20 - 0x18];
    int field20;
    int sub_6a2dd0(int);
    int sub_6a2d90(int);
    int sub_6a3580(int);
    int sub_6a3530(int);
    void func(int);
};

void CHookSink::func(int arg) {
    int r = sub_6a2dd0(arg);
    if (r != 0) {
        sub_6a2d90(r);
    }
    if (field20 == 0) {
        sub_6a3580(0);
        sub_6a3530(0);
    }
}
