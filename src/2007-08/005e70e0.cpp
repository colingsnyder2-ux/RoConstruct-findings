// from server: 92% by colin
// roc 2007-08 005e70e0  unit: RBX::VFlag::?$FactoryProduct  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e70e0
//
// 005e70e0  56                   push esi
// 005e70e1  8b742408             mov esi, dword ptr [esp + 8]
// 005e70e5  85f6                 test esi, esi
// 005e70e7  742c                 je 0x5e7115
// 005e70e9  8da42400000000       lea esp, [esp]
// 005e70f0  6a00                 push 0
// 005e70f2  68044e8800           push 0x884e04
// 005e70f7  684c1f8800           push 0x881f4c
// 005e70fc  6a00                 push 0
// 005e70fe  56                   push esi
// 005e70ff  e8329c0400           call 0x630d36
// 005e7104  83c414               add esp, 0x14
// 005e7107  85c0                 test eax, eax
// 005e7109  750e                 jne 0x5e7119
// 005e710b  8bb6bc000000         mov esi, dword ptr [esi + 0xbc]
// 005e7111  85f6                 test esi, esi
// 005e7113  75db                 jne 0x5e70f0
// 005e7115  33c0                 xor eax, eax
// 005e7117  5e                   pop esi
// 005e7118  c3                   ret 
// 005e7119  8bc8                 mov ecx, eax
// 005e711b  5e                   pop esi
// 005e711c  e9effdffff           jmp 0x5e6f10

struct RBX_Instance {
    char pad[0xbc];
    RBX_Instance* next;
};

extern "C" int __cdecl sub_630D36(int, int, int, int, int);
extern "C" int __cdecl sub_5E6F10(int);

int __cdecl sub_5E70E0(RBX_Instance* p)
{
    while (p != 0) {
        int r = sub_630D36((int)p, 0, 0x881f4c, 0x884e04, 0);
        if (r != 0) {
            return sub_5E6F10(r);
        }
        p = p->next;
    }
    return 0;
}
