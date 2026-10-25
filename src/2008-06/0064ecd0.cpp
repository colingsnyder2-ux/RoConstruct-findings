// from server: 100% by king_originala
// roc 2008-06 0064ecd0  unit: RBX::MenuItem  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064ecd0
//
// 0064ecd0  6aff                 push -1
// 0064ecd2  68b8b47d00           push 0x7db4b8
// 0064ecd7  64a100000000         mov eax, dword ptr fs:[0]
// 0064ecdd  50                   push eax
// 0064ecde  64892500000000       mov dword ptr fs:[0], esp
// 0064ece5  51                   push ecx
// 0064ece6  56                   push esi
// 0064ece7  8bf1                 mov esi, ecx
// 0064ece9  89742404             mov dword ptr [esp + 4], esi
// 0064eced  8d8e4c010000         lea ecx, [esi + 0x14c]
// 0064ecf3  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0064ecfb  ff1568248000         call dword ptr [0x802468]
// 0064ed01  8bce                 mov ecx, esi
// 0064ed03  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0064ed0b  e89037ffff           call 0x6424a0
// 0064ed10  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0064ed14  5e                   pop esi
// 0064ed15  64890d00000000       mov dword ptr fs:[0], ecx
// 0064ed1c  83c410               add esp, 0x10
// 0064ed1f  c3                   ret 

extern void (__thiscall *string_destructor)(void *);

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
        string_destructor(this);
    }
}

struct VerbWidget {
    char storage[0x14c];
    ~VerbWidget();
};

struct MenuItem : VerbWidget {
    std::basic_string<char, std::char_traits<char>, std::allocator<char> > text;
    ~MenuItem();
};

MenuItem::~MenuItem()
{
}
