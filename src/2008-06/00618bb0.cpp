// from server: 82% by colin
// from server: 80% by colin
// roc 2008-06 00618bb0  unit: RBX::VFlag::?$FactoryProduct  size: 283 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00618bb0
//
// 00618bb0  6aff                 push -1
// 00618bb2  6851917d00           push 0x7d9151
// 00618bb7  64a100000000         mov eax, dword ptr fs:[0]
// 00618bbd  50                   push eax
// 00618bbe  64892500000000       mov dword ptr fs:[0], esp
// 00618bc5  83ec14               sub esp, 0x14
// 00618bc8  56                   push esi
// 00618bc9  57                   push edi
// 00618bca  c744240800000000     mov dword ptr [esp + 8], 0
// 00618bd2  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00618bd6  83ec08               sub esp, 8
// 00618bd9  8bc4                 mov eax, esp
// 00618bdb  89642414             mov dword ptr [esp + 0x14], esp
// 00618bdf  8908                 mov dword ptr [eax], ecx
// 00618be1  8b542448             mov edx, dword ptr [esp + 0x48]
// 00618be5  895004               mov dword ptr [eax + 4], edx
// 00618be8  8b442448             mov eax, dword ptr [esp + 0x48]
// 00618bec  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 00618bf4  85c0                 test eax, eax
// 00618bf6  740c                 je 0x618c04
// 00618bf8  83c004               add eax, 4
// 00618bfb  b901000000           mov ecx, 1
// 00618c00  f00fc108             lock xadd dword ptr [eax], ecx
// 00618c04  8d4c2414             lea ecx, [esp + 0x14]
// 00618c08  e823fcffff           call 0x618830
// 00618c0d  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00618c11  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00618c15  8b542434             mov edx, dword ptr [esp + 0x34]
// 00618c19  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00618c1d  890e                 mov dword ptr [esi], ecx
// 00618c1f  895604               mov dword ptr [esi + 4], edx
// 00618c22  8b542418             mov edx, dword ptr [esp + 0x18]
// 00618c26  897e08               mov dword ptr [esi + 8], edi
// 00618c29  89560c               mov dword ptr [esi + 0xc], edx
// 00618c2c  8b08                 mov ecx, dword ptr [eax]
// 00618c2e  894e10               mov dword ptr [esi + 0x10], ecx
// 00618c31  8b4004               mov eax, dword ptr [eax + 4]
// 00618c34  894614               mov dword ptr [esi + 0x14], eax
// 00618c37  85c0                 test eax, eax
// 00618c39  740c                 je 0x618c47
// 00618c3b  83c004               add eax, 4
// 00618c3e  ba01000000           mov edx, 1
// 00618c43  f00fc110             lock xadd dword ptr [eax], edx
// 00618c47  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00618c4b  c744240801000000     mov dword ptr [esp + 8], 1
// 00618c53  85ff                 test edi, edi
// 00618c55  742a                 je 0x618c81
// 00618c57  8d4704               lea eax, [edi + 4]
// 00618c5a  83c9ff               or ecx, 0xffffffff
// 00618c5d  f00fc108             lock xadd dword ptr [eax], ecx
// 00618c61  751e                 jne 0x618c81
// 00618c63  8b17                 mov edx, dword ptr [edi]
// 00618c65  8b4204               mov eax, dword ptr [edx + 4]
// 00618c68  8bcf                 mov ecx, edi
// 00618c6a  ffd0                 call eax
// 00618c6c  8d4f08               lea ecx, [edi + 8]
// 00618c6f  83caff               or edx, 0xffffffff
// 00618c72  f00fc111             lock xadd dword ptr [ecx], edx
// 00618c76  7509                 jne 0x618c81
// 00618c78  8b07                 mov eax, dword ptr [edi]
// 00618c7a  8b5008               mov edx, dword ptr [eax + 8]
// 00618c7d  8bcf                 mov ecx, edi
// 00618c7f  ffd2                 call edx
// 00618c81  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 00618c85  c644242400           mov byte ptr [esp + 0x24], 0
// 00618c8a  85ff                 test edi, edi
// 00618c8c  742a                 je 0x618cb8
// 00618c8e  8d4704               lea eax, [edi + 4]
// 00618c91  83c9ff               or ecx, 0xffffffff
// 00618c94  f00fc108             lock xadd dword ptr [eax], ecx
// 00618c98  751e                 jne 0x618cb8
// 00618c9a  8b17                 mov edx, dword ptr [edi]
// 00618c9c  8b4204               mov eax, dword ptr [edx + 4]
// 00618c9f  8bcf                 mov ecx, edi
// 00618ca1  ffd0                 call eax
// 00618ca3  8d4f08               lea ecx, [edi + 8]
// 00618ca6  83caff               or edx, 0xffffffff
// 00618ca9  f00fc111             lock xadd dword ptr [ecx], edx
// 00618cad  7509                 jne 0x618cb8
// 00618caf  8b07                 mov eax, dword ptr [edi]
// 00618cb1  8b5008               mov edx, dword ptr [eax + 8]
// 00618cb4  8bcf                 mov ecx, edi
// 00618cb6  ffd2                 call edx
// 00618cb8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00618cbc  5f                   pop edi
// 00618cbd  8bc6                 mov eax, esi
// 00618cbf  64890d00000000       mov dword ptr fs:[0], ecx
// 00618cc6  5e                   pop esi
// 00618cc7  83c420               add esp, 0x20
// 00618cca  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void reserved() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

__forceinline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->strong);
}

__forceinline Shared::~Shared()
{
    Control* p = control;
    if (p) {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 1) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
                p->destroy();
        }
    }
}

struct Temporary {
    Shared pointer;
    int value;

    Temporary(Shared);
};

struct Result {
    int first;
    int second;
    int third;
    int value;
    Shared pointer;

    Result(int, int, int, const Temporary&);
};

__forceinline Result::Result(int a, int b, int c, const Temporary& temporary)
    : first(a), second(b), third(c), value(temporary.value),
      pointer(temporary.pointer)
{
}

Result __cdecl reconstruct(int a, int b, int c, Shared pointer)
{
    return Result(a, b, c, Temporary(pointer));
}
