// from server: 100% by king_originala
// roc 2008-06 0060e630  unit: RBX::BlockBlockContact  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060e630
//
// 0060e630  6aff                 push -1
// 0060e632  68488d7d00           push 0x7d8d48
// 0060e637  64a100000000         mov eax, dword ptr fs:[0]
// 0060e63d  50                   push eax
// 0060e63e  64892500000000       mov dword ptr fs:[0], esp
// 0060e645  83ec0c               sub esp, 0xc
// 0060e648  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0060e64c  56                   push esi
// 0060e64d  57                   push edi
// 0060e64e  8bf1                 mov esi, ecx
// 0060e650  50                   push eax
// 0060e651  8d4c2410             lea ecx, [esp + 0x10]
// 0060e655  51                   push ecx
// 0060e656  89742410             mov dword ptr [esp + 0x10], esi
// 0060e65a  e8e1a30000           call 0x618a40
// 0060e65f  8b10                 mov edx, dword ptr [eax]
// 0060e661  8916                 mov dword ptr [esi], edx
// 0060e663  8b4004               mov eax, dword ptr [eax + 4]
// 0060e666  83c408               add esp, 8
// 0060e669  894604               mov dword ptr [esi + 4], eax
// 0060e66c  85c0                 test eax, eax
// 0060e66e  740c                 je 0x60e67c
// 0060e670  83c008               add eax, 8
// 0060e673  b901000000           mov ecx, 1
// 0060e678  f00fc108             lock xadd dword ptr [eax], ecx
// 0060e67c  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0060e680  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0060e688  85ff                 test edi, edi
// 0060e68a  742a                 je 0x60e6b6
// 0060e68c  8d5704               lea edx, [edi + 4]
// 0060e68f  83c8ff               or eax, 0xffffffff
// 0060e692  f00fc102             lock xadd dword ptr [edx], eax
// 0060e696  751e                 jne 0x60e6b6
// 0060e698  8b17                 mov edx, dword ptr [edi]
// 0060e69a  8b4204               mov eax, dword ptr [edx + 4]
// 0060e69d  8bcf                 mov ecx, edi
// 0060e69f  ffd0                 call eax
// 0060e6a1  8d4f08               lea ecx, [edi + 8]
// 0060e6a4  83caff               or edx, 0xffffffff
// 0060e6a7  f00fc111             lock xadd dword ptr [ecx], edx
// 0060e6ab  7509                 jne 0x60e6b6
// 0060e6ad  8b07                 mov eax, dword ptr [edi]
// 0060e6af  8b5008               mov edx, dword ptr [eax + 8]
// 0060e6b2  8bcf                 mov ecx, edi
// 0060e6b4  ffd2                 call edx
// 0060e6b6  8b442428             mov eax, dword ptr [esp + 0x28]
// 0060e6ba  50                   push eax
// 0060e6bb  8d4e08               lea ecx, [esi + 8]
// 0060e6be  e88dfdffff           call 0x60e450
// 0060e6c3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0060e6c7  894624               mov dword ptr [esi + 0x24], eax
// 0060e6ca  c6462001             mov byte ptr [esi + 0x20], 1
// 0060e6ce  8b88e4020000         mov ecx, dword ptr [eax + 0x2e4]
// 0060e6d4  8b9184000000         mov edx, dword ptr [ecx + 0x84]
// 0060e6da  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0060e6de  895628               mov dword ptr [esi + 0x28], edx
// 0060e6e1  5f                   pop edi
// 0060e6e2  8bc6                 mov eax, esi
// 0060e6e4  5e                   pop esi
// 0060e6e5  64890d00000000       mov dword ptr fs:[0], ecx
// 0060e6ec  83c418               add esp, 0x18
// 0060e6ef  c20c00               ret 0xc

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused();
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

inline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

Shared __cdecl makeShared(void*);

struct Weak {
    void* object;
    Control* control;

    Weak(const Shared&);
    ~Weak();
};

inline Weak::Weak(const Shared& source)
    : object(source.object), control(source.control)
{
    if (control) {
        volatile long* count = &control->weak;
        _InterlockedExchangeAdd(count, 1);
    }
}

inline Weak::~Weak()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->weak) == 0)
        p->destroy();
}

struct Subobject {
    char storage[24];
    Subobject(void*);
};

struct Inner {
    char padding[0x84];
    void* value;
};

struct Object {
    char padding[0x2e4];
    Inner* inner;
};

struct S : Weak {
    Subobject subobject;
    bool enabled;
    Object* object;
    void* value;

    S(void*, void*, Object*);
};

S::S(void* first, void* second, Object* third)
    : Weak(makeShared(first)), subobject(second)
{
    object = third;
    enabled = true;
    value = third->inner->value;
}
