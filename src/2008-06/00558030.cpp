// from server: 100% by king_originala
// roc 2008-06 00558030  unit: RBX::VInstance::?$AbstractFactoryProduct  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00558030
//
// 00558030  6aff                 push -1
// 00558032  6818047c00           push 0x7c0418
// 00558037  64a100000000         mov eax, dword ptr fs:[0]
// 0055803d  50                   push eax
// 0055803e  64892500000000       mov dword ptr fs:[0], esp
// 00558045  51                   push ecx
// 00558046  56                   push esi
// 00558047  57                   push edi
// 00558048  8bf1                 mov esi, ecx
// 0055804a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0055804e  83ec08               sub esp, 8
// 00558051  8bc4                 mov eax, esp
// 00558053  c70600000000         mov dword ptr [esi], 0
// 00558059  8908                 mov dword ptr [eax], ecx
// 0055805b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0055805f  895004               mov dword ptr [eax + 4], edx
// 00558062  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00558066  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0055806e  89642410             mov dword ptr [esp + 0x10], esp
// 00558072  85c0                 test eax, eax
// 00558074  740c                 je 0x558082
// 00558076  83c004               add eax, 4
// 00558079  b901000000           mov ecx, 1
// 0055807e  f00fc108             lock xadd dword ptr [eax], ecx
// 00558082  8b542424             mov edx, dword ptr [esp + 0x24]
// 00558086  52                   push edx
// 00558087  8d4e08               lea ecx, [esi + 8]
// 0055808a  e811f2ebff           call 0x4172a0
// 0055808f  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00558093  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0055809b  85ff                 test edi, edi
// 0055809d  742a                 je 0x5580c9
// 0055809f  8d4704               lea eax, [edi + 4]
// 005580a2  83c9ff               or ecx, 0xffffffff
// 005580a5  f00fc108             lock xadd dword ptr [eax], ecx
// 005580a9  751e                 jne 0x5580c9
// 005580ab  8b17                 mov edx, dword ptr [edi]
// 005580ad  8b4204               mov eax, dword ptr [edx + 4]
// 005580b0  8bcf                 mov ecx, edi
// 005580b2  ffd0                 call eax
// 005580b4  8d4f08               lea ecx, [edi + 8]
// 005580b7  83caff               or edx, 0xffffffff
// 005580ba  f00fc111             lock xadd dword ptr [ecx], edx
// 005580be  7509                 jne 0x5580c9
// 005580c0  8b07                 mov eax, dword ptr [edi]
// 005580c2  8b5008               mov edx, dword ptr [eax + 8]
// 005580c5  8bcf                 mov ecx, edi
// 005580c7  ffd2                 call edx
// 005580c9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005580cd  5f                   pop edi
// 005580ce  8bc6                 mov eax, esi
// 005580d0  64890d00000000       mov dword ptr fs:[0], ecx
// 005580d7  5e                   pop esi
// 005580d8  83c410               add esp, 0x10
// 005580db  c20c00               ret 0xc

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* pointer;
    Control* control;

    Shared(const Shared& other);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : pointer(other.pointer), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->strong);
}

inline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Member {
    void* storage[2];
    Member(void* argument, Shared value);
};

struct S {
    unsigned long first;
    unsigned long padding;
    Member member;

    S(void* argument, Shared value);
};

S::S(void* argument, Shared value)
    : first(0), member(argument, value)
{
}
