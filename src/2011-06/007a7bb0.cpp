// from server: 100% by tester
// roc 2011-06 007a7bb0  unit: RBX::PrismPoly  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007a7bb0
//
// 007a7bb0  56                   push esi
// 007a7bb1  8b742408             mov esi, dword ptr [esp + 8]
// 007a7bb5  85f6                 test esi, esi
// 007a7bb7  7413                 je 0x7a7bcc
// 007a7bb9  8b4614               mov eax, dword ptr [esi + 0x14]
// 007a7bbc  50                   push eax
// 007a7bbd  56                   push esi
// 007a7bbe  e82dffffff           call 0x7a7af0
// 007a7bc3  56                   push esi
// 007a7bc4  e88f240600           call 0x80a058
// 007a7bc9  83c40c               add esp, 0xc
// 007a7bcc  5e                   pop esi
// 007a7bcd  c3                   ret 

struct PrismPoly {
    static void destroy(PrismPoly* p);
};

extern "C" void __cdecl sub_90BFB0(void*, void*);
extern "C" void __cdecl sub_982114(void*);

void PrismPoly::destroy(PrismPoly* p)
{
    if (p) {
        sub_90BFB0(p, *(void**)((char*)p + 0x14));
        sub_982114(p);
    }
}
