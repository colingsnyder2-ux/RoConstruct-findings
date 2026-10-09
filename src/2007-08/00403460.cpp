// from server: 98% by colin
// roc 2007-08 00403460  unit: ATL::CRegObject  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00403460
//
// 00403460  56                   push esi
// 00403461  8b742408             mov esi, dword ptr [esp + 8]
// 00403465  85f6                 test esi, esi
// 00403467  7443                 je 0x4034ac
// 00403469  8b460c               mov eax, dword ptr [esi + 0xc]
// 0040346c  85c0                 test eax, eax
// 0040346e  7408                 je 0x403478
// 00403470  8b08                 mov ecx, dword ptr [eax]
// 00403472  8b5108               mov edx, dword ptr [ecx + 8]
// 00403475  50                   push eax
// 00403476  ffd2                 call edx
// 00403478  8b4614               mov eax, dword ptr [esi + 0x14]
// 0040347b  85c0                 test eax, eax
// 0040347d  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00403484  741f                 je 0x4034a5
// 00403486  8b48fc               mov ecx, dword ptr [eax - 4]
// 00403489  57                   push edi
// 0040348a  8d78fc               lea edi, [eax - 4]
// 0040348d  68b0234000           push 0x4023b0
// 00403492  51                   push ecx
// 00403493  6a0c                 push 0xc
// 00403495  50                   push eax
// 00403496  e85cd62200           call 0x630af7
// 0040349b  57                   push edi
// 0040349c  e885ca2200           call 0x62ff26
// 004034a1  83c404               add esp, 4
// 004034a4  5f                   pop edi
// 004034a5  c7461400000000       mov dword ptr [esi + 0x14], 0
// 004034ac  5e                   pop esi
// 004034ad  c20400               ret 4

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
        _op_delete(b, 0xc, n, (void (*)(void*))0x4023b0);
        _free(base);
    }
    *(void**)((char*)p + 0x14) = 0;
}
