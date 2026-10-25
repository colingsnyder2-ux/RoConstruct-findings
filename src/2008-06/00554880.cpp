// from server: 100% by king_originala
// roc 2008-06 00554880  unit: RBX::RunService  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00554880
//
// 00554880  6aff                 push -1
// 00554882  6800dd7c00           push 0x7cdd00
// 00554887  64a100000000         mov eax, dword ptr fs:[0]
// 0055488d  50                   push eax
// 0055488e  64892500000000       mov dword ptr fs:[0], esp
// 00554895  83ec18               sub esp, 0x18
// 00554898  56                   push esi
// 00554899  8bf1                 mov esi, ecx
// 0055489b  c744242400000000     mov dword ptr [esp + 0x24], 0
// 005548a3  e858d70900           call 0x5f2000
// 005548a8  dd5c2408             fstp qword ptr [esp + 8]
// 005548ac  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005548b0  83ec08               sub esp, 8
// 005548b3  8bc4                 mov eax, esp
// 005548b5  8908                 mov dword ptr [eax], ecx
// 005548b7  8b542438             mov edx, dword ptr [esp + 0x38]
// 005548bb  895004               mov dword ptr [eax + 4], edx
// 005548be  8b442438             mov eax, dword ptr [esp + 0x38]
// 005548c2  8964240c             mov dword ptr [esp + 0xc], esp
// 005548c6  85c0                 test eax, eax
// 005548c8  740c                 je 0x5548d6
// 005548ca  83c004               add eax, 4
// 005548cd  b901000000           mov ecx, 1
// 005548d2  f00fc108             lock xadd dword ptr [eax], ecx
// 005548d6  8d4c2418             lea ecx, [esp + 0x18]
// 005548da  e861d2ebff           call 0x411b40
// 005548df  d986c0010000         fld dword ptr [esi + 0x1c0]
// 005548e5  51                   push ecx
// 005548e6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005548ea  d91c24               fstp dword ptr [esp]
// 005548ed  c644242801           mov byte ptr [esp + 0x28], 1
// 005548f2  e859450200           call 0x578e50
// 005548f7  e804d70900           call 0x5f2000
// 005548fc  dc642408             fsub qword ptr [esp + 8]
// 00554900  8d4c2410             lea ecx, [esp + 0x10]
// 00554904  c644242400           mov byte ptr [esp + 0x24], 0
// 00554909  dd9ec8010000         fstp qword ptr [esi + 0x1c8]
// 0055490f  e8ac2a0200           call 0x5773c0
// 00554914  8b742430             mov esi, dword ptr [esp + 0x30]
// 00554918  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00554920  85f6                 test esi, esi
// 00554922  742a                 je 0x55494e
// 00554924  8d5604               lea edx, [esi + 4]
// 00554927  83c8ff               or eax, 0xffffffff
// 0055492a  f00fc102             lock xadd dword ptr [edx], eax
// 0055492e  751e                 jne 0x55494e
// 00554930  8b16                 mov edx, dword ptr [esi]
// 00554932  8b4204               mov eax, dword ptr [edx + 4]
// 00554935  8bce                 mov ecx, esi
// 00554937  ffd0                 call eax
// 00554939  8d4e08               lea ecx, [esi + 8]
// 0055493c  83caff               or edx, 0xffffffff
// 0055493f  f00fc111             lock xadd dword ptr [ecx], edx
// 00554943  7509                 jne 0x55494e
// 00554945  8b06                 mov eax, dword ptr [esi]
// 00554947  8b5008               mov edx, dword ptr [eax + 8]
// 0055494a  8bce                 mov ecx, esi
// 0055494c  ffd2                 call edx
// 0055494e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00554952  64890d00000000       mov dword ptr fs:[0], ecx
// 00554959  5e                   pop esi
// 0055495a  83c424               add esp, 0x24
// 0055495d  c20800               ret 8

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" double __cdecl clockValue();

struct Control {
    virtual void reserved() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long references;
    volatile long weakReferences;

    void release();
};

inline void Control::release()
{
    if (_InterlockedDecrement(&references) == 0) {
        dispose();
        if (_InterlockedDecrement(&weakReferences) == 0)
            destroy();
    }
}

struct Object {
    void update(float);
};

struct Shared {
    Object* object;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control) {
        volatile long* count = &control->references;
        _InterlockedExchangeAdd(count, 1);
    }
}

inline Shared::~Shared()
{
    if (control)
        control->release();
}

struct Guard {
    unsigned char storage[12];

    Guard(Shared);
    ~Guard();
};

struct RunService {
    unsigned char padding[0x1c0];
    float step;
    unsigned char padding2[4];
    double elapsed;

    void f(Shared);
};

void RunService::f(Shared value)
{
    double start = clockValue();
    {
        Guard guard(value);
        value.object->update(step);
        elapsed = clockValue() - start;
    }
}
