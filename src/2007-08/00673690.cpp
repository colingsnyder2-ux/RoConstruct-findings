// from server: 88% by colin
// roc 2007-08 00673690  unit: CXTPCustomizeSheet  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00673690
//
// 00673690  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 00673696  8b4058               mov eax, dword ptr [eax + 0x58]
// 00673699  85c0                 test eax, eax
// 0067369b  741c                 je 0x6736b9
// 0067369d  c7804801000000000000 mov dword ptr [eax + 0x148], 0
// 006736a7  8b80fc000000         mov eax, dword ptr [eax + 0xfc]
// 006736ad  8b10                 mov edx, dword ptr [eax]
// 006736af  8bc8                 mov ecx, eax
// 006736b1  8b827c010000         mov eax, dword ptr [edx + 0x17c]
// 006736b7  ffe0                 jmp eax
// 006736b9  c3                   ret 

struct CXTPCustomizeSheet {
    int field_0xb8;
    void sub_673690();
};

void CXTPCustomizeSheet::sub_673690() {
    int* p = *(int**)((char*)this + 0xb8);
    int* q = *(int**)((char*)p + 0x58);
    if (q != 0) {
        *(int*)((char*)q + 0x148) = 0;
        int* r = *(int**)((char*)q + 0xfc);
        int* vtbl = *(int**)r;
        int (*fn)(void*) = *(int (**)(void*))((char*)vtbl + 0x17c);
        fn(r);
    }
}
