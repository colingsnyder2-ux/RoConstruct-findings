// from server: 100% by king_originala
// roc 2008-06 0046e210  unit: RBX::LDraw2Lua::LDraw2RobloxMapRoot  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046e210
//
// 0046e210  64a100000000         mov eax, dword ptr fs:[0]
// 0046e216  6aff                 push -1
// 0046e218  683c3e7c00           push 0x7c3e3c
// 0046e21d  50                   push eax
// 0046e21e  64892500000000       mov dword ptr fs:[0], esp
// 0046e225  56                   push esi
// 0046e226  8b742414             mov esi, dword ptr [esp + 0x14]
// 0046e22a  57                   push edi
// 0046e22b  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0046e22f  3bf7                 cmp esi, edi
// 0046e231  742d                 je 0x46e260
// 0046e233  8d4e24               lea ecx, [esi + 0x24]
// 0046e236  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0046e23e  ff1568248000         call dword ptr [0x802468]
// 0046e244  8d4e08               lea ecx, [esi + 8]
// 0046e247  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0046e24f  ff1568248000         call dword ptr [0x802468]
// 0046e255  83c640               add esi, 0x40
// 0046e258  89742418             mov dword ptr [esp + 0x18], esi
// 0046e25c  3bf7                 cmp esi, edi
// 0046e25e  75d3                 jne 0x46e233
// 0046e260  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0046e264  5f                   pop edi
// 0046e265  64890d00000000       mov dword ptr fs:[0], ecx
// 0046e26c  5e                   pop esi
// 0046e26d  83c40c               add esp, 0xc
// 0046e270  c3                   ret 

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
