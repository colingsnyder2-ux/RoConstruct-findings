// roc 2007-03 006c5240  unit: seg_006c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c5240
//
// 006c5240  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 006c5246  8b80cc000000         mov eax, dword ptr [eax + 0xcc]
// 006c524c  50                   push eax
// 006c524d  e81e590700           call 0x73ab70
// 006c5252  50                   push eax
// 006c5253  e83894f5ff           call 0x61e690
// 006c5258  83c408               add esp, 8
// 006c525b  85c0                 test eax, eax
// 006c525d  7407                 je 0x6c5266
// 006c525f  8b80d4000000         mov eax, dword ptr [eax + 0xd4]
// 006c5265  c3                   ret 
// 006c5266  33c0                 xor eax, eax
// 006c5268  c3                   ret 
// copied from an identical function in another client (function ?get@CXTPDockingPaneWindowSelect@ns_ROCX000065@@QAEPAXXZ)

namespace ns_ROCX000065 {
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
}
