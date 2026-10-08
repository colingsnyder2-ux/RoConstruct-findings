// from server: 71% by colin
// roc 2007-08 006737e0  unit: CXTPCustomizeSheet  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006737e0
//
// 006737e0  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 006737e6  8b4858               mov ecx, dword ptr [eax + 0x58]
// 006737e9  85c9                 test ecx, ecx
// 006737eb  7405                 je 0x6737f2
// 006737ed  e9be69fcff           jmp 0x63a1b0
// 006737f2  c3                   ret 

struct CXTPCustomizeSheet {
    char pad[0xb8];
    void* field_b8;
    void get();
};

void __stdcall sub_63A1B0(void*);

void CXTPCustomizeSheet::get()
{
    void* p = *(void**)((char*)field_b8 + 0x58);
    if (p != 0)
        sub_63A1B0(p);
}
