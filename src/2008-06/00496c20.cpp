// from server: 100% by colin
// roc 2008-06 00496c20  unit: RBX::Network::Players::Plugin  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00496c20
//
// 00496c20  6aff                 push -1
// 00496c22  68536c7c00           push 0x7c6c53
// 00496c27  64a100000000         mov eax, dword ptr fs:[0]
// 00496c2d  50                   push eax
// 00496c2e  64892500000000       mov dword ptr fs:[0], esp
// 00496c35  51                   push ecx
// 00496c36  56                   push esi
// 00496c37  8bf1                 mov esi, ecx
// 00496c39  57                   push edi
// 00496c3a  89742408             mov dword ptr [esp + 8], esi
// 00496c3e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00496c46  ff1560248000         call dword ptr [0x802460]
// 00496c4c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00496c50  50                   push eax
// 00496c51  8d4e1c               lea ecx, [esi + 0x1c]
// 00496c54  c644241801           mov byte ptr [esp + 0x18], 1
// 00496c59  ff1558248000         call dword ptr [0x802458]
// 00496c5f  8b442424             mov eax, dword ptr [esp + 0x24]
// 00496c63  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00496c67  894e38               mov dword ptr [esi + 0x38], ecx
// 00496c6a  89463c               mov dword ptr [esi + 0x3c], eax
// 00496c6d  85c0                 test eax, eax
// 00496c6f  740c                 je 0x496c7d
// 00496c71  83c004               add eax, 4
// 00496c74  ba01000000           mov edx, 1
// 00496c79  f00fc110             lock xadd dword ptr [eax], edx
// 00496c7d  c7464000000000       mov dword ptr [esi + 0x40], 0
// 00496c84  c7464400000000       mov dword ptr [esi + 0x44], 0
// 00496c8b  56                   push esi
// 00496c8c  c644241804           mov byte ptr [esp + 0x18], 4
// 00496c91  e83a141100           call 0x5a80d0
// 00496c96  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00496c9a  83c404               add esp, 4
// 00496c9d  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00496ca5  85ff                 test edi, edi
// 00496ca7  742a                 je 0x496cd3
// 00496ca9  8d4704               lea eax, [edi + 4]
// 00496cac  83c9ff               or ecx, 0xffffffff
// 00496caf  f00fc108             lock xadd dword ptr [eax], ecx
// 00496cb3  751e                 jne 0x496cd3
// 00496cb5  8b17                 mov edx, dword ptr [edi]
// 00496cb7  8b4204               mov eax, dword ptr [edx + 4]
// 00496cba  8bcf                 mov ecx, edi
// 00496cbc  ffd0                 call eax
// 00496cbe  8d4f08               lea ecx, [edi + 8]
// 00496cc1  83caff               or edx, 0xffffffff
// 00496cc4  f00fc111             lock xadd dword ptr [ecx], edx
// 00496cc8  7509                 jne 0x496cd3
// 00496cca  8b07                 mov eax, dword ptr [edi]
// 00496ccc  8b5008               mov edx, dword ptr [eax + 8]
// 00496ccf  8bcf                 mov ecx, edi
// 00496cd1  ffd2                 call edx
// 00496cd3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00496cd7  5f                   pop edi
// 00496cd8  8bc6                 mov eax, esi
// 00496cda  5e                   pop esi
// 00496cdb  64890d00000000       mov dword ptr fs:[0], ecx
// 00496ce2  83c410               add esp, 0x10
// 00496ce5  c20c00               ret 0xc

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
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern void (__thiscall *const constructText)(std::string*, const char*);




struct Control {
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* control;
    Shared();
    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared() : object(0), control(0) {
}

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control) {
    if (control)
        _InterlockedIncrement(&control->strong);
}

inline Shared::~Shared() {
    Control* p = control;
    if (p) {
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct S {
    std::string first;
    std::string second;
    Shared owner;
    Shared empty;
    S(const char*, Shared);
};

extern void __cdecl initialize(S*);

S::S(const char* text, Shared value)
    : first(), second(text), owner(value), empty() {
    initialize(this);
}
