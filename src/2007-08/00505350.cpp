// from server: 87% by colin
// roc 2007-08 00505350  unit: G3D::Log  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00505350
//
// 00505350  53                   push ebx
// 00505351  56                   push esi
// 00505352  57                   push edi
// 00505353  8bf1                 mov esi, ecx
// 00505355  e806f3ffff           call 0x504660
// 0050535a  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0050535e  8b4308               mov eax, dword ptr [ebx + 8]
// 00505361  894608               mov dword ptr [esi + 8], eax
// 00505364  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 00505367  8bf9                 mov edi, ecx
// 00505369  0faf7e08             imul edi, dword ptr [esi + 8]
// 0050536d  894e0c               mov dword ptr [esi + 0xc], ecx
// 00505370  8b4310               mov eax, dword ptr [ebx + 0x10]
// 00505373  0faff8               imul edi, eax
// 00505376  57                   push edi
// 00505377  894610               mov dword ptr [esi + 0x10], eax
// 0050537a  e891acffff           call 0x500010
// 0050537f  894604               mov dword ptr [esi + 4], eax
// 00505382  8b5304               mov edx, dword ptr [ebx + 4]
// 00505385  57                   push edi
// 00505386  52                   push edx
// 00505387  50                   push eax
// 00505388  e8bfb91200           call 0x630d4c
// 0050538d  83c410               add esp, 0x10
// 00505390  5f                   pop edi
// 00505391  5e                   pop esi
// 00505392  5b                   pop ebx
// 00505393  c20400               ret 4

struct Log {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    void init();
    void construct(int* src);
};

extern "C" void* __cdecl sub_500010(unsigned int size);
extern "C" void __cdecl sub_630d4c(void* dst, const void* src, unsigned int size);

void Log::construct(int* src) {
    init();
    field8 = src[2];
    int c = src[3];
    fieldC = c;
    int e = src[4];
    field10 = e;
    int total = c * field8 * e;
    field4 = (int)sub_500010(total);
    sub_630d4c((void*)field4, (const void*)src[1], total);
}
