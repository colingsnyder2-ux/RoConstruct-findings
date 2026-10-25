// from server: 100% by king_originala
// roc 2008-06 0048bfe0  unit: G3D::VVector2int16::?$TypedPropertyDescriptor  size: 259 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048bfe0
//
// 0048bfe0  6aff                 push -1
// 0048bfe2  6800ef7b00           push 0x7bef00
// 0048bfe7  64a100000000         mov eax, dword ptr fs:[0]
// 0048bfed  50                   push eax
// 0048bfee  64892500000000       mov dword ptr fs:[0], esp
// 0048bff5  51                   push ecx
// 0048bff6  56                   push esi
// 0048bff7  57                   push edi
// 0048bff8  8bf9                 mov edi, ecx
// 0048bffa  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0048bffe  83ec08               sub esp, 8
// 0048c001  8bc4                 mov eax, esp
// 0048c003  8908                 mov dword ptr [eax], ecx
// 0048c005  8b542430             mov edx, dword ptr [esp + 0x30]
// 0048c009  895004               mov dword ptr [eax + 4], edx
// 0048c00c  8b442430             mov eax, dword ptr [esp + 0x30]
// 0048c010  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 0048c018  89642410             mov dword ptr [esp + 0x10], esp
// 0048c01c  85c0                 test eax, eax
// 0048c01e  740c                 je 0x48c02c
// 0048c020  83c004               add eax, 4
// 0048c023  b901000000           mov ecx, 1
// 0048c028  f00fc108             lock xadd dword ptr [eax], ecx
// 0048c02c  8b542424             mov edx, dword ptr [esp + 0x24]
// 0048c030  83ec08               sub esp, 8
// 0048c033  8bc4                 mov eax, esp
// 0048c035  8910                 mov dword ptr [eax], edx
// 0048c037  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0048c03b  894804               mov dword ptr [eax + 4], ecx
// 0048c03e  8b442430             mov eax, dword ptr [esp + 0x30]
// 0048c042  89642418             mov dword ptr [esp + 0x18], esp
// 0048c046  85c0                 test eax, eax
// 0048c048  740c                 je 0x48c056
// 0048c04a  83c004               add eax, 4
// 0048c04d  ba01000000           mov edx, 1
// 0048c052  f00fc110             lock xadd dword ptr [eax], edx
// 0048c056  8bcf                 mov ecx, edi
// 0048c058  e8438c0c00           call 0x554ca0
// 0048c05d  8b742420             mov esi, dword ptr [esp + 0x20]
// 0048c061  c644241400           mov byte ptr [esp + 0x14], 0
// 0048c066  85f6                 test esi, esi
// 0048c068  742a                 je 0x48c094
// 0048c06a  8d4604               lea eax, [esi + 4]
// 0048c06d  83c9ff               or ecx, 0xffffffff
// 0048c070  f00fc108             lock xadd dword ptr [eax], ecx
// 0048c074  751e                 jne 0x48c094
// 0048c076  8b16                 mov edx, dword ptr [esi]
// 0048c078  8b4204               mov eax, dword ptr [edx + 4]
// 0048c07b  8bce                 mov ecx, esi
// 0048c07d  ffd0                 call eax
// 0048c07f  8d4e08               lea ecx, [esi + 8]
// 0048c082  83caff               or edx, 0xffffffff
// 0048c085  f00fc111             lock xadd dword ptr [ecx], edx
// 0048c089  7509                 jne 0x48c094
// 0048c08b  8b06                 mov eax, dword ptr [esi]
// 0048c08d  8b5008               mov edx, dword ptr [eax + 8]
// 0048c090  8bce                 mov ecx, esi
// 0048c092  ffd2                 call edx
// 0048c094  8b742428             mov esi, dword ptr [esp + 0x28]
// 0048c098  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0048c0a0  85f6                 test esi, esi
// 0048c0a2  742a                 je 0x48c0ce
// 0048c0a4  8d4604               lea eax, [esi + 4]
// 0048c0a7  83c9ff               or ecx, 0xffffffff
// 0048c0aa  f00fc108             lock xadd dword ptr [eax], ecx
// 0048c0ae  751e                 jne 0x48c0ce
// 0048c0b0  8b16                 mov edx, dword ptr [esi]
// 0048c0b2  8b4204               mov eax, dword ptr [edx + 4]
// 0048c0b5  8bce                 mov ecx, esi
// 0048c0b7  ffd0                 call eax
// 0048c0b9  8d4e08               lea ecx, [esi + 8]
// 0048c0bc  83caff               or edx, 0xffffffff
// 0048c0bf  f00fc111             lock xadd dword ptr [ecx], edx
// 0048c0c3  7509                 jne 0x48c0ce
// 0048c0c5  8b06                 mov eax, dword ptr [esi]
// 0048c0c7  8b5008               mov edx, dword ptr [eax + 8]
// 0048c0ca  8bce                 mov ecx, esi
// 0048c0cc  ffd2                 call edx
// 0048c0ce  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048c0d2  8bc7                 mov eax, edi
// 0048c0d4  5f                   pop edi
// 0048c0d5  64890d00000000       mov dword ptr fs:[0], ecx
// 0048c0dc  5e                   pop esi
// 0048c0dd  83c410               add esp, 0x10
// 0048c0e0  c21400               ret 0x14

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;

    void release();
};

inline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Shared {
    void* object;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->strong);
}

inline Shared::~Shared()
{
    if (control)
        control->release();
}

struct Base {
    Base(Shared, Shared);
};

struct S : Base {
    S(Shared, Shared, int);
};

S::S(Shared first, Shared second, int)
    : Base(first, second)
{
}
