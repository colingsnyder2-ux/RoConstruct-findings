// from server: 100% by king_originala
// roc 2008-06 005631c0  unit: RBX::ContentProvider  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005631c0
//
// 005631c0  6aff                 push -1
// 005631c2  6844f27c00           push 0x7cf244
// 005631c7  64a100000000         mov eax, dword ptr fs:[0]
// 005631cd  50                   push eax
// 005631ce  64892500000000       mov dword ptr fs:[0], esp
// 005631d5  51                   push ecx
// 005631d6  56                   push esi
// 005631d7  8bf1                 mov esi, ecx
// 005631d9  89742404             mov dword ptr [esp + 4], esi
// 005631dd  8d4e68               lea ecx, [esi + 0x68]
// 005631e0  c744241002000000     mov dword ptr [esp + 0x10], 2
// 005631e8  ff1568248000         call dword ptr [0x802468]
// 005631ee  8d4e48               lea ecx, [esi + 0x48]
// 005631f1  c644241001           mov byte ptr [esp + 0x10], 1
// 005631f6  ff1568248000         call dword ptr [0x802468]
// 005631fc  8d4e2c               lea ecx, [esi + 0x2c]
// 005631ff  c644241000           mov byte ptr [esp + 0x10], 0
// 00563204  ff1568248000         call dword ptr [0x802468]
// 0056320a  8d4e10               lea ecx, [esi + 0x10]
// 0056320d  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00563215  ff1568248000         call dword ptr [0x802468]
// 0056321b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0056321f  5e                   pop esi
// 00563220  64890d00000000       mov dword ptr fs:[0], ecx
// 00563227  83c410               add esp, 0x10
// 0056322a  c3                   ret 

extern void (__thiscall *destroy_string)(void*);

namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits, class Alloc>
    class basic_string {
        char storage[28];
    public:
        ~basic_string();
    };

    typedef basic_string<char, char_traits<char>, allocator<char> > string;

    template<class T, class Traits, class Alloc>
    __forceinline basic_string<T, Traits, Alloc>::~basic_string()
    {
        destroy_string(this);
    }
}

struct S {
    char prefix[16];
    std::string first;
    std::string second;
    std::string third;
    char gap[4];
    std::string fourth;

    ~S();
};

S::~S()
{
}
