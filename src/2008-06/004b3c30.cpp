// from server: 100% by colin
// roc 2008-06 004b3c30  unit: RBX::Network::VPeer::?$BoundFuncDesc  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b3c30
//
// 004b3c30  64a100000000         mov eax, dword ptr fs:[0]
// 004b3c36  6aff                 push -1
// 004b3c38  68793f7c00           push 0x7c3f79
// 004b3c3d  50                   push eax
// 004b3c3e  64892500000000       mov dword ptr fs:[0], esp
// 004b3c45  8b442430             mov eax, dword ptr [esp + 0x30]
// 004b3c49  50                   push eax
// 004b3c4a  83ec1c               sub esp, 0x1c
// 004b3c4d  8d542434             lea edx, [esp + 0x34]
// 004b3c51  8bcc                 mov ecx, esp
// 004b3c53  89642450             mov dword ptr [esp + 0x50], esp
// 004b3c57  52                   push edx
// 004b3c58  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 004b3c60  ff155c248000         call dword ptr [0x80245c]
// 004b3c66  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004b3c6a  e871f9ffff           call 0x4b35e0
// 004b3c6f  8d4c2414             lea ecx, [esp + 0x14]
// 004b3c73  c7442408ffffffff     mov dword ptr [esp + 8], 0xffffffff
// 004b3c7b  ff1568248000         call dword ptr [0x802468]
// 004b3c81  8b0c24               mov ecx, dword ptr [esp]
// 004b3c84  64890d00000000       mov dword ptr fs:[0], ecx
// 004b3c8b  83c40c               add esp, 0xc
// 004b3c8e  c3                   ret 

namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;
    template<class T, class Traits, class Alloc>
    class __declspec(dllimport) basic_string {
        char storage[28];
    public:
        basic_string();
        basic_string(const T*);
        basic_string(const basic_string&);
        ~basic_string();
    };
    typedef basic_string<char, char_traits<char>, allocator<char> > string;
}





struct S {
    void invoke(std::string, int);
};

void forward(S *object, std::string value, int argument)
{
    object->invoke(value, argument);
}
