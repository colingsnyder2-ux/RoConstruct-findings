// from server: 100% by king_originala
// roc 2008-06 00466310  unit: CSelectionCaption  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00466310
//
// 00466310  6aff                 push -1
// 00466312  6883327c00           push 0x7c3283
// 00466317  64a100000000         mov eax, dword ptr fs:[0]
// 0046631d  50                   push eax
// 0046631e  64892500000000       mov dword ptr fs:[0], esp
// 00466325  51                   push ecx
// 00466326  56                   push esi
// 00466327  8bf1                 mov esi, ecx
// 00466329  57                   push edi
// 0046632a  89742408             mov dword ptr [esp + 8], esi
// 0046632e  c7066cbb8100         mov dword ptr [esi], 0x81bb6c
// 00466334  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00466337  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0046633f  85c9                 test ecx, ecx
// 00466341  7406                 je 0x466349
// 00466343  56                   push esi
// 00466344  e86711ffff           call 0x4574b0
// 00466349  8d4e10               lea ecx, [esi + 0x10]
// 0046634c  e80fc9fbff           call 0x422c60
// 00466351  8b7e08               mov edi, dword ptr [esi + 8]
// 00466354  c644241400           mov byte ptr [esp + 0x14], 0
// 00466359  85ff                 test edi, edi
// 0046635b  742a                 je 0x466387
// 0046635d  8d4704               lea eax, [edi + 4]
// 00466360  83c9ff               or ecx, 0xffffffff
// 00466363  f00fc108             lock xadd dword ptr [eax], ecx
// 00466367  751e                 jne 0x466387
// 00466369  8b17                 mov edx, dword ptr [edi]
// 0046636b  8b4204               mov eax, dword ptr [edx + 4]
// 0046636e  8bcf                 mov ecx, edi
// 00466370  ffd0                 call eax
// 00466372  8d4f08               lea ecx, [edi + 8]
// 00466375  83caff               or edx, 0xffffffff
// 00466378  f00fc111             lock xadd dword ptr [ecx], edx
// 0046637c  7509                 jne 0x466387
// 0046637e  8b07                 mov eax, dword ptr [edi]
// 00466380  8b5008               mov edx, dword ptr [eax + 8]
// 00466383  8bcf                 mov ecx, edi
// 00466385  ffd2                 call edx
// 00466387  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0046638b  c70660f88000         mov dword ptr [esi], 0x80f860
// 00466391  5f                   pop edi
// 00466392  5e                   pop esi
// 00466393  64890d00000000       mov dword ptr fs:[0], ecx
// 0046639a  83c410               add esp, 0x10
// 0046639d  c3                   ret 

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
