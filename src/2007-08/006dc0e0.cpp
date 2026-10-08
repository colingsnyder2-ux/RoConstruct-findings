// from server: 100% by colin
// roc 2007-08 006dc0e0  unit: CXTPDockingPaneWindowSelect  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006dc0e0
//
// 006dc0e0  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 006dc0e6  8b80cc000000         mov eax, dword ptr [eax + 0xcc]
// 006dc0ec  50                   push eax
// 006dc0ed  e872c20500           call 0x738364
// 006dc0f2  50                   push eax
// 006dc0f3  e80a41f5ff           call 0x630202
// 006dc0f8  83c408               add esp, 8
// 006dc0fb  85c0                 test eax, eax
// 006dc0fd  7407                 je 0x6dc106
// 006dc0ff  8b80d4000000         mov eax, dword ptr [eax + 0xd4]
// 006dc105  c3                   ret 
// 006dc106  33c0                 xor eax, eax
// 006dc108  c3                   ret 

struct CXTPDockingPaneWindowSelect {
    char pad[0xe4];
    void* field_e4;
    void* get();
};

extern "C" void* __cdecl sub_738364(void*);
extern "C" void* __cdecl sub_630202(void*);

void* CXTPDockingPaneWindowSelect::get()
{
    void* p = *(void**)((char*)field_e4 + 0xcc);
    void* q = sub_630202(sub_738364(p));
    if (q != 0)
        return *(void**)((char*)q + 0xd4);
    return 0;
}
