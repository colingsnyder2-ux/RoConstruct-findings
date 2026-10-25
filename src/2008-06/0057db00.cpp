// from server: 100% by king_originala
// roc 2008-06 0057db00  unit: RBX::StatsCommand  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057db00
//
// 0057db00  6aff                 push -1
// 0057db02  6809e77c00           push 0x7ce709
// 0057db07  64a100000000         mov eax, dword ptr fs:[0]
// 0057db0d  50                   push eax
// 0057db0e  64892500000000       mov dword ptr fs:[0], esp
// 0057db15  83ec1c               sub esp, 0x1c
// 0057db18  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0057db1b  53                   push ebx
// 0057db1c  56                   push esi
// 0057db1d  8bb01c020000         mov esi, dword ptr [eax + 0x21c]
// 0057db23  683c078300           push 0x83073c
// 0057db28  8d4c240c             lea ecx, [esp + 0xc]
// 0057db2c  ff1558248000         call dword ptr [0x802458]
// 0057db32  6a00                 push 0
// 0057db34  682c679400           push 0x94672c
// 0057db39  687c909200           push 0x92907c
// 0057db3e  6a00                 push 0
// 0057db40  8d4c2418             lea ecx, [esp + 0x18]
// 0057db44  51                   push ecx
// 0057db45  8bce                 mov ecx, esi
// 0057db47  c744244000000000     mov dword ptr [esp + 0x40], 0
// 0057db4f  e8fc9dfdff           call 0x557950
// 0057db54  50                   push eax
// 0057db55  e86c3c1200           call 0x6a17c6
// 0057db5a  83c414               add esp, 0x14
// 0057db5d  85c0                 test eax, eax
// 0057db5f  8d4c2408             lea ecx, [esp + 8]
// 0057db63  0f95c3               setne bl
// 0057db66  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0057db6e  ff1568248000         call dword ptr [0x802468]
// 0057db74  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0057db78  5e                   pop esi
// 0057db79  8ac3                 mov al, bl
// 0057db7b  5b                   pop ebx
// 0057db7c  64890d00000000       mov dword ptr fs:[0], ecx
// 0057db83  83c428               add esp, 0x28
// 0057db86  c3                   ret 

typedef void (__thiscall *StringConstruct)(void*, const char*);
typedef void (__thiscall *StringDestroy)(void*);

extern StringConstruct stringConstruct;
extern StringDestroy stringDestroy;

namespace std {
    template<class T> struct char_traits {};
    template<class T> class allocator {};

    template<class T, class Traits, class Alloc>
    class basic_string {
        Alloc alloc_;
        union {
            T buffer_[16];
            T* pointer_;
        };
        unsigned int size_;
        unsigned int capacity_;

    public:
        basic_string(const T*);
        ~basic_string();
    };

    template<class T, class Traits, class Alloc>
    inline basic_string<T, Traits, Alloc>::basic_string(const T* text)
    {
        stringConstruct(this, text);
    }

    template<class T, class Traits, class Alloc>
    inline basic_string<T, Traits, Alloc>::~basic_string()
    {
        stringDestroy(this);
    }

    typedef basic_string<char, char_traits<char>, allocator<char> > string;
}

struct Instance;

struct Container {
    Instance* find(const std::string&);
};

struct Owner {
    char padding[0x21c];
    Container* container;
};

extern char instanceType;
extern char topMenuBarType;

extern "C" void* __cdecl __RTDynamicCast(
    void*, long, void*, void*, int
);

struct StatsCommand {
    char padding[0x0c];
    Owner* owner;
    bool execute();
};

bool StatsCommand::execute()
{
    Container* container = owner->container;
    std::string name("StatsHud1");
    return __RTDynamicCast(
        container->find(name), 0, &instanceType, &topMenuBarType, 0
    ) != 0;
}
