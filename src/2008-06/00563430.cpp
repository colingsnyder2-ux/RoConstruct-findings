// from server: 100% by king_originala
// roc 2008-06 00563430  unit: RBX::ContentProvider  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00563430
//
// 00563430  6aff                 push -1
// 00563432  687bf27c00           push 0x7cf27b
// 00563437  64a100000000         mov eax, dword ptr fs:[0]
// 0056343d  50                   push eax
// 0056343e  64892500000000       mov dword ptr fs:[0], esp
// 00563445  81ec88000000         sub esp, 0x88
// 0056344b  56                   push esi
// 0056344c  8d4c2408             lea ecx, [esp + 8]
// 00563450  c744240400000000     mov dword ptr [esp + 4], 0
// 00563458  e883e6f9ff           call 0x501ae0
// 0056345d  8bb4249c000000       mov esi, dword ptr [esp + 0x9c]
// 00563464  83c010               add eax, 0x10
// 00563467  50                   push eax
// 00563468  8bce                 mov ecx, esi
// 0056346a  c784249800000001000000 mov dword ptr [esp + 0x98], 1
// 00563475  ff155c248000         call dword ptr [0x80245c]
// 0056347b  8d4c2408             lea ecx, [esp + 8]
// 0056347f  c744240401000000     mov dword ptr [esp + 4], 1
// 00563487  c684249400000000     mov byte ptr [esp + 0x94], 0
// 0056348f  e82cfdffff           call 0x5631c0
// 00563494  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0056349b  8bc6                 mov eax, esi
// 0056349d  5e                   pop esi
// 0056349e  64890d00000000       mov dword ptr fs:[0], ecx
// 005634a5  81c494000000         add esp, 0x94
// 005634ab  c20400               ret 4

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
    char prefix[16];
    std::string text;
    char suffix[88];

    S();
    ~S();
};

std::string __stdcall f()
{
    return S().text;
}
