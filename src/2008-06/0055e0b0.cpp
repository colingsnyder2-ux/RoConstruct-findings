// from server: 100% by king_originala
// roc 2008-06 0055e0b0  unit: RBX::VInstance::?$NonFactoryProduct  size: 277 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055e0b0
//
// 0055e0b0  6aff                 push -1
// 0055e0b2  6851e97c00           push 0x7ce951
// 0055e0b7  64a100000000         mov eax, dword ptr fs:[0]
// 0055e0bd  50                   push eax
// 0055e0be  64892500000000       mov dword ptr fs:[0], esp
// 0055e0c5  83ec14               sub esp, 0x14
// 0055e0c8  56                   push esi
// 0055e0c9  57                   push edi
// 0055e0ca  c744240800000000     mov dword ptr [esp + 8], 0
// 0055e0d2  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0055e0d6  83ec08               sub esp, 8
// 0055e0d9  8bc4                 mov eax, esp
// 0055e0db  8908                 mov dword ptr [eax], ecx
// 0055e0dd  8b542448             mov edx, dword ptr [esp + 0x48]
// 0055e0e1  895004               mov dword ptr [eax + 4], edx
// 0055e0e4  8b442448             mov eax, dword ptr [esp + 0x48]
// 0055e0e8  bf01000000           mov edi, 1
// 0055e0ed  897c242c             mov dword ptr [esp + 0x2c], edi
// 0055e0f1  89642414             mov dword ptr [esp + 0x14], esp
// 0055e0f5  85c0                 test eax, eax
// 0055e0f7  7409                 je 0x55e102
// 0055e0f9  83c004               add eax, 4
// 0055e0fc  8bcf                 mov ecx, edi
// 0055e0fe  f00fc108             lock xadd dword ptr [eax], ecx
// 0055e102  8b542440             mov edx, dword ptr [esp + 0x40]
// 0055e106  51                   push ecx
// 0055e107  8bc4                 mov eax, esp
// 0055e109  8910                 mov dword ptr [eax], edx
// 0055e10b  8b442440             mov eax, dword ptr [esp + 0x40]
// 0055e10f  89642418             mov dword ptr [esp + 0x18], esp
// 0055e113  50                   push eax
// 0055e114  8d4c2420             lea ecx, [esp + 0x20]
// 0055e118  e813f4ffff           call 0x55d530
// 0055e11d  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0055e121  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0055e125  890e                 mov dword ptr [esi], ecx
// 0055e127  8b10                 mov edx, dword ptr [eax]
// 0055e129  895604               mov dword ptr [esi + 4], edx
// 0055e12c  8b4804               mov ecx, dword ptr [eax + 4]
// 0055e12f  894e08               mov dword ptr [esi + 8], ecx
// 0055e132  8b4008               mov eax, dword ptr [eax + 8]
// 0055e135  89460c               mov dword ptr [esi + 0xc], eax
// 0055e138  85c0                 test eax, eax
// 0055e13a  7409                 je 0x55e145
// 0055e13c  83c004               add eax, 4
// 0055e13f  8bd7                 mov edx, edi
// 0055e141  f00fc110             lock xadd dword ptr [eax], edx
// 0055e145  897c2408             mov dword ptr [esp + 8], edi
// 0055e149  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0055e14d  85ff                 test edi, edi
// 0055e14f  742a                 je 0x55e17b
// 0055e151  8d4704               lea eax, [edi + 4]
// 0055e154  83c9ff               or ecx, 0xffffffff
// 0055e157  f00fc108             lock xadd dword ptr [eax], ecx
// 0055e15b  751e                 jne 0x55e17b
// 0055e15d  8b17                 mov edx, dword ptr [edi]
// 0055e15f  8b4204               mov eax, dword ptr [edx + 4]
// 0055e162  8bcf                 mov ecx, edi
// 0055e164  ffd0                 call eax
// 0055e166  8d4f08               lea ecx, [edi + 8]
// 0055e169  83caff               or edx, 0xffffffff
// 0055e16c  f00fc111             lock xadd dword ptr [ecx], edx
// 0055e170  7509                 jne 0x55e17b
// 0055e172  8b07                 mov eax, dword ptr [edi]
// 0055e174  8b5008               mov edx, dword ptr [eax + 8]
// 0055e177  8bcf                 mov ecx, edi
// 0055e179  ffd2                 call edx
// 0055e17b  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 0055e17f  c644242400           mov byte ptr [esp + 0x24], 0
// 0055e184  85ff                 test edi, edi
// 0055e186  742a                 je 0x55e1b2
// 0055e188  8d4704               lea eax, [edi + 4]
// 0055e18b  83c9ff               or ecx, 0xffffffff
// 0055e18e  f00fc108             lock xadd dword ptr [eax], ecx
// 0055e192  751e                 jne 0x55e1b2
// 0055e194  8b17                 mov edx, dword ptr [edi]
// 0055e196  8b4204               mov eax, dword ptr [edx + 4]
// 0055e199  8bcf                 mov ecx, edi
// 0055e19b  ffd0                 call eax
// 0055e19d  8d4f08               lea ecx, [edi + 8]
// 0055e1a0  83caff               or edx, 0xffffffff
// 0055e1a3  f00fc111             lock xadd dword ptr [ecx], edx
// 0055e1a7  7509                 jne 0x55e1b2
// 0055e1a9  8b07                 mov eax, dword ptr [edi]
// 0055e1ab  8b5008               mov edx, dword ptr [eax + 8]
// 0055e1ae  8bcf                 mov ecx, edi
// 0055e1b0  ffd2                 call edx
// 0055e1b2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0055e1b6  5f                   pop edi
// 0055e1b7  8bc6                 mov eax, esi
// 0055e1b9  64890d00000000       mov dword ptr fs:[0], ecx
// 0055e1c0  5e                   pop esi
// 0055e1c1  83c420               add esp, 0x20
// 0055e1c4  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual ~Control();
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
    void release();
};

struct Shared {
    void* object;
    Control* control;
    Shared(const Shared&);
    ~Shared();
};

struct Argument {
    void* value;
    Argument(const Argument&);
};

struct Triple {
    void* value;
    Shared shared;
    Triple(int, Argument, Shared);
    Triple(const Triple&);
};

struct Result {
    int key;
    Triple value;
    Result(int, const Triple&);
};

inline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

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

inline Argument::Argument(const Argument& other)
    : value(other.value)
{
}

inline Triple::Triple(const Triple& other)
    : value(other.value), shared(other.shared)
{
}

inline Result::Result(int k, const Triple& v)
    : key(k), value(v)
{
}

Result __cdecl makeResult(int key, int argument, Argument value, Shared shared)
{
    return Result(key, Triple(argument, value, shared));
}
