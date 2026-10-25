// from server: 100% by colin
// roc 2008-06 00499dc0  unit: RBX::Network::VPlayers::?$SignalDesc  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00499dc0
//
// 00499dc0  6aff                 push -1
// 00499dc2  68cc6f7c00           push 0x7c6fcc
// 00499dc7  64a100000000         mov eax, dword ptr fs:[0]
// 00499dcd  50                   push eax
// 00499dce  64892500000000       mov dword ptr fs:[0], esp
// 00499dd5  51                   push ecx
// 00499dd6  56                   push esi
// 00499dd7  57                   push edi
// 00499dd8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00499ddc  8b07                 mov eax, dword ptr [edi]
// 00499dde  8bf1                 mov esi, ecx
// 00499de0  8906                 mov dword ptr [esi], eax
// 00499de2  8b4f04               mov ecx, dword ptr [edi + 4]
// 00499de5  8d5708               lea edx, [edi + 8]
// 00499de8  894e04               mov dword ptr [esi + 4], ecx
// 00499deb  52                   push edx
// 00499dec  8d4e08               lea ecx, [esi + 8]
// 00499def  8974240c             mov dword ptr [esp + 0xc], esi
// 00499df3  ff155c248000         call dword ptr [0x80245c]
// 00499df9  83c724               add edi, 0x24
// 00499dfc  57                   push edi
// 00499dfd  8d4e24               lea ecx, [esi + 0x24]
// 00499e00  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00499e08  e813f7ffff           call 0x499520
// 00499e0d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00499e11  5f                   pop edi
// 00499e12  8bc6                 mov eax, esi
// 00499e14  5e                   pop esi
// 00499e15  64890d00000000       mov dword ptr fs:[0], ecx
// 00499e1c  83c410               add esp, 0x10
// 00499e1f  c20400               ret 4

namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;
    template<class T, class Traits, class Alloc>
    class __declspec(dllimport) basic_string {
        char storage[28];
    public:
        basic_string(const T*);
        basic_string(const basic_string&);
        ~basic_string();
    };
    typedef basic_string<char, char_traits<char>, allocator<char> > string;
}
typedef void* (__thiscall *StringCopy)(void*, const void*);
extern StringCopy string_copy;



struct Tail {
    Tail(const Tail&);
};

struct SignalDesc {
    unsigned int first;
    unsigned int second;
    std::string name;
    Tail tail;

    SignalDesc(const SignalDesc&);
};

SignalDesc::SignalDesc(const SignalDesc& other)
    : first(other.first),
      second(other.second),
      name(other.name),
      tail(other.tail)
{
}
