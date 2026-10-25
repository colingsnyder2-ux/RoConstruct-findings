// from server: 100% by colin
// roc 2008-06 004214a0  unit: RBX::VInstance::?$MarshaledListener  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004214a0
//
// 004214a0  6aff                 push -1
// 004214a2  6883327c00           push 0x7c3283
// 004214a7  64a100000000         mov eax, dword ptr fs:[0]
// 004214ad  50                   push eax
// 004214ae  64892500000000       mov dword ptr fs:[0], esp
// 004214b5  51                   push ecx
// 004214b6  56                   push esi
// 004214b7  8bf1                 mov esi, ecx
// 004214b9  57                   push edi
// 004214ba  89742408             mov dword ptr [esp + 8], esi
// 004214be  c7068cf88000         mov dword ptr [esi], 0x80f88c
// 004214c4  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004214c7  c744241401000000     mov dword ptr [esp + 0x14], 1
// 004214cf  85c9                 test ecx, ecx
// 004214d1  7406                 je 0x4214d9
// 004214d3  56                   push esi
// 004214d4  e8d75f0300           call 0x4574b0
// 004214d9  8d4e10               lea ecx, [esi + 0x10]
// 004214dc  e87f170000           call 0x422c60
// 004214e1  8b7e08               mov edi, dword ptr [esi + 8]
// 004214e4  c644241400           mov byte ptr [esp + 0x14], 0
// 004214e9  85ff                 test edi, edi
// 004214eb  742a                 je 0x421517
// 004214ed  8d4704               lea eax, [edi + 4]
// 004214f0  83c9ff               or ecx, 0xffffffff
// 004214f3  f00fc108             lock xadd dword ptr [eax], ecx
// 004214f7  751e                 jne 0x421517
// 004214f9  8b17                 mov edx, dword ptr [edi]
// 004214fb  8b4204               mov eax, dword ptr [edx + 4]
// 004214fe  8bcf                 mov ecx, edi
// 00421500  ffd0                 call eax
// 00421502  8d4f08               lea ecx, [edi + 8]
// 00421505  83caff               or edx, 0xffffffff
// 00421508  f00fc111             lock xadd dword ptr [ecx], edx
// 0042150c  7509                 jne 0x421517
// 0042150e  8b07                 mov eax, dword ptr [edi]
// 00421510  8b5008               mov edx, dword ptr [eax + 8]
// 00421513  8bcf                 mov ecx, edi
// 00421515  ffd2                 call edx
// 00421517  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0042151b  c70660f88000         mov dword ptr [esi], 0x80f860
// 00421521  5f                   pop edi
// 00421522  5e                   pop esi
// 00421523  64890d00000000       mov dword ptr fs:[0], ecx
// 0042152a  83c410               add esp, 0x10
// 0042152d  c3                   ret 

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
