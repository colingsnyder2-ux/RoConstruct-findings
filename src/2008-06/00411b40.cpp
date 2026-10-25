// from server: 100% by king_originala
// roc 2008-06 00411b40  unit: ChatEnter  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00411b40
//
// 00411b40  6aff                 push -1
// 00411b42  6820987c00           push 0x7c9820
// 00411b47  64a100000000         mov eax, dword ptr fs:[0]
// 00411b4d  50                   push eax
// 00411b4e  64892500000000       mov dword ptr fs:[0], esp
// 00411b55  51                   push ecx
// 00411b56  56                   push esi
// 00411b57  8bf1                 mov esi, ecx
// 00411b59  57                   push edi
// 00411b5a  89742408             mov dword ptr [esp + 8], esi
// 00411b5e  c70600000000         mov dword ptr [esi], 0
// 00411b64  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00411b6c  c7460400000000       mov dword ptr [esi + 4], 0
// 00411b73  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00411b77  50                   push eax
// 00411b78  c644241801           mov byte ptr [esp + 0x18], 1
// 00411b7d  c7460800000000       mov dword ptr [esi + 8], 0
// 00411b84  e877531600           call 0x576f00
// 00411b89  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00411b8d  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00411b95  85ff                 test edi, edi
// 00411b97  742a                 je 0x411bc3
// 00411b99  8d4f04               lea ecx, [edi + 4]
// 00411b9c  83caff               or edx, 0xffffffff
// 00411b9f  f00fc111             lock xadd dword ptr [ecx], edx
// 00411ba3  751e                 jne 0x411bc3
// 00411ba5  8b07                 mov eax, dword ptr [edi]
// 00411ba7  8b5004               mov edx, dword ptr [eax + 4]
// 00411baa  8bcf                 mov ecx, edi
// 00411bac  ffd2                 call edx
// 00411bae  8d4708               lea eax, [edi + 8]
// 00411bb1  83c9ff               or ecx, 0xffffffff
// 00411bb4  f00fc108             lock xadd dword ptr [eax], ecx
// 00411bb8  7509                 jne 0x411bc3
// 00411bba  8b17                 mov edx, dword ptr [edi]
// 00411bbc  8b4208               mov eax, dword ptr [edx + 8]
// 00411bbf  8bcf                 mov ecx, edi
// 00411bc1  ffd0                 call eax
// 00411bc3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00411bc7  5f                   pop edi
// 00411bc8  8bc6                 mov eax, esi
// 00411bca  5e                   pop esi
// 00411bcb  64890d00000000       mov dword ptr fs:[0], ecx
// 00411bd2  83c410               add esp, 0x10
// 00411bd5  c20800               ret 8

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* control;
    ~Shared();
};

__forceinline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Second {
    void* value;
    Second();
    ~Second();
};

__forceinline Second::Second() : value(0)
{
}

struct S {
    void* first;
    Second second;
    void* third;

    S(Shared argument);
    void assign(void* object);
};

S::S(Shared argument) : first(0), third(0)
{
    assign(argument.object);
}
