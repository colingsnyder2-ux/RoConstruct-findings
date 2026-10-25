// from server: 100% by king_originala
// roc 2008-06 005fda30  unit: RBX::P8Tool::?$GetSetImpl  size: 181 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fda30
//
// 005fda30  6aff                 push -1
// 005fda32  6818047c00           push 0x7c0418
// 005fda37  64a100000000         mov eax, dword ptr fs:[0]
// 005fda3d  50                   push eax
// 005fda3e  64892500000000       mov dword ptr fs:[0], esp
// 005fda45  51                   push ecx
// 005fda46  56                   push esi
// 005fda47  8bc1                 mov eax, ecx
// 005fda49  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005fda4d  83ec08               sub esp, 8
// 005fda50  8bcc                 mov ecx, esp
// 005fda52  8911                 mov dword ptr [ecx], edx
// 005fda54  8b542428             mov edx, dword ptr [esp + 0x28]
// 005fda58  895104               mov dword ptr [ecx + 4], edx
// 005fda5b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005fda5f  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005fda67  8964240c             mov dword ptr [esp + 0xc], esp
// 005fda6b  85c9                 test ecx, ecx
// 005fda6d  740c                 je 0x5fda7b
// 005fda6f  83c104               add ecx, 4
// 005fda72  ba01000000           mov edx, 1
// 005fda77  f00fc111             lock xadd dword ptr [ecx], edx
// 005fda7b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005fda7f  8b91c0010000         mov edx, dword ptr [ecx + 0x1c0]
// 005fda85  8b7008               mov esi, dword ptr [eax + 8]
// 005fda88  8b1432               mov edx, dword ptr [edx + esi]
// 005fda8b  035004               add edx, dword ptr [eax + 4]
// 005fda8e  8b00                 mov eax, dword ptr [eax]
// 005fda90  8d8c0ac0010000       lea ecx, [edx + ecx + 0x1c0]
// 005fda97  ffd0                 call eax
// 005fda99  8b742420             mov esi, dword ptr [esp + 0x20]
// 005fda9d  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005fdaa5  85f6                 test esi, esi
// 005fdaa7  742a                 je 0x5fdad3
// 005fdaa9  8d4e04               lea ecx, [esi + 4]
// 005fdaac  83caff               or edx, 0xffffffff
// 005fdaaf  f00fc111             lock xadd dword ptr [ecx], edx
// 005fdab3  751e                 jne 0x5fdad3
// 005fdab5  8b06                 mov eax, dword ptr [esi]
// 005fdab7  8b5004               mov edx, dword ptr [eax + 4]
// 005fdaba  8bce                 mov ecx, esi
// 005fdabc  ffd2                 call edx
// 005fdabe  8d4608               lea eax, [esi + 8]
// 005fdac1  83c9ff               or ecx, 0xffffffff
// 005fdac4  f00fc108             lock xadd dword ptr [eax], ecx
// 005fdac8  7509                 jne 0x5fdad3
// 005fdaca  8b16                 mov edx, dword ptr [esi]
// 005fdacc  8b4208               mov eax, dword ptr [edx + 8]
// 005fdacf  8bce                 mov ecx, esi
// 005fdad1  ffd0                 call eax
// 005fdad3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005fdad7  64890d00000000       mov dword ptr fs:[0], ecx
// 005fdade  5e                   pop esi
// 005fdadf  83c410               add esp, 0x10
// 005fdae2  c20c00               ret 0xc

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual ~Control();
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;

    void add_ref();
    void release();
};

__forceinline void Control::add_ref() {
    _InterlockedIncrement(&strong);
}

__forceinline void Control::release() {
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Shared {
    void* pointer;
    Control* control;

    Shared(const Shared& other);
    ~Shared();
};

__forceinline Shared::Shared(const Shared& other)
    : pointer(other.pointer), control(other.control) {
    if (control)
        control->add_ref();
}

__forceinline Shared::~Shared() {
    if (control)
        control->release();
}

struct Object {
    char padding[0x1c0];
    int* offsets;
};

struct S {
    typedef void (__thiscall *Setter)(void*, Shared);
    Setter setter;
    int adjustment;
    int offset;
    void f(Object* object, Shared value);
};

void S::f(Object* object, Shared value) {
    setter(reinterpret_cast<char*>(object) + 0x1c0 +
           *reinterpret_cast<int*>(reinterpret_cast<char*>(object->offsets) + offset) +
           adjustment, value);
}
