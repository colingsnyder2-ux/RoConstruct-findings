// from server: 38% by colin
// roc 2007-08 0063caa0  unit: CXTPControlActions  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063caa0
//
// 0063caa0  83ec08               sub esp, 8
// 0063caa3  56                   push esi
// 0063caa4  57                   push edi
// 0063caa5  8bf1                 mov esi, ecx
// 0063caa7  e844b20900           call 0x6d7cf0
// 0063caac  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0063cab0  8b470c               mov eax, dword ptr [edi + 0xc]
// 0063cab3  f7d8                 neg eax
// 0063cab5  1bc0                 sbb eax, eax
// 0063cab7  89442414             mov dword ptr [esp + 0x14], eax
// 0063cabb  7432                 je 0x63caef
// 0063cabd  8d4900               lea ecx, [ecx]
// 0063cac0  8d44240c             lea eax, [esp + 0xc]
// 0063cac4  50                   push eax
// 0063cac5  8d4c240c             lea ecx, [esp + 0xc]
// 0063cac9  51                   push ecx
// 0063caca  8d54241c             lea edx, [esp + 0x1c]
// 0063cace  52                   push edx
// 0063cacf  8bcf                 mov ecx, edi
// 0063cad1  e85af20a00           call 0x6ebd30
// 0063cad6  8b442408             mov eax, dword ptr [esp + 8]
// 0063cada  50                   push eax
// 0063cadb  8bce                 mov ecx, esi
// 0063cadd  e8be88ffff           call 0x6353a0
// 0063cae2  837c241400           cmp dword ptr [esp + 0x14], 0
// 0063cae7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0063caeb  8908                 mov dword ptr [eax], ecx
// 0063caed  75d1                 jne 0x63cac0
// 0063caef  5f                   pop edi
// 0063caf0  5e                   pop esi
// 0063caf1  83c408               add esp, 8
// 0063caf4  c20400               ret 4

struct CXTPControlActions {
    void m(void*);
};

extern void G1_func_006d7cf0();
extern void G1_func_006ebd30();
extern void* G1_func_006353a0();

void CXTPControlActions::m(void* p)
{
    G1_func_006d7cf0();
    int count = *(int*)((char*)p + 0xc);
    int flag = (count != 0) ? -1 : 0;
    if (flag != 0) {
        do {
            void* a;
            void* b;
            G1_func_006ebd30();
            void* r = G1_func_006353a0();
            *(void**)r = b;
        } while (flag != 0);
    }
}
