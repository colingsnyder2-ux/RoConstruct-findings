// from server: 78% by colin
// roc 2007-08 006736c0  unit: CXTPCustomizeSheet  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006736c0
//
// 006736c0  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 006736c6  8b4058               mov eax, dword ptr [eax + 0x58]
// 006736c9  85c0                 test eax, eax
// 006736cb  741c                 je 0x6736e9
// 006736cd  c7804801000003000000 mov dword ptr [eax + 0x148], 3
// 006736d7  8b80fc000000         mov eax, dword ptr [eax + 0xfc]
// 006736dd  8b10                 mov edx, dword ptr [eax]
// 006736df  8bc8                 mov ecx, eax
// 006736e1  8b827c010000         mov eax, dword ptr [edx + 0x17c]
// 006736e7  ffe0                 jmp eax
// 006736e9  c3                   ret 

struct CXTPCustomizeSheet {
    char pad[0xb8];
    void* field_b8;
    void activate();
};

void CXTPCustomizeSheet::activate() {
    void* p = field_b8;
    void* q = *(void**)((char*)p + 0x58);
    if (q != 0) {
        *(int*)((char*)q + 0x148) = 3;
        void* r = *(void**)((char*)q + 0xfc);
        void** vt = *(void***)r;
        void (*fn)() = (void (*)())*(void**)((char*)vt + 0x17c);
        fn();
    }
}
