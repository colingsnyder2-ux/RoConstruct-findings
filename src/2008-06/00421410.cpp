// from server: 100% by colin
// roc 2008-06 00421410  unit: RBX::VInstance::?$MarshaledListener  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00421410
//
// 00421410  6aff                 push -1
// 00421412  6883327c00           push 0x7c3283
// 00421417  64a100000000         mov eax, dword ptr fs:[0]
// 0042141d  50                   push eax
// 0042141e  64892500000000       mov dword ptr fs:[0], esp
// 00421425  51                   push ecx
// 00421426  56                   push esi
// 00421427  8bf1                 mov esi, ecx
// 00421429  57                   push edi
// 0042142a  89742408             mov dword ptr [esp + 8], esi
// 0042142e  c70680f88000         mov dword ptr [esi], 0x80f880
// 00421434  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00421437  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0042143f  85c9                 test ecx, ecx
// 00421441  7406                 je 0x421449
// 00421443  56                   push esi
// 00421444  e867600300           call 0x4574b0
// 00421449  8d4e10               lea ecx, [esi + 0x10]
// 0042144c  e80f180000           call 0x422c60
// 00421451  8b7e08               mov edi, dword ptr [esi + 8]
// 00421454  c644241400           mov byte ptr [esp + 0x14], 0
// 00421459  85ff                 test edi, edi
// 0042145b  742a                 je 0x421487
// 0042145d  8d4704               lea eax, [edi + 4]
// 00421460  83c9ff               or ecx, 0xffffffff
// 00421463  f00fc108             lock xadd dword ptr [eax], ecx
// 00421467  751e                 jne 0x421487
// 00421469  8b17                 mov edx, dword ptr [edi]
// 0042146b  8b4204               mov eax, dword ptr [edx + 4]
// 0042146e  8bcf                 mov ecx, edi
// 00421470  ffd0                 call eax
// 00421472  8d4f08               lea ecx, [edi + 8]
// 00421475  83caff               or edx, 0xffffffff
// 00421478  f00fc111             lock xadd dword ptr [ecx], edx
// 0042147c  7509                 jne 0x421487
// 0042147e  8b07                 mov eax, dword ptr [edi]
// 00421480  8b5008               mov edx, dword ptr [eax + 8]
// 00421483  8bcf                 mov ecx, edi
// 00421485  ffd2                 call edx
// 00421487  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0042148b  c70660f88000         mov dword ptr [esi], 0x80f860
// 00421491  5f                   pop edi
// 00421492  5e                   pop esi
// 00421493  64890d00000000       mov dword ptr fs:[0], ecx
// 0042149a  83c410               add esp, 0x10
// 0042149d  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* pointer;
    Control* control;
    ~Shared();
};

struct Member {
    unsigned char storage[4];
    void cleanup();
};

struct S;

struct Owner {
    void remove(S*);
};

struct Base {
    virtual ~Base();
};

struct S : Base {
    Shared shared;
    Owner* owner;
    Member member;
    virtual ~S();
};

inline Base::~Base()
{
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

S::~S()
{
    if (owner)
        owner->remove(this);
    member.cleanup();
}
