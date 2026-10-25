// from server: 100% by colin
// roc 2008-06 005638c0  unit: RBX::ContentProvider  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005638c0
//
// 005638c0  6aff                 push -1
// 005638c2  687bf27c00           push 0x7cf27b
// 005638c7  64a100000000         mov eax, dword ptr fs:[0]
// 005638cd  50                   push eax
// 005638ce  64892500000000       mov dword ptr fs:[0], esp
// 005638d5  81ec88000000         sub esp, 0x88
// 005638db  56                   push esi
// 005638dc  8d4c2408             lea ecx, [esp + 8]
// 005638e0  c744240400000000     mov dword ptr [esp + 4], 0
// 005638e8  e8f3e1f9ff           call 0x501ae0
// 005638ed  8bb4249c000000       mov esi, dword ptr [esp + 0x9c]
// 005638f4  83c048               add eax, 0x48
// 005638f7  50                   push eax
// 005638f8  8bce                 mov ecx, esi
// 005638fa  c784249800000001000000 mov dword ptr [esp + 0x98], 1
// 00563905  ff155c248000         call dword ptr [0x80245c]
// 0056390b  8d4c2408             lea ecx, [esp + 8]
// 0056390f  c744240401000000     mov dword ptr [esp + 4], 1
// 00563917  c684249400000000     mov byte ptr [esp + 0x94], 0
// 0056391f  e89cf8ffff           call 0x5631c0
// 00563924  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0056392b  8bc6                 mov eax, esi
// 0056392d  5e                   pop esi
// 0056392e  64890d00000000       mov dword ptr fs:[0], ecx
// 00563935  81c494000000         add esp, 0x94
// 0056393b  c20400               ret 4

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

    typedef basic_string<char, char_traits<char>, allocator<char> > string;
}

extern void (__thiscall *copy_string)(void*, const void*);

template<class T, class Traits, class Alloc>
__forceinline std::basic_string<T, Traits, Alloc>::basic_string(
    const std::basic_string<T, Traits, Alloc>& source)
{
    copy_string(this, &source);
}

struct S {
    char prefix[0x48];
    std::string text;
    char suffix[0x20];

    S();
    ~S();
};

std::string __stdcall f()
{
    return S().text;
}
