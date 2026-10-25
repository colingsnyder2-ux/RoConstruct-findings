// from server: 100% by king_originala
// roc 2008-06 0048caa0  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 346 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048caa0
//
// 0048caa0  6aff                 push -1
// 0048caa2  6889627c00           push 0x7c6289
// 0048caa7  64a100000000         mov eax, dword ptr fs:[0]
// 0048caad  50                   push eax
// 0048caae  64892500000000       mov dword ptr fs:[0], esp
// 0048cab5  83ec18               sub esp, 0x18
// 0048cab8  56                   push esi
// 0048cab9  57                   push edi
// 0048caba  c744240800000000     mov dword ptr [esp + 8], 0
// 0048cac2  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0048cac6  83ec08               sub esp, 8
// 0048cac9  8bc4                 mov eax, esp
// 0048cacb  8908                 mov dword ptr [eax], ecx
// 0048cacd  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0048cad1  895004               mov dword ptr [eax + 4], edx
// 0048cad4  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0048cad8  c744243002000000     mov dword ptr [esp + 0x30], 2
// 0048cae0  89642414             mov dword ptr [esp + 0x14], esp
// 0048cae4  85c0                 test eax, eax
// 0048cae6  740c                 je 0x48caf4
// 0048cae8  83c004               add eax, 4
// 0048caeb  b901000000           mov ecx, 1
// 0048caf0  f00fc108             lock xadd dword ptr [eax], ecx
// 0048caf4  8b542440             mov edx, dword ptr [esp + 0x40]
// 0048caf8  83ec08               sub esp, 8
// 0048cafb  8bc4                 mov eax, esp
// 0048cafd  8910                 mov dword ptr [eax], edx
// 0048caff  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0048cb03  894804               mov dword ptr [eax + 4], ecx
// 0048cb06  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0048cb0a  8964241c             mov dword ptr [esp + 0x1c], esp
// 0048cb0e  85c0                 test eax, eax
// 0048cb10  740c                 je 0x48cb1e
// 0048cb12  83c004               add eax, 4
// 0048cb15  ba01000000           mov edx, 1
// 0048cb1a  f00fc110             lock xadd dword ptr [eax], edx
// 0048cb1e  8d4c2420             lea ecx, [esp + 0x20]
// 0048cb22  e849f2ffff           call 0x48bd70
// 0048cb27  8b742430             mov esi, dword ptr [esp + 0x30]
// 0048cb2b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0048cb2f  890e                 mov dword ptr [esi], ecx
// 0048cb31  8b10                 mov edx, dword ptr [eax]
// 0048cb33  895604               mov dword ptr [esi + 4], edx
// 0048cb36  8b4804               mov ecx, dword ptr [eax + 4]
// 0048cb39  894e08               mov dword ptr [esi + 8], ecx
// 0048cb3c  85c9                 test ecx, ecx
// 0048cb3e  740c                 je 0x48cb4c
// 0048cb40  83c104               add ecx, 4
// 0048cb43  ba01000000           mov edx, 1
// 0048cb48  f00fc111             lock xadd dword ptr [ecx], edx
// 0048cb4c  8b4808               mov ecx, dword ptr [eax + 8]
// 0048cb4f  894e0c               mov dword ptr [esi + 0xc], ecx
// 0048cb52  8b400c               mov eax, dword ptr [eax + 0xc]
// 0048cb55  894610               mov dword ptr [esi + 0x10], eax
// 0048cb58  85c0                 test eax, eax
// 0048cb5a  740c                 je 0x48cb68
// 0048cb5c  83c004               add eax, 4
// 0048cb5f  ba01000000           mov edx, 1
// 0048cb64  f00fc110             lock xadd dword ptr [eax], edx
// 0048cb68  8d4c2410             lea ecx, [esp + 0x10]
// 0048cb6c  c744240801000000     mov dword ptr [esp + 8], 1
// 0048cb74  e8e760f9ff           call 0x422c60
// 0048cb79  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0048cb7d  c644242801           mov byte ptr [esp + 0x28], 1
// 0048cb82  85ff                 test edi, edi
// 0048cb84  742a                 je 0x48cbb0
// 0048cb86  8d4704               lea eax, [edi + 4]
// 0048cb89  83c9ff               or ecx, 0xffffffff
// 0048cb8c  f00fc108             lock xadd dword ptr [eax], ecx
// 0048cb90  751e                 jne 0x48cbb0
// 0048cb92  8b17                 mov edx, dword ptr [edi]
// 0048cb94  8b4204               mov eax, dword ptr [edx + 4]
// 0048cb97  8bcf                 mov ecx, edi
// 0048cb99  ffd0                 call eax
// 0048cb9b  8d4f08               lea ecx, [edi + 8]
// 0048cb9e  83caff               or edx, 0xffffffff
// 0048cba1  f00fc111             lock xadd dword ptr [ecx], edx
// 0048cba5  7509                 jne 0x48cbb0
// 0048cba7  8b07                 mov eax, dword ptr [edi]
// 0048cba9  8b5008               mov edx, dword ptr [eax + 8]
// 0048cbac  8bcf                 mov ecx, edi
// 0048cbae  ffd2                 call edx
// 0048cbb0  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 0048cbb4  c644242800           mov byte ptr [esp + 0x28], 0
// 0048cbb9  85ff                 test edi, edi
// 0048cbbb  742a                 je 0x48cbe7
// 0048cbbd  8d4704               lea eax, [edi + 4]
// 0048cbc0  83c9ff               or ecx, 0xffffffff
// 0048cbc3  f00fc108             lock xadd dword ptr [eax], ecx
// 0048cbc7  751e                 jne 0x48cbe7
// 0048cbc9  8b17                 mov edx, dword ptr [edi]
// 0048cbcb  8b4204               mov eax, dword ptr [edx + 4]
// 0048cbce  8bcf                 mov ecx, edi
// 0048cbd0  ffd0                 call eax
// 0048cbd2  8d4f08               lea ecx, [edi + 8]
// 0048cbd5  83caff               or edx, 0xffffffff
// 0048cbd8  f00fc111             lock xadd dword ptr [ecx], edx
// 0048cbdc  7509                 jne 0x48cbe7
// 0048cbde  8b07                 mov eax, dword ptr [edi]
// 0048cbe0  8b5008               mov edx, dword ptr [eax + 8]
// 0048cbe3  8bcf                 mov ecx, edi
// 0048cbe5  ffd2                 call edx
// 0048cbe7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0048cbeb  5f                   pop edi
// 0048cbec  8bc6                 mov eax, esi
// 0048cbee  64890d00000000       mov dword ptr fs:[0], ecx
// 0048cbf5  5e                   pop esi
// 0048cbf6  83c424               add esp, 0x24
// 0048cbf9  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual ~Control();
    virtual void dispose() = 0;
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
    void* pointer;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : pointer(other.pointer), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->strong);
}

inline Shared::~Shared()
{
    if (control)
        control->release();
}

struct Pair {
    Shared first;
    Shared second;

    Pair(Shared, Shared);
    ~Pair();
};

struct Result {
    int value;
    Pair pair;

    Result(int, const Pair&);
};

inline Result::Result(int v, const Pair& p)
    : value(v), pair(p)
{
}

Result __cdecl makeResult(int value, Shared first, Shared second)
{
    return Result(value, Pair(first, second));
}
