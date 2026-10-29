// roc 2009-12 0047a4a0  unit: RBX::LDraw2Lua::LDraw2RobloxColorMap  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0047a4a0
//
// 0047a4a0  6aff                 push -1
// 0047a4a2  683ce79200           push 0x92e73c
// 0047a4a7  64a100000000         mov eax, dword ptr fs:[0]
// 0047a4ad  50                   push eax
// 0047a4ae  64892500000000       mov dword ptr fs:[0], esp
// 0047a4b5  51                   push ecx
// 0047a4b6  56                   push esi
// 0047a4b7  8bf1                 mov esi, ecx
// 0047a4b9  89742404             mov dword ptr [esp + 4], esi
// 0047a4bd  8d4e24               lea ecx, [esi + 0x24]
// 0047a4c0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0047a4c8  ff15e4b69800         call dword ptr [0x98b6e4]
// 0047a4ce  8d4e08               lea ecx, [esi + 8]
// 0047a4d1  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0047a4d9  ff15e4b69800         call dword ptr [0x98b6e4]
// 0047a4df  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0047a4e3  5e                   pop esi
// 0047a4e4  64890d00000000       mov dword ptr fs:[0], ecx
// 0047a4eb  83c410               add esp, 0x10
// 0047a4ee  c3                   ret 
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