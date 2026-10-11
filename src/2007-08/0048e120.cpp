// from server: 100% by colin
// roc 2007-08 0048e120  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0048e120
//
// 0048e120  56                   push esi
// 0048e121  8b742408             mov esi, dword ptr [esp + 8]
// 0048e125  85f6                 test esi, esi
// 0048e127  742c                 je 0x48e155
// 0048e129  8da42400000000       lea esp, [esp]
// 0048e130  6a00                 push 0
// 0048e132  68044e8800           push 0x884e04
// 0048e137  684c1f8800           push 0x881f4c
// 0048e13c  6a00                 push 0
// 0048e13e  56                   push esi
// 0048e13f  e8f22b1a00           call 0x630d36
// 0048e144  83c414               add esp, 0x14
// 0048e147  85c0                 test eax, eax
// 0048e149  750e                 jne 0x48e159
// 0048e14b  8bb6bc000000         mov esi, dword ptr [esi + 0xbc]
// 0048e151  85f6                 test esi, esi
// 0048e153  75db                 jne 0x48e130
// 0048e155  33c0                 xor eax, eax
// 0048e157  5e                   pop esi
// 0048e158  c3                   ret 
// 0048e159  8bc8                 mov ecx, eax
// 0048e15b  5e                   pop esi
// 0048e15c  e93fecffff           jmp 0x48cda0

struct RBXInstance {
    char pad[0xbc];
    RBXInstance* next;
};

extern "C" int __cdecl sub_630d36(RBXInstance*, int, const char*, const char*, int);
extern "C" void* __fastcall sub_48cda0(void*);

void* __cdecl sub_48e120(RBXInstance* p)
{
    while (p) {
        int r = sub_630d36(p, 0, (const char*)0x881f4c, (const char*)0x884e04, 0);
        if (r)
            return sub_48cda0((void*)r);
        p = p->next;
    }
    return 0;
}
