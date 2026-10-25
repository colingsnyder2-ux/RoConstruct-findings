// from server: 100% by king_originala
// roc 2008-06 005d76d0  unit: RBX::Humanoid  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d76d0
//
// 005d76d0  6aff                 push -1
// 005d76d2  6809e77c00           push 0x7ce709
// 005d76d7  64a100000000         mov eax, dword ptr fs:[0]
// 005d76dd  50                   push eax
// 005d76de  64892500000000       mov dword ptr fs:[0], esp
// 005d76e5  83ec1c               sub esp, 0x1c
// 005d76e8  56                   push esi
// 005d76e9  8bf1                 mov esi, ecx
// 005d76eb  681c2a8300           push 0x832a1c
// 005d76f0  8d4c2408             lea ecx, [esp + 8]
// 005d76f4  ff1558248000         call dword ptr [0x802458]
// 005d76fa  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 005d7700  6a00                 push 0
// 005d7702  6850dd9200           push 0x92dd50
// 005d7707  687c909200           push 0x92907c
// 005d770c  6a00                 push 0
// 005d770e  8d442414             lea eax, [esp + 0x14]
// 005d7712  50                   push eax
// 005d7713  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005d771b  e83002f8ff           call 0x557950
// 005d7720  50                   push eax
// 005d7721  e8a0a00c00           call 0x6a17c6
// 005d7726  83c414               add esp, 0x14
// 005d7729  8d4c2404             lea ecx, [esp + 4]
// 005d772d  8bf0                 mov esi, eax
// 005d772f  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 005d7737  ff1568248000         call dword ptr [0x802468]
// 005d773d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005d7741  8bc6                 mov eax, esi
// 005d7743  5e                   pop esi
// 005d7744  64890d00000000       mov dword ptr fs:[0], ecx
// 005d774b  83c428               add esp, 0x28
// 005d774e  c3                   ret 

extern "C" {
    extern void (__thiscall *stringConstruct)(void*, const char*);
    extern void (__thiscall *stringDestroy)(void*);
}

namespace std {
    template<class T> struct char_traits {};
    template<class T> class allocator {};

    template<class T, class Traits, class Allocator>
    class basic_string {
        char storage[28];
    public:
        basic_string(const T*);
        ~basic_string();
    };

    template<class T, class Traits, class Allocator>
    inline basic_string<T, Traits, Allocator>::basic_string(const T* text)
    {
        stringConstruct(this, text);
    }

    template<class T, class Traits, class Allocator>
    inline basic_string<T, Traits, Allocator>::~basic_string()
    {
        stringDestroy(this);
    }

    typedef basic_string<char, char_traits<char>, allocator<char> > string;
}

extern char instanceType[];
extern char partInstanceType[];

extern "C" void* __cdecl dynamicCast(
    void*, long, void*, void*, int);

struct Instance {
    void* findChild(const std::string&);
};

struct Humanoid {
    char padding[0x104];
    Instance* instance;
    void* getTorso();
};

void* Humanoid::getTorso()
{
    std::string name("Torso");
    return dynamicCast(
        instance->findChild(name),
        0,
        instanceType,
        partInstanceType,
        0);
}
