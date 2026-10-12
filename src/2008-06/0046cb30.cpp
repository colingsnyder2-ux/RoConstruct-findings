// from server: 100% by king_originala
// roc 2008-06 0046cb30  unit: RBX::LDraw2Lua::LDraw2RobloxColorMap  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046cb30
//
// 0046cb30  6aff                 push -1
// 0046cb32  68cc6f7c00           push 0x7c6fcc
// 0046cb37  64a100000000         mov eax, dword ptr fs:[0]
// 0046cb3d  50                   push eax
// 0046cb3e  64892500000000       mov dword ptr fs:[0], esp
// 0046cb45  51                   push ecx
// 0046cb46  56                   push esi
// 0046cb47  8bf1                 mov esi, ecx
// 0046cb49  89742404             mov dword ptr [esp + 4], esi
// 0046cb4d  8d4e24               lea ecx, [esi + 0x24]
// 0046cb50  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0046cb58  ff1568248000         call dword ptr [0x802468]
// 0046cb5e  8d4e08               lea ecx, [esi + 8]
// 0046cb61  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0046cb69  ff1568248000         call dword ptr [0x802468]
// 0046cb6f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0046cb73  5e                   pop esi
// 0046cb74  64890d00000000       mov dword ptr fs:[0], ecx
// 0046cb7b  83c410               add esp, 0x10
// 0046cb7e  c3                   ret 

extern "C" void (__thiscall *destroy_string)(void *);

namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits, class Allocator>
    class basic_string {
        char storage[28];
    public:
        ~basic_string();
    };

    template<class T, class Traits, class Allocator>
    inline basic_string<T, Traits, Allocator>::~basic_string()
    {
        destroy_string(this);
    }
}

struct S {
    char padding[8];
    std::basic_string<char, std::char_traits<char>, std::allocator<char> > first;
    std::basic_string<char, std::char_traits<char>, std::allocator<char> > second;
    ~S();
};

S::~S()
{
}
