// roc 2009-12 0047bca0  unit: RBX::LDraw2Lua::LDraw2RobloxMapRoot  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0047bca0
//
// 0047bca0  64a100000000         mov eax, dword ptr fs:[0]
// 0047bca6  6aff                 push -1
// 0047bca8  689ce79200           push 0x92e79c
// 0047bcad  50                   push eax
// 0047bcae  64892500000000       mov dword ptr fs:[0], esp
// 0047bcb5  56                   push esi
// 0047bcb6  8b742414             mov esi, dword ptr [esp + 0x14]
// 0047bcba  57                   push edi
// 0047bcbb  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0047bcbf  3bf7                 cmp esi, edi
// 0047bcc1  742d                 je 0x47bcf0
// 0047bcc3  8d4e24               lea ecx, [esi + 0x24]
// 0047bcc6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0047bcce  ff15e4b69800         call dword ptr [0x98b6e4]
// 0047bcd4  8d4e08               lea ecx, [esi + 8]
// 0047bcd7  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0047bcdf  ff15e4b69800         call dword ptr [0x98b6e4]
// 0047bce5  83c640               add esi, 0x40
// 0047bce8  89742418             mov dword ptr [esp + 0x18], esi
// 0047bcec  3bf7                 cmp esi, edi
// 0047bcee  75d3                 jne 0x47bcc3
// 0047bcf0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0047bcf4  5f                   pop edi
// 0047bcf5  64890d00000000       mov dword ptr fs:[0], ecx
// 0047bcfc  5e                   pop esi
// 0047bcfd  83c40c               add esp, 0xc
// 0047bd00  c3                   ret 
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