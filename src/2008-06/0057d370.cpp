// from server: 100% by colin
// roc 2008-06 0057d370  unit: RBX::VInstance::?$SignalDesc  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057d370
//
// 0057d370  8b442404             mov eax, dword ptr [esp + 4]
// 0057d374  56                   push esi
// 0057d375  57                   push edi
// 0057d376  8bf1                 mov esi, ecx
// 0057d378  85c0                 test eax, eax
// 0057d37a  7408                 je 0x57d384
// 0057d37c  8db8c8010000         lea edi, [eax + 0x1c8]
// 0057d382  eb02                 jmp 0x57d386
// 0057d384  33ff                 xor edi, edi
// 0057d386  83ec1c               sub esp, 0x1c
// 0057d389  8bcc                 mov ecx, esp
// 0057d38b  89642428             mov dword ptr [esp + 0x28], esp
// 0057d38f  685c068300           push 0x83065c
// 0057d394  ff1558248000         call dword ptr [0x802458]
// 0057d39a  57                   push edi
// 0057d39b  8bce                 mov ecx, esi
// 0057d39d  e83e600000           call 0x5833e0
// 0057d3a2  5f                   pop edi
// 0057d3a3  c70648068300         mov dword ptr [esi], 0x830648
// 0057d3a9  8bc6                 mov eax, esi
// 0057d3ab  5e                   pop esi
// 0057d3ac  c20400               ret 4

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
struct Input {
    unsigned char padding[0x1c8];
    unsigned char signal;
};
struct Base {
    Base(void*, std::string);
    virtual void slot();
};
struct S : Base {
    S(Input*);
    virtual void slot();
};
S::S(Input* input)
    : Base(input ? &input->signal : 0, "ForceAssertion")
{
}
