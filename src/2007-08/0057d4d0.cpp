// from server: 100% by colin
// roc 2007-08 0057d4d0  unit: RBX::VFlag::?$FactoryProduct::Creator  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057d4d0
//
// 0057d4d0  56                   push esi
// 0057d4d1  8b742408             mov esi, dword ptr [esp + 8]
// 0057d4d5  85f6                 test esi, esi
// 0057d4d7  742c                 je 0x57d505
// 0057d4d9  8da42400000000       lea esp, [esp]
// 0057d4e0  6a00                 push 0
// 0057d4e2  68044e8800           push 0x884e04
// 0057d4e7  684c1f8800           push 0x881f4c
// 0057d4ec  6a00                 push 0
// 0057d4ee  56                   push esi
// 0057d4ef  e842380b00           call 0x630d36
// 0057d4f4  83c414               add esp, 0x14
// 0057d4f7  85c0                 test eax, eax
// 0057d4f9  750e                 jne 0x57d509
// 0057d4fb  8bb6bc000000         mov esi, dword ptr [esi + 0xbc]
// 0057d501  85f6                 test esi, esi
// 0057d503  75db                 jne 0x57d4e0
// 0057d505  33c0                 xor eax, eax
// 0057d507  5e                   pop esi
// 0057d508  c3                   ret 
// 0057d509  8bc8                 mov ecx, eax
// 0057d50b  5e                   pop esi
// 0057d50c  e91fcfedff           jmp 0x45a430

struct RBX_Instance {
    char pad[0xbc];
    RBX_Instance* field_bc;
};

extern "C" void* __cdecl sub_630d36(RBX_Instance* p, int a, void* b, void* c, int d);
extern "C" void* __fastcall sub_45a430(void* p);

void* __cdecl sub_57d4d0(RBX_Instance* p)
{
    while (p != 0) {
        void* r = sub_630d36(p, 0, (void*)0x881f4c, (void*)0x884e04, 0);
        if (r != 0) {
            return sub_45a430(r);
        }
        p = p->field_bc;
    }
    return 0;
}
