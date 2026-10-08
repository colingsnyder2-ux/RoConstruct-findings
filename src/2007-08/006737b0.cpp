// from server: 88% by colin
// roc 2007-08 006737b0  unit: CXTPCustomizeSheet  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006737b0
//
// 006737b0  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 006737b6  8b4058               mov eax, dword ptr [eax + 0x58]
// 006737b9  85c0                 test eax, eax
// 006737bb  741c                 je 0x6737d9
// 006737bd  c7809000000000000000 mov dword ptr [eax + 0x90], 0
// 006737c7  8b80fc000000         mov eax, dword ptr [eax + 0xfc]
// 006737cd  8b10                 mov edx, dword ptr [eax]
// 006737cf  8bc8                 mov ecx, eax
// 006737d1  8b827c010000         mov eax, dword ptr [edx + 0x17c]
// 006737d7  ffe0                 jmp eax
// 006737d9  c3                   ret 

struct CXTPCustomizeSheet {
    char pad[0xb8];
    void* field_b8;
    void Release();
};

void CXTPCustomizeSheet::Release()
{
    void* p = field_b8;
    void* q = *(void**)((char*)p + 0x58);
    if (q != 0) {
        *(int*)((char*)q + 0x90) = 0;
        void* r = *(void**)((char*)q + 0xfc);
        void** vtbl = *(void***)r;
        void (*fn)(void*) = (void (*)(void*))vtbl[0x17c / 4];
        fn(r);
    }
}
