// roc 2009-06 00471be0  unit: RBX::LDraw2Lua::LDraw2RobloxMapRoot  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00471be0
//
// 00471be0  64a100000000         mov eax, dword ptr fs:[0]
// 00471be6  6aff                 push -1
// 00471be8  687c3c8500           push 0x853c7c
// 00471bed  50                   push eax
// 00471bee  64892500000000       mov dword ptr fs:[0], esp
// 00471bf5  56                   push esi
// 00471bf6  8b742414             mov esi, dword ptr [esp + 0x14]
// 00471bfa  57                   push edi
// 00471bfb  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00471bff  3bf7                 cmp esi, edi
// 00471c01  742d                 je 0x471c30
// 00471c03  8d4e24               lea ecx, [esi + 0x24]
// 00471c06  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00471c0e  ff15c4e48900         call dword ptr [0x89e4c4]
// 00471c14  8d4e08               lea ecx, [esi + 8]
// 00471c17  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00471c1f  ff15c4e48900         call dword ptr [0x89e4c4]
// 00471c25  83c640               add esi, 0x40
// 00471c28  89742418             mov dword ptr [esp + 0x18], esi
// 00471c2c  3bf7                 cmp esi, edi
// 00471c2e  75d3                 jne 0x471c03
// 00471c30  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00471c34  5f                   pop edi
// 00471c35  64890d00000000       mov dword ptr fs:[0], ecx
// 00471c3c  5e                   pop esi
// 00471c3d  83c40c               add esp, 0xc
// 00471c40  c3                   ret 
// copied from an identical function in another client (function ?destroy_elements@@YAXPAUElement@@0@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern void (__thiscall *destroy_string)(void*);

namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class C, class T, class A>
    class basic_string {
        unsigned char storage[28];
    public:
        ~basic_string();
    };

    template<class C, class T, class A>
    inline basic_string<C, T, A>::~basic_string()
    {
        destroy_string(this);
    }
}

struct Element {
    unsigned char prefix[8];
    std::basic_string<char, std::char_traits<char>, std::allocator<char> > first;
    std::basic_string<char, std::char_traits<char>, std::allocator<char> > second;
};

void __cdecl destroy_elements(Element* first, Element* last)
{
    for (; first != last; ++first)
        first->~Element();
}