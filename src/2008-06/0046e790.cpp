// from server: 100% by king_originala
// roc 2008-06 0046e790  unit: RBX::LDraw2Lua::LDraw2RobloxMapRoot  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046e790
//
// 0046e790  6aff                 push -1
// 0046e792  68f43e7c00           push 0x7c3ef4
// 0046e797  64a100000000         mov eax, dword ptr fs:[0]
// 0046e79d  50                   push eax
// 0046e79e  64892500000000       mov dword ptr fs:[0], esp
// 0046e7a5  51                   push ecx
// 0046e7a6  56                   push esi
// 0046e7a7  8bf1                 mov esi, ecx
// 0046e7a9  89742404             mov dword ptr [esp + 4], esi
// 0046e7ad  c706f8c98100         mov dword ptr [esi], 0x81c9f8
// 0046e7b3  8d4e5c               lea ecx, [esi + 0x5c]
// 0046e7b6  c744241002000000     mov dword ptr [esp + 0x10], 2
// 0046e7be  e8fdfbffff           call 0x46e3c0
// 0046e7c3  8d4e3c               lea ecx, [esi + 0x3c]
// 0046e7c6  c644241001           mov byte ptr [esp + 0x10], 1
// 0046e7cb  ff1568248000         call dword ptr [0x802468]
// 0046e7d1  8d4e20               lea ecx, [esi + 0x20]
// 0046e7d4  c644241000           mov byte ptr [esp + 0x10], 0
// 0046e7d9  ff1568248000         call dword ptr [0x802468]
// 0046e7df  8d4e04               lea ecx, [esi + 4]
// 0046e7e2  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0046e7ea  ff1568248000         call dword ptr [0x802468]
// 0046e7f0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0046e7f4  5e                   pop esi
// 0046e7f5  64890d00000000       mov dword ptr fs:[0], ecx
// 0046e7fc  83c410               add esp, 0x10
// 0046e7ff  c3                   ret 

namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits, class Alloc>
    class basic_string {
        char storage[28];
    public:
        __forceinline ~basic_string();
    };
}

typedef std::basic_string<char, std::char_traits<char>,
                          std::allocator<char> > String;

extern void (__thiscall *destroyString)(String *);

namespace std {
    template<class T, class Traits, class Alloc>
    __forceinline basic_string<T, Traits, Alloc>::~basic_string()
    {
        destroyString(reinterpret_cast<String *>(this));
    }
}

struct Map {
    ~Map();
};

struct S {
    virtual ~S();
    String first;
    String second;
    String third;
    int value;
    Map map;
};

S::~S()
{
}
