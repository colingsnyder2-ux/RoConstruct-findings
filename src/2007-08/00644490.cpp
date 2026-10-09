// from server: 74% by colin
// roc 2007-08 00644490  unit: CXTPCommandBar  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00644490
//
// 00644490  53                   push ebx
// 00644491  8bd9                 mov ebx, ecx
// 00644493  e818f5ffff           call 0x6439b0
// 00644498  85c0                 test eax, eax
// 0064449a  7538                 jne 0x6444d4
// 0064449c  8b8bf8000000         mov ecx, dword ptr [ebx + 0xf8]
// 006444a2  56                   push esi
// 006444a3  8b742414             mov esi, dword ptr [esp + 0x14]
// 006444a7  57                   push edi
// 006444a8  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006444ac  56                   push esi
// 006444ad  57                   push edi
// 006444ae  e8ed640300           call 0x67a9a0
// 006444b3  85c0                 test eax, eax
// 006444b5  7414                 je 0x6444cb
// 006444b7  8b10                 mov edx, dword ptr [eax]
// 006444b9  56                   push esi
// 006444ba  8bc8                 mov ecx, eax
// 006444bc  8b82ec000000         mov eax, dword ptr [edx + 0xec]
// 006444c2  57                   push edi
// 006444c3  ffd0                 call eax
// 006444c5  5f                   pop edi
// 006444c6  5e                   pop esi
// 006444c7  5b                   pop ebx
// 006444c8  c20c00               ret 0xc
// 006444cb  8bcb                 mov ecx, ebx
// 006444cd  e86cbdfeff           call 0x63023e
// 006444d2  5f                   pop edi
// 006444d3  5e                   pop esi
// 006444d4  5b                   pop ebx
// 006444d5  c20c00               ret 0xc

struct CXTPCommandBar {
    void* field0;
    char pad[0xf8 - 4];
    void* fieldF8;
    int method6439b0();
    int method67a9a0(void*, void*);
    void method63023e();
    int method644490(void*, void*, void*);
};

int CXTPCommandBar::method644490(void* a, void* b, void* c)
{
    if (this->method6439b0() == 0)
        return 0;
    int result = this->method67a9a0(a, b);
    if (result != 0) {
        void** vtbl = *(void***)result;
        int (*fn)(void*, void*, void*) = (int (*)(void*, void*, void*))vtbl[0xec / 4];
        return fn((void*)result, a, b);
    }
    this->method63023e();
    return 0;
}
