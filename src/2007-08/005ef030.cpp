// from server: 63% by colin
// roc 2007-08 005ef030  unit: RBX::VRocket::?$BoundFuncDesc  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ef030
//
// 005ef030  8b442404             mov eax, dword ptr [esp + 4]
// 005ef034  83ec0c               sub esp, 0xc
// 005ef037  56                   push esi
// 005ef038  6a00                 push 0
// 005ef03a  68a0028b00           push 0x8b02a0
// 005ef03f  689c208800           push 0x88209c
// 005ef044  6a00                 push 0
// 005ef046  50                   push eax
// 005ef047  8bf1                 mov esi, ecx
// 005ef049  e8e81c0400           call 0x630d36
// 005ef04e  83c414               add esp, 0x14
// 005ef051  85c0                 test eax, eax
// 005ef053  751e                 jne 0x5ef073
// 005ef055  68046e7800           push 0x786e04
// 005ef05a  8d4c2408             lea ecx, [esp + 8]
// 005ef05e  ff1510e77700         call dword ptr [0x77e710]
// 005ef064  680c1e8400           push 0x841e0c
// 005ef069  8d4c2408             lea ecx, [esp + 8]
// 005ef06d  51                   push ecx
// 005ef06e  e82b1b0400           call 0x630b9e
// 005ef073  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 005ef076  8b5628               mov edx, dword ptr [esi + 0x28]
// 005ef079  03c8                 add ecx, eax
// 005ef07b  ffd2                 call edx
// 005ef07d  5e                   pop esi
// 005ef07e  83c40c               add esp, 0xc
// 005ef081  c20800               ret 8

struct BoundFuncDesc {
    char pad[0x28];
    int m_func;
    int m_extra;
    void invoke(int a, int b);
};

extern "C" int __cdecl sub_630d36(int, int, int, int, int);
extern "C" void __cdecl sub_630b9e(void*, void*);
extern "C" void* __stdcall sub_77e710(void*);

void BoundFuncDesc::invoke(int a, int b) {
    int r = sub_630d36(a, 0, 0x88209c, 0x8b02a0, 0);
    if (r == 0) {
        char buf[4];
        sub_77e710(buf);
        sub_630b9e(buf, (void*)0x841e0c);
    }
    int (*fn)(int) = (int (*)(int))m_func;
    fn(m_extra + r);
}
