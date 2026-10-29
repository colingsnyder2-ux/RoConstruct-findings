// roc 2009-06 004702a0  unit: RBX::LDraw2Lua::LDraw2RobloxColorMap  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004702a0
//
// 004702a0  6aff                 push -1
// 004702a2  684c3a8500           push 0x853a4c
// 004702a7  64a100000000         mov eax, dword ptr fs:[0]
// 004702ad  50                   push eax
// 004702ae  64892500000000       mov dword ptr fs:[0], esp
// 004702b5  51                   push ecx
// 004702b6  56                   push esi
// 004702b7  8bf1                 mov esi, ecx
// 004702b9  89742404             mov dword ptr [esp + 4], esi
// 004702bd  8d4e24               lea ecx, [esi + 0x24]
// 004702c0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004702c8  ff15c4e48900         call dword ptr [0x89e4c4]
// 004702ce  8d4e08               lea ecx, [esi + 8]
// 004702d1  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004702d9  ff15c4e48900         call dword ptr [0x89e4c4]
// 004702df  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004702e3  5e                   pop esi
// 004702e4  64890d00000000       mov dword ptr fs:[0], ecx
// 004702eb  83c410               add esp, 0x10
// 004702ee  c3                   ret 
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