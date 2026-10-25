// from server: 100% by king_originala
// roc 2008-06 004ab090  unit: RBX::Network::Replicator  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ab090
//
// 004ab090  64a100000000         mov eax, dword ptr fs:[0]
// 004ab096  6aff                 push -1
// 004ab098  6809b77d00           push 0x7db709
// 004ab09d  50                   push eax
// 004ab09e  64892500000000       mov dword ptr fs:[0], esp
// 004ab0a5  56                   push esi
// 004ab0a6  8bf1                 mov esi, ecx
// 004ab0a8  8d442414             lea eax, [esp + 0x14]
// 004ab0ac  50                   push eax
// 004ab0ad  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004ab0b5  ff155c248000         call dword ptr [0x80245c]
// 004ab0bb  8a4c2430             mov cl, byte ptr [esp + 0x30]
// 004ab0bf  884e1c               mov byte ptr [esi + 0x1c], cl
// 004ab0c2  8d4c2414             lea ecx, [esp + 0x14]
// 004ab0c6  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 004ab0ce  ff1568248000         call dword ptr [0x802468]
// 004ab0d4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004ab0d8  8bc6                 mov eax, esi
// 004ab0da  64890d00000000       mov dword ptr fs:[0], ecx
// 004ab0e1  5e                   pop esi
// 004ab0e2  83c40c               add esp, 0xc
// 004ab0e5  c22000               ret 0x20

typedef void (__thiscall *StringCopy)(void*, const void*);
typedef void (__thiscall *StringDestroy)(void*);

extern StringCopy string_copy;
extern StringDestroy string_destroy;

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
    inline basic_string<T, Traits, Alloc>::basic_string(const basic_string& other)
    {
        string_copy(this, &other);
    }

    template<class T, class Traits, class Alloc>
    inline basic_string<T, Traits, Alloc>::~basic_string()
    {
        string_destroy(this);
    }
}

typedef std::basic_string<char, std::char_traits<char>, std::allocator<char> > String;

struct S {
    String text;
    bool flag;

    S(String value, bool enabled);
};

S::S(String value, bool enabled)
    : text(value), flag(enabled)
{
}
