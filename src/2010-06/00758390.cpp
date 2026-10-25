// from server: 100% by tester
// roc 2010-06 00758390  unit: RBX::PrismPoly  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00758390
//
// 00758390  56                   push esi
// 00758391  8b742408             mov esi, dword ptr [esp + 8]
// 00758395  85f6                 test esi, esi
// 00758397  7413                 je 0x7583ac
// 00758399  8b4614               mov eax, dword ptr [esi + 0x14]
// 0075839c  50                   push eax
// 0075839d  56                   push esi
// 0075839e  e85dffffff           call 0x758300
// 007583a3  56                   push esi
// 007583a4  e8f1f50400           call 0x7a799a
// 007583a9  83c40c               add esp, 0xc
// 007583ac  5e                   pop esi
// 007583ad  c3                   ret 

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
