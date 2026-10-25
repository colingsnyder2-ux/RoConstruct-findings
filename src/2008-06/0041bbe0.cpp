// from server: 100% by king_originala
// roc 2008-06 0041bbe0  unit: VDHTMLWindow::?$BoundFuncDesc  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041bbe0
//
// 0041bbe0  6aff                 push -1
// 0041bbe2  68793f7c00           push 0x7c3f79
// 0041bbe7  64a100000000         mov eax, dword ptr fs:[0]
// 0041bbed  50                   push eax
// 0041bbee  64892500000000       mov dword ptr fs:[0], esp
// 0041bbf5  51                   push ecx
// 0041bbf6  83ec1c               sub esp, 0x1c
// 0041bbf9  8d442434             lea eax, [esp + 0x34]
// 0041bbfd  8bcc                 mov ecx, esp
// 0041bbff  8964241c             mov dword ptr [esp + 0x1c], esp
// 0041bc03  50                   push eax
// 0041bc04  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0041bc0c  ff155c248000         call dword ptr [0x80245c]
// 0041bc12  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0041bc16  e885f9ffff           call 0x41b5a0
// 0041bc1b  8d4c2418             lea ecx, [esp + 0x18]
// 0041bc1f  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 0041bc27  ff1568248000         call dword ptr [0x802468]
// 0041bc2d  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0041bc31  64890d00000000       mov dword ptr fs:[0], ecx
// 0041bc38  83c410               add esp, 0x10
// 0041bc3b  c3                   ret 

namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits, class Alloc>
    class basic_string {
        char storage[28];
    public:
        __declspec(dllimport) basic_string(const basic_string&);
        __declspec(dllimport) ~basic_string();
    };

    typedef basic_string<char, char_traits<char>, allocator<char> > string;
}

struct S {
    void f(std::string value);
};

void wrapper(S* object, std::string value)
{
    object->f(value);
}
