// from server: 100% by king_originala
// roc 2008-06 004177a0  unit: std::D::DU?$char_traits::V?$basic_string::?$holder  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004177a0
//
// 004177a0  6aff                 push -1
// 004177a2  6868617c00           push 0x7c6168
// 004177a7  64a100000000         mov eax, dword ptr fs:[0]
// 004177ad  50                   push eax
// 004177ae  64892500000000       mov dword ptr fs:[0], esp
// 004177b5  51                   push ecx
// 004177b6  56                   push esi
// 004177b7  57                   push edi
// 004177b8  8bf1                 mov esi, ecx
// 004177ba  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004177be  83ec08               sub esp, 8
// 004177c1  8bc4                 mov eax, esp
// 004177c3  8908                 mov dword ptr [eax], ecx
// 004177c5  8b542428             mov edx, dword ptr [esp + 0x28]
// 004177c9  895004               mov dword ptr [eax + 4], edx
// 004177cc  8b442428             mov eax, dword ptr [esp + 0x28]
// 004177d0  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004177d8  89642410             mov dword ptr [esp + 0x10], esp
// 004177dc  85c0                 test eax, eax
// 004177de  740c                 je 0x4177ec
// 004177e0  83c004               add eax, 4
// 004177e3  b901000000           mov ecx, 1
// 004177e8  f00fc108             lock xadd dword ptr [eax], ecx
// 004177ec  8bce                 mov ecx, esi
// 004177ee  e81dd01300           call 0x554810
// 004177f3  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004177f7  8b542424             mov edx, dword ptr [esp + 0x24]
// 004177fb  895608               mov dword ptr [esi + 8], edx
// 004177fe  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00417806  85ff                 test edi, edi
// 00417808  742a                 je 0x417834
// 0041780a  8d4704               lea eax, [edi + 4]
// 0041780d  83c9ff               or ecx, 0xffffffff
// 00417810  f00fc108             lock xadd dword ptr [eax], ecx
// 00417814  751e                 jne 0x417834
// 00417816  8b17                 mov edx, dword ptr [edi]
// 00417818  8b4204               mov eax, dword ptr [edx + 4]
// 0041781b  8bcf                 mov ecx, edi
// 0041781d  ffd0                 call eax
// 0041781f  8d4f08               lea ecx, [edi + 8]
// 00417822  83caff               or edx, 0xffffffff
// 00417825  f00fc111             lock xadd dword ptr [ecx], edx
// 00417829  7509                 jne 0x417834
// 0041782b  8b07                 mov eax, dword ptr [edi]
// 0041782d  8b5008               mov edx, dword ptr [eax + 8]
// 00417830  8bcf                 mov ecx, edi
// 00417832  ffd2                 call edx
// 00417834  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00417838  5f                   pop edi
// 00417839  8bc6                 mov eax, esi
// 0041783b  64890d00000000       mov dword ptr fs:[0], ecx
// 00417842  5e                   pop esi
// 00417843  83c410               add esp, 0x10
// 00417846  c20c00               ret 0xc

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control
{
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared
{
    void* object;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
    {
        volatile long* count = &control->strong;
        _InterlockedExchangeAdd(count, 1);
    }
}

inline Shared::~Shared()
{
    Control* c = control;
    if (c && _InterlockedDecrement(&c->strong) == 0)
    {
        c->dispose();
        if (_InterlockedDecrement(&c->weak) == 0)
            c->destroy();
    }
}

struct Base
{
    void* object;
    Control* control;

    Base(Shared);
};

struct S : Base
{
    int value;

    S(Shared, int);
};

S::S(Shared shared, int v)
    : Base(shared), value(v)
{
}
