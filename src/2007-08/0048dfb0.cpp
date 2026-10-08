// from server: 78% by colin
// roc 2007-08 0048dfb0  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0048dfb0
//
// 0048dfb0  56                   push esi
// 0048dfb1  8b742408             mov esi, dword ptr [esp + 8]
// 0048dfb5  85f6                 test esi, esi
// 0048dfb7  742c                 je 0x48dfe5
// 0048dfb9  8da42400000000       lea esp, [esp]
// 0048dfc0  6a00                 push 0
// 0048dfc2  68044e8800           push 0x884e04
// 0048dfc7  684c1f8800           push 0x881f4c
// 0048dfcc  6a00                 push 0
// 0048dfce  56                   push esi
// 0048dfcf  e8622d1a00           call 0x630d36
// 0048dfd4  83c414               add esp, 0x14
// 0048dfd7  85c0                 test eax, eax
// 0048dfd9  750e                 jne 0x48dfe9
// 0048dfdb  8bb6bc000000         mov esi, dword ptr [esi + 0xbc]
// 0048dfe1  85f6                 test esi, esi
// 0048dfe3  75db                 jne 0x48dfc0
// 0048dfe5  33c0                 xor eax, eax
// 0048dfe7  5e                   pop esi
// 0048dfe8  c3                   ret 
// 0048dfe9  8bc8                 mov ecx, eax
// 0048dfeb  5e                   pop esi
// 0048dfec  e99f05f8ff           jmp 0x40e590

struct RBXInstance
{
    char pad[0xbc];
    RBXInstance* field_bc;
};

extern "C" void* __cdecl sub_630d36(RBXInstance*, int, const char*, const char*, int);
extern "C" void __fastcall sub_40e590(void*);

void* __cdecl sub_48dfb0(RBXInstance* instance)
{
    while (instance != 0)
    {
        void* result = sub_630d36(instance, 0, (const char*)0x881f4c, (const char*)0x884e04, 0);
        if (result != 0)
        {
            sub_40e590(result);
            return result;
        }
        instance = instance->field_bc;
    }
    return 0;
}
