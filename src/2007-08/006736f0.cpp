// from server: 88% by colin
// roc 2007-08 006736f0  unit: CXTPCustomizeSheet  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006736f0
//
// 006736f0  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 006736f6  8b4058               mov eax, dword ptr [eax + 0x58]
// 006736f9  85c0                 test eax, eax
// 006736fb  741c                 je 0x673719
// 006736fd  c7804801000001000000 mov dword ptr [eax + 0x148], 1
// 00673707  8b80fc000000         mov eax, dword ptr [eax + 0xfc]
// 0067370d  8b10                 mov edx, dword ptr [eax]
// 0067370f  8bc8                 mov ecx, eax
// 00673711  8b827c010000         mov eax, dword ptr [edx + 0x17c]
// 00673717  ffe0                 jmp eax
// 00673719  c3                   ret 

struct CXTPCustomizeSheet {
    char pad[0xb8];
    void* field_b8;
    void SetActive();
};

void CXTPCustomizeSheet::SetActive()
{
    void* p = field_b8;
    void* q = *(void**)((char*)p + 0x58);
    if (q != 0) {
        *(int*)((char*)q + 0x148) = 1;
        void* r = *(void**)((char*)q + 0xfc);
        void** vt = *(void***)r;
        void (*fn)(void*) = *(void (**)(void*))((char*)vt + 0x17c);
        fn(r);
    }
}
