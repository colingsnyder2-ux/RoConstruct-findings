// roc 2010-06 00480940  unit: RBX::LDraw2Lua::LDraw2RobloxColorMap  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00480940
//
// 00480940  6aff                 push -1
// 00480942  689cd99900           push 0x99d99c
// 00480947  64a100000000         mov eax, dword ptr fs:[0]
// 0048094d  50                   push eax
// 0048094e  64892500000000       mov dword ptr fs:[0], esp
// 00480955  51                   push ecx
// 00480956  56                   push esi
// 00480957  8bf1                 mov esi, ecx
// 00480959  89742404             mov dword ptr [esp + 4], esi
// 0048095d  8d4e24               lea ecx, [esi + 0x24]
// 00480960  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00480968  ff1500a49e00         call dword ptr [0x9ea400]
// 0048096e  8d4e08               lea ecx, [esi + 8]
// 00480971  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00480979  ff1500a49e00         call dword ptr [0x9ea400]
// 0048097f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00480983  5e                   pop esi
// 00480984  64890d00000000       mov dword ptr fs:[0], ecx
// 0048098b  83c410               add esp, 0x10
// 0048098e  c3                   ret 
// copied from an identical function in another client (function ??1S@@QAE@XZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" void (__thiscall *destroy_string)(void *);

namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits, class Allocator>
    class basic_string {
        char storage[28];
    public:
        ~basic_string();
    };

    template<class T, class Traits, class Allocator>
    inline basic_string<T, Traits, Allocator>::~basic_string()
    {
        destroy_string(this);
    }
}

struct S {
    char padding[8];
    std::basic_string<char, std::char_traits<char>, std::allocator<char> > first;
    std::basic_string<char, std::char_traits<char>, std::allocator<char> > second;
    ~S();
};

S::~S()
{
}