// from server: 100% by king_originala
// roc 2008-06 0057db90  unit: RBX::StatsCommand  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057db90
//
// 0057db90  6aff                 push -1
// 0057db92  6809e77c00           push 0x7ce709
// 0057db97  64a100000000         mov eax, dword ptr fs:[0]
// 0057db9d  50                   push eax
// 0057db9e  64892500000000       mov dword ptr fs:[0], esp
// 0057dba5  83ec1c               sub esp, 0x1c
// 0057dba8  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0057dbab  56                   push esi
// 0057dbac  8bb01c020000         mov esi, dword ptr [eax + 0x21c]
// 0057dbb2  683c078300           push 0x83073c
// 0057dbb7  8d4c2408             lea ecx, [esp + 8]
// 0057dbbb  ff1558248000         call dword ptr [0x802458]
// 0057dbc1  6a00                 push 0
// 0057dbc3  682c679400           push 0x94672c
// 0057dbc8  687c909200           push 0x92907c
// 0057dbcd  6a00                 push 0
// 0057dbcf  8d4c2414             lea ecx, [esp + 0x14]
// 0057dbd3  51                   push ecx
// 0057dbd4  8bce                 mov ecx, esi
// 0057dbd6  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0057dbde  e86d9dfdff           call 0x557950
// 0057dbe3  50                   push eax
// 0057dbe4  e8dd3b1200           call 0x6a17c6
// 0057dbe9  83c414               add esp, 0x14
// 0057dbec  8d4c2404             lea ecx, [esp + 4]
// 0057dbf0  8bf0                 mov esi, eax
// 0057dbf2  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0057dbfa  ff1568248000         call dword ptr [0x802468]
// 0057dc00  85f6                 test esi, esi
// 0057dc02  7422                 je 0x57dc26
// 0057dc04  8b16                 mov edx, dword ptr [esi]
// 0057dc06  8b4254               mov eax, dword ptr [edx + 0x54]
// 0057dc09  8bce                 mov ecx, esi
// 0057dc0b  ffd0                 call eax
// 0057dc0d  84c0                 test al, al
// 0057dc0f  7415                 je 0x57dc26
// 0057dc11  b801000000           mov eax, 1
// 0057dc16  5e                   pop esi
// 0057dc17  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0057dc1b  64890d00000000       mov dword ptr fs:[0], ecx
// 0057dc22  83c428               add esp, 0x28
// 0057dc25  c3                   ret 
// 0057dc26  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0057dc2a  33c0                 xor eax, eax
// 0057dc2c  5e                   pop esi
// 0057dc2d  64890d00000000       mov dword ptr fs:[0], ecx
// 0057dc34  83c428               add esp, 0x28
// 0057dc37  c3                   ret 

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

struct TopMenuBar {
    typedef bool (__thiscall *Query)(TopMenuBar*);
    Query* table;
};

extern char instanceType;
extern char topMenuBarType;

extern "C" void* __cdecl __RTDynamicCast(
    void*, long, void*, void*, int
);

struct StatsCommand {
    char padding[0x0c];
    Owner* owner;
    int execute();
};

int StatsCommand::execute()
{
    Container* container = owner->container;
    TopMenuBar* menu;
    {
        std::string name("StatsHud1");
        menu = static_cast<TopMenuBar*>(
            __RTDynamicCast(
                container->find(name),
                0,
                &instanceType,
                &topMenuBarType,
                0
            )
        );
    }

    if (menu && menu->table[21](menu))
        return 1;
    return 0;
}
