// from server: 100% by king_originala
// roc 2008-06 0062aad0  unit: RBX::VExplosion::?$SignalDesc  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062aad0
//
// 0062aad0  64a100000000         mov eax, dword ptr fs:[0]
// 0062aad6  6aff                 push -1
// 0062aad8  6818047c00           push 0x7c0418
// 0062aadd  50                   push eax
// 0062aade  64892500000000       mov dword ptr fs:[0], esp
// 0062aae5  56                   push esi
// 0062aae6  d9442420             fld dword ptr [esp + 0x20]
// 0062aaea  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0062aaee  83ec0c               sub esp, 0xc
// 0062aaf1  8bc4                 mov eax, esp
// 0062aaf3  d95c2408             fstp dword ptr [esp + 8]
// 0062aaf7  8908                 mov dword ptr [eax], ecx
// 0062aaf9  8b542428             mov edx, dword ptr [esp + 0x28]
// 0062aafd  895004               mov dword ptr [eax + 4], edx
// 0062ab00  8b442428             mov eax, dword ptr [esp + 0x28]
// 0062ab04  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0062ab0c  8964242c             mov dword ptr [esp + 0x2c], esp
// 0062ab10  85c0                 test eax, eax
// 0062ab12  740c                 je 0x62ab20
// 0062ab14  83c004               add eax, 4
// 0062ab17  b901000000           mov ecx, 1
// 0062ab1c  f00fc108             lock xadd dword ptr [eax], ecx
// 0062ab20  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0062ab24  e837fcffff           call 0x62a760
// 0062ab29  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0062ab2d  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 0062ab35  85f6                 test esi, esi
// 0062ab37  742a                 je 0x62ab63
// 0062ab39  8d5604               lea edx, [esi + 4]
// 0062ab3c  83c8ff               or eax, 0xffffffff
// 0062ab3f  f00fc102             lock xadd dword ptr [edx], eax
// 0062ab43  751e                 jne 0x62ab63
// 0062ab45  8b16                 mov edx, dword ptr [esi]
// 0062ab47  8b4204               mov eax, dword ptr [edx + 4]
// 0062ab4a  8bce                 mov ecx, esi
// 0062ab4c  ffd0                 call eax
// 0062ab4e  8d4e08               lea ecx, [esi + 8]
// 0062ab51  83caff               or edx, 0xffffffff
// 0062ab54  f00fc111             lock xadd dword ptr [ecx], edx
// 0062ab58  7509                 jne 0x62ab63
// 0062ab5a  8b06                 mov eax, dword ptr [esi]
// 0062ab5c  8b5008               mov edx, dword ptr [eax + 8]
// 0062ab5f  8bce                 mov ecx, esi
// 0062ab61  ffd2                 call edx
// 0062ab63  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0062ab67  64890d00000000       mov dword ptr fs:[0], ecx
// 0062ab6e  5e                   pop esi
// 0062ab6f  83c40c               add esp, 0xc
// 0062ab72  c3                   ret 

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
    void* object;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control) {
        volatile long* count = &control->strong;
        _InterlockedExchangeAdd(count, 1);
    }
}

inline Shared::~Shared()
{
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
    void invoke(Shared, float);
};

void __cdecl forward(S* receiver, Shared value, float amount)
{
    receiver->invoke(value, amount);
}
