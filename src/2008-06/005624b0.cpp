// from server: 100% by king_originala
// roc 2008-06 005624b0  unit: std::D::DU?$char_traits::?$basic_ifstream  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005624b0
//
// 005624b0  6aff                 push -1
// 005624b2  6808497d00           push 0x7d4908
// 005624b7  64a100000000         mov eax, dword ptr fs:[0]
// 005624bd  50                   push eax
// 005624be  64892500000000       mov dword ptr fs:[0], esp
// 005624c5  51                   push ecx
// 005624c6  53                   push ebx
// 005624c7  56                   push esi
// 005624c8  57                   push edi
// 005624c9  8bf9                 mov edi, ecx
// 005624cb  6a00                 push 0
// 005624cd  6a00                 push 0
// 005624cf  83ec20               sub esp, 0x20
// 005624d2  8bf4                 mov esi, esp
// 005624d4  8d442448             lea eax, [esp + 0x48]
// 005624d8  89642434             mov dword ptr [esp + 0x34], esp
// 005624dc  50                   push eax
// 005624dd  8bce                 mov ecx, esi
// 005624df  c744244400000000     mov dword ptr [esp + 0x44], 0
// 005624e7  ff155c248000         call dword ptr [0x80245c]
// 005624ed  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 005624f1  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005624f4  8bcf                 mov ecx, edi
// 005624f6  e885f4ffff           call 0x561980
// 005624fb  85c0                 test eax, eax
// 005624fd  8d4c2420             lea ecx, [esp + 0x20]
// 00562501  0f95c3               setne bl
// 00562504  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0056250c  ff1568248000         call dword ptr [0x802468]
// 00562512  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00562516  5f                   pop edi
// 00562517  5e                   pop esi
// 00562518  8ac3                 mov al, bl
// 0056251a  64890d00000000       mov dword ptr fs:[0], ecx
// 00562521  5b                   pop ebx
// 00562522  83c410               add esp, 0x10
// 00562525  c22000               ret 0x20

extern void (__thiscall *string_copy)(void *, const void *);
extern void (__thiscall *string_destroy)(void *);

namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits, class Alloc>
    class basic_string {
        char storage[28];
    public:
        basic_string(const basic_string&);
        ~basic_string();
    };

    template<class T, class Traits, class Alloc>
    inline basic_string<T, Traits, Alloc>::basic_string(
        const basic_string& other)
    {
        string_copy(this, &other);
    }

    template<class T, class Traits, class Alloc>
    inline basic_string<T, Traits, Alloc>::~basic_string()
    {
        string_destroy(this);
    }

    typedef basic_string<char, char_traits<char>, allocator<char> > string;
}

struct Argument {
    std::string name;
    int mode;
};

struct S {
    int open(Argument, int, int);
    bool f(Argument);
};

bool S::f(Argument arg)
{
    return open(arg, 0, 0) != 0;
}
