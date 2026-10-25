// from server: 100% by king_originala
// roc 2008-06 004ca500  unit: RBX::Network::RoundRobinPhysicsSender  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ca500
//
// 004ca500  6aff                 push -1
// 004ca502  6820987c00           push 0x7c9820
// 004ca507  64a100000000         mov eax, dword ptr fs:[0]
// 004ca50d  50                   push eax
// 004ca50e  64892500000000       mov dword ptr fs:[0], esp
// 004ca515  51                   push ecx
// 004ca516  53                   push ebx
// 004ca517  56                   push esi
// 004ca518  8bf1                 mov esi, ecx
// 004ca51a  57                   push edi
// 004ca51b  8974240c             mov dword ptr [esp + 0xc], esi
// 004ca51f  8b442420             mov eax, dword ptr [esp + 0x20]
// 004ca523  8906                 mov dword ptr [esi], eax
// 004ca525  8b442424             mov eax, dword ptr [esp + 0x24]
// 004ca529  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004ca531  894604               mov dword ptr [esi + 4], eax
// 004ca534  85c0                 test eax, eax
// 004ca536  740c                 je 0x4ca544
// 004ca538  83c004               add eax, 4
// 004ca53b  b901000000           mov ecx, 1
// 004ca540  f00fc108             lock xadd dword ptr [eax], ecx
// 004ca544  8d4e10               lea ecx, [esi + 0x10]
// 004ca547  c644241801           mov byte ptr [esp + 0x18], 1
// 004ca54c  e87fddfaff           call 0x4782d0
// 004ca551  d90540cc9300         fld dword ptr [0x93cc40]
// 004ca557  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004ca55b  d95e40               fstp dword ptr [esi + 0x40]
// 004ca55e  83cbff               or ebx, 0xffffffff
// 004ca561  895e44               mov dword ptr [esi + 0x44], ebx
// 004ca564  895c2418             mov dword ptr [esp + 0x18], ebx
// 004ca568  85ff                 test edi, edi
// 004ca56a  7426                 je 0x4ca592
// 004ca56c  8d5704               lea edx, [edi + 4]
// 004ca56f  8bc3                 mov eax, ebx
// 004ca571  f00fc102             lock xadd dword ptr [edx], eax
// 004ca575  751b                 jne 0x4ca592
// 004ca577  8b17                 mov edx, dword ptr [edi]
// 004ca579  8b4204               mov eax, dword ptr [edx + 4]
// 004ca57c  8bcf                 mov ecx, edi
// 004ca57e  ffd0                 call eax
// 004ca580  8d4f08               lea ecx, [edi + 8]
// 004ca583  f00fc119             lock xadd dword ptr [ecx], ebx
// 004ca587  7509                 jne 0x4ca592
// 004ca589  8b17                 mov edx, dword ptr [edi]
// 004ca58b  8b4208               mov eax, dword ptr [edx + 8]
// 004ca58e  8bcf                 mov ecx, edi
// 004ca590  ffd0                 call eax
// 004ca592  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004ca596  5f                   pop edi
// 004ca597  8bc6                 mov eax, esi
// 004ca599  5e                   pop esi
// 004ca59a  5b                   pop ebx
// 004ca59b  64890d00000000       mov dword ptr fs:[0], ecx
// 004ca5a2  83c410               add esp, 0x10
// 004ca5a5  c20800               ret 8

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
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

    Shared(const Shared& source);
    ~Shared();
};

inline Shared::Shared(const Shared& source)
    : pointer(source.pointer), control(source.control)
{
    if (control) {
        volatile long* count = &control->strong;
        _InterlockedExchangeAdd(count, 1);
    }
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
    char storage[48];
    Member();
};

extern float initialValue;

struct S {
    Shared owner;
    char padding[8];
    Member member;
    float value;
    int index;

    S(Shared source);
};

S::S(Shared source)
    : owner(source), member(), value(initialValue), index(-1)
{
}
