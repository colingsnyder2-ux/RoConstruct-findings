// from server: 91% by colin
// roc 2007-08 0044c3e0  unit: CRobloxControlColorSelector  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044c3e0
//
// 0044c3e0  56                   push esi
// 0044c3e1  8b742408             mov esi, dword ptr [esp + 8]
// 0044c3e5  57                   push edi
// 0044c3e6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0044c3ea  3bf7                 cmp esi, edi
// 0044c3ec  7412                 je 0x44c400
// 0044c3ee  8bff                 mov edi, edi
// 0044c3f0  8d4e08               lea ecx, [esi + 8]
// 0044c3f3  ff15bcdd7700         call dword ptr [0x77ddbc]
// 0044c3f9  83c60c               add esi, 0xc
// 0044c3fc  3bf7                 cmp esi, edi
// 0044c3fe  75f0                 jne 0x44c3f0
// 0044c400  5f                   pop edi
// 0044c401  5e                   pop esi
// 0044c402  c20800               ret 8

struct S {
    void f(void* a, void* b);
};

extern "C" void __stdcall sub_77ddbc(void*);

void S::f(void* a, void* b)
{
    char* p = (char*)a;
    char* q = (char*)b;
    while (p != q) {
        sub_77ddbc(p + 8);
        p += 12;
    }
}
