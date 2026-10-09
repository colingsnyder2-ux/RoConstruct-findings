// from DeepSeek/server: 100% by colin
// roc 2007-08 004c1b50  unit: RakPeer  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c1b50
//
// 004c1b50  80b98000000000       cmp byte ptr [ecx + 0x80], 0
// 004c1b57  744a                 je 0x4c1ba3
// 004c1b59  8d8114010000         lea eax, [ecx + 0x114]
// 004c1b5f  50                   push eax
// 004c1b60  8d9104010000         lea edx, [ecx + 0x104]
// 004c1b66  52                   push edx
// 004c1b67  8d81e4000000         lea eax, [ecx + 0xe4]
// 004c1b6d  50                   push eax
// 004c1b6e  8d91d4000000         lea edx, [ecx + 0xd4]
// 004c1b74  52                   push edx
// 004c1b75  8d8124010000         lea eax, [ecx + 0x124]
// 004c1b7b  50                   push eax
// 004c1b7c  8d91f4000000         lea edx, [ecx + 0xf4]
// 004c1b82  52                   push edx
// 004c1b83  8b542420             mov edx, dword ptr [esp + 0x20]
// 004c1b87  8d81c4000000         lea eax, [ecx + 0xc4]
// 004c1b8d  50                   push eax
// 004c1b8e  81c184000000         add ecx, 0x84
// 004c1b94  51                   push ecx
// 004c1b95  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004c1b99  51                   push ecx
// 004c1b9a  52                   push edx
// 004c1b9b  e820eeffff           call 0x4c09c0
// 004c1ba0  83c428               add esp, 0x28
// 004c1ba3  c20800               ret 8

struct RakPeer {
    char pad0[0x80];
    char flag80;
    char pad1[0x3];
    char field84[0x40];
    char fieldC4[0x10];
    char fieldD4[0x10];
    char fieldE4[0x10];
    char fieldF4[0x10];
    char field104[0x10];
    char field114[0x10];
    char field124[0x10];
    void method(int, int);
};

extern "C" void __cdecl sub_4C09C0(
    int, int,
    void*, void*,
    void*, void*,
    void*, void*,
    void*, void*);

void RakPeer::method(int a, int b) {
    if (flag80 != 0) {
        sub_4C09C0(
            b, a,
            field84, fieldC4,
            fieldF4, field124,
            fieldD4, fieldE4,
            field104, field114);
    }
}
