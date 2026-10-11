// from server: 100% by colin
// roc 2007-08 0057d480  unit: RBX::VFlag::?$FactoryProduct::Creator  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057d480
//
// 0057d480  56                   push esi
// 0057d481  8b742408             mov esi, dword ptr [esp + 8]
// 0057d485  85f6                 test esi, esi
// 0057d487  742c                 je 0x57d4b5
// 0057d489  8da42400000000       lea esp, [esp]
// 0057d490  6a00                 push 0
// 0057d492  68044e8800           push 0x884e04
// 0057d497  684c1f8800           push 0x881f4c
// 0057d49c  6a00                 push 0
// 0057d49e  56                   push esi
// 0057d49f  e892380b00           call 0x630d36
// 0057d4a4  83c414               add esp, 0x14
// 0057d4a7  85c0                 test eax, eax
// 0057d4a9  750e                 jne 0x57d4b9
// 0057d4ab  8bb6bc000000         mov esi, dword ptr [esi + 0xbc]
// 0057d4b1  85f6                 test esi, esi
// 0057d4b3  75db                 jne 0x57d490
// 0057d4b5  33c0                 xor eax, eax
// 0057d4b7  5e                   pop esi
// 0057d4b8  c3                   ret 
// 0057d4b9  8bc8                 mov ecx, eax
// 0057d4bb  5e                   pop esi
// 0057d4bc  e9afcdedff           jmp 0x45a270

struct RBX_Instance {
    char pad[0xbc];
    RBX_Instance* field_bc;
};

extern "C" void* __cdecl sub_630d36(RBX_Instance* p, int a, void* b, void* c, int d);
extern "C" void* __fastcall sub_45a270(void* p);

void* __cdecl sub_57d480(RBX_Instance* p)
{
    while (p != 0) {
        void* r = sub_630d36(p, 0, (void*)0x881f4c, (void*)0x884e04, 0);
        if (r != 0) {
            return sub_45a270(r);
        }
        p = p->field_bc;
    }
    return 0;
}
