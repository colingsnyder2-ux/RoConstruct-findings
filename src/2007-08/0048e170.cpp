// from server: 100% by colin
// roc 2007-08 0048e170  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0048e170
//
// 0048e170  56                   push esi
// 0048e171  8b742408             mov esi, dword ptr [esp + 8]
// 0048e175  85f6                 test esi, esi
// 0048e177  742c                 je 0x48e1a5
// 0048e179  8da42400000000       lea esp, [esp]
// 0048e180  6a00                 push 0
// 0048e182  68044e8800           push 0x884e04
// 0048e187  684c1f8800           push 0x881f4c
// 0048e18c  6a00                 push 0
// 0048e18e  56                   push esi
// 0048e18f  e8a22b1a00           call 0x630d36
// 0048e194  83c414               add esp, 0x14
// 0048e197  85c0                 test eax, eax
// 0048e199  750e                 jne 0x48e1a9
// 0048e19b  8bb6bc000000         mov esi, dword ptr [esi + 0xbc]
// 0048e1a1  85f6                 test esi, esi
// 0048e1a3  75db                 jne 0x48e180
// 0048e1a5  33c0                 xor eax, eax
// 0048e1a7  5e                   pop esi
// 0048e1a8  c3                   ret 
// 0048e1a9  8bc8                 mov ecx, eax
// 0048e1ab  5e                   pop esi
// 0048e1ac  e9afedffff           jmp 0x48cf60

struct RBXInstance {
    char pad[0xbc];
    RBXInstance* next;
};

extern "C" int __cdecl sub_630d36(RBXInstance*, int, const char*, const char*, int);

void* __fastcall sub_48cf60(void*);

void* __cdecl sub_48e170(RBXInstance* p)
{
    while (p) {
        int r = sub_630d36(p, 0, (const char*)0x881f4c, (const char*)0x884e04, 0);
        if (r)
            return sub_48cf60((void*)r);
        p = p->next;
    }
    return 0;
}
