// roc 2009-06 005c8bd0  unit: seg_005c0000  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c8bd0
//
// 005c8bd0  6aff                 push -1
// 005c8bd2  6834218600           push 0x862134
// 005c8bd7  64a100000000         mov eax, dword ptr fs:[0]
// 005c8bdd  50                   push eax
// 005c8bde  64892500000000       mov dword ptr fs:[0], esp
// 005c8be5  51                   push ecx
// 005c8be6  56                   push esi
// 005c8be7  8bf1                 mov esi, ecx
// 005c8be9  89742404             mov dword ptr [esp + 4], esi
// 005c8bed  8d4e68               lea ecx, [esi + 0x68]
// 005c8bf0  c744241002000000     mov dword ptr [esp + 0x10], 2
// 005c8bf8  ff15c4e48900         call dword ptr [0x89e4c4]
// 005c8bfe  8d4e48               lea ecx, [esi + 0x48]
// 005c8c01  c644241001           mov byte ptr [esp + 0x10], 1
// 005c8c06  ff15c4e48900         call dword ptr [0x89e4c4]
// 005c8c0c  8d4e2c               lea ecx, [esi + 0x2c]
// 005c8c0f  c644241000           mov byte ptr [esp + 0x10], 0
// 005c8c14  ff15c4e48900         call dword ptr [0x89e4c4]
// 005c8c1a  8d4e10               lea ecx, [esi + 0x10]
// 005c8c1d  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005c8c25  ff15c4e48900         call dword ptr [0x89e4c4]
// 005c8c2b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005c8c2f  5e                   pop esi
// 005c8c30  64890d00000000       mov dword ptr fs:[0], ecx
// 005c8c37  83c410               add esp, 0x10
// 005c8c3a  c3                   ret 
// copied from an identical function in another client (function ??1S@@QAE@XZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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