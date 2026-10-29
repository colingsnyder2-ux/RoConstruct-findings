// roc 2010-06 00482040  unit: RBX::LDraw2Lua::LDraw2RobloxMapRoot  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00482040
//
// 00482040  64a100000000         mov eax, dword ptr fs:[0]
// 00482046  6aff                 push -1
// 00482048  68fc589800           push 0x9858fc
// 0048204d  50                   push eax
// 0048204e  64892500000000       mov dword ptr fs:[0], esp
// 00482055  56                   push esi
// 00482056  8b742414             mov esi, dword ptr [esp + 0x14]
// 0048205a  57                   push edi
// 0048205b  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0048205f  3bf7                 cmp esi, edi
// 00482061  742d                 je 0x482090
// 00482063  8d4e24               lea ecx, [esi + 0x24]
// 00482066  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0048206e  ff1500a49e00         call dword ptr [0x9ea400]
// 00482074  8d4e08               lea ecx, [esi + 8]
// 00482077  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0048207f  ff1500a49e00         call dword ptr [0x9ea400]
// 00482085  83c640               add esi, 0x40
// 00482088  89742418             mov dword ptr [esp + 0x18], esi
// 0048208c  3bf7                 cmp esi, edi
// 0048208e  75d3                 jne 0x482063
// 00482090  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00482094  5f                   pop edi
// 00482095  64890d00000000       mov dword ptr fs:[0], ecx
// 0048209c  5e                   pop esi
// 0048209d  83c40c               add esp, 0xc
// 004820a0  c3                   ret 
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