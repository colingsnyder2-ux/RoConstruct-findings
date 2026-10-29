// from server: 100% by tester
// roc 2007-03 00403340  unit: seg_00400000  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00403340
//
// 00403340  56                   push esi
// 00403341  8b742408             mov esi, dword ptr [esp + 8]
// 00403345  85f6                 test esi, esi
// 00403347  7443                 je 0x40338c
// 00403349  8b460c               mov eax, dword ptr [esi + 0xc]
// 0040334c  85c0                 test eax, eax
// 0040334e  7408                 je 0x403358
// 00403350  8b08                 mov ecx, dword ptr [eax]
// 00403352  8b5108               mov edx, dword ptr [ecx + 8]
// 00403355  50                   push eax
// 00403356  ffd2                 call edx
// 00403358  8b4614               mov eax, dword ptr [esi + 0x14]
// 0040335b  85c0                 test eax, eax
// 0040335d  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00403364  741f                 je 0x403385
// 00403366  8b48fc               mov ecx, dword ptr [eax - 4]
// 00403369  57                   push edi
// 0040336a  8d78fc               lea edi, [eax - 4]
// 0040336d  6820104000           push 0x401020
// 00403372  51                   push ecx
// 00403373  6a0c                 push 0xc
// 00403375  50                   push eax
// 00403376  e80abc2100           call 0x61ef85
// 0040337b  57                   push edi
// 0040337c  e833b02100           call 0x61e3b4
// 00403381  83c404               add esp, 4
// 00403384  5f                   pop edi
// 00403385  c7461400000000       mov dword ptr [esi + 0x14], 0
// 0040338c  5e                   pop esi
// 0040338d  c20400               ret 4

extern "C" void __cdecl _free(void*);
extern "C" void __stdcall _op_delete(void*, unsigned int, int, void (*)(void*));

struct CRegObject {
    void Cleanup(void* p);
};

void CRegObject::Cleanup(void* p)
{
    if (p == 0)
        return;

    void* a = *(void**)((char*)p + 0xc);
    if (a != 0) {
        void** vt = *(void***)a;
        void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vt[2];
        fn(a);
    }

    void* b = *(void**)((char*)p + 0x14);
    *(void**)((char*)p + 0xc) = 0;
    if (b != 0) {
        int n = *(int*)((char*)b - 4);
        void* base = (char*)b - 4;
        _op_delete(b, 0xc, n, (void (*)(void*))0x401020);
        _free(base);
    }
    *(void**)((char*)p + 0x14) = 0;
}
