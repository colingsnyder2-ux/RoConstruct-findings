// from server: 100% by king_originala
// roc 2008-06 00618ec0  unit: RBX::Flag  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00618ec0
//
// 00618ec0  57                   push edi
// 00618ec1  8d442408             lea eax, [esp + 8]
// 00618ec5  8bf9                 mov edi, ecx
// 00618ec7  50                   push eax
// 00618ec8  c70700000000         mov dword ptr [edi], 0
// 00618ece  e81d14ffff           call 0x60a2f0
// 00618ed3  83c404               add esp, 4
// 00618ed6  84c0                 test al, al
// 00618ed8  754c                 jne 0x618f26
// 00618eda  8d4708               lea eax, [edi + 8]
// 00618edd  85c0                 test eax, eax
// 00618edf  7439                 je 0x618f1a
// 00618ee1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00618ee5  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00618ee9  8908                 mov dword ptr [eax], ecx
// 00618eeb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00618eef  895004               mov dword ptr [eax + 4], edx
// 00618ef2  8b542414             mov edx, dword ptr [esp + 0x14]
// 00618ef6  894808               mov dword ptr [eax + 8], ecx
// 00618ef9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00618efd  89500c               mov dword ptr [eax + 0xc], edx
// 00618f00  894810               mov dword ptr [eax + 0x10], ecx
// 00618f03  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00618f07  894814               mov dword ptr [eax + 0x14], ecx
// 00618f0a  85c9                 test ecx, ecx
// 00618f0c  7410                 je 0x618f1e
// 00618f0e  83c104               add ecx, 4
// 00618f11  ba01000000           mov edx, 1
// 00618f16  f00fc111             lock xadd dword ptr [ecx], edx
// 00618f1a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00618f1e  c707503f8400         mov dword ptr [edi], 0x843f50
// 00618f24  eb0a                 jmp 0x618f30
// 00618f26  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00618f2a  c70700000000         mov dword ptr [edi], 0
// 00618f30  85c9                 test ecx, ecx
// 00618f32  7434                 je 0x618f68
// 00618f34  56                   push esi
// 00618f35  8bf1                 mov esi, ecx
// 00618f37  83c104               add ecx, 4
// 00618f3a  83c8ff               or eax, 0xffffffff
// 00618f3d  f00fc101             lock xadd dword ptr [ecx], eax
// 00618f41  751e                 jne 0x618f61
// 00618f43  8b16                 mov edx, dword ptr [esi]
// 00618f45  8b4204               mov eax, dword ptr [edx + 4]
// 00618f48  8bce                 mov ecx, esi
// 00618f4a  ffd0                 call eax
// 00618f4c  8d4e08               lea ecx, [esi + 8]
// 00618f4f  83caff               or edx, 0xffffffff
// 00618f52  f00fc111             lock xadd dword ptr [ecx], edx
// 00618f56  7509                 jne 0x618f61
// 00618f58  8b06                 mov eax, dword ptr [esi]
// 00618f5a  8b5008               mov edx, dword ptr [eax + 8]
// 00618f5d  8bce                 mov ecx, esi
// 00618f5f  ffd2                 call edx
// 00618f61  5e                   pop esi
// 00618f62  8bc7                 mov eax, edi
// 00618f64  5f                   pop edi
// 00618f65  c21c00               ret 0x1c
// 00618f68  8bc7                 mov eax, edi
// 00618f6a  5f                   pop edi
// 00618f6b  c21c00               ret 0x1c

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)

bool func_0060a2f0();

inline void* operator new(unsigned int, void* p)
{
    return p;
}

struct RefCount
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct MemberPointer
{
    unsigned long a;
    unsigned long b;
    unsigned long c;
    unsigned long d;
};

struct Shared
{
    unsigned long object;
    RefCount* ref;

    Shared(const Shared& other);
};

inline Shared::Shared(const Shared& other)
    : object(other.object), ref(other.ref)
{
    if (ref)
        _InterlockedIncrement(&ref->strong);
}

struct Payload
{
    MemberPointer member;
    Shared shared;
};

struct S
{
    unsigned long manager;
    unsigned long reserved;
    char storage[sizeof(Payload)];

    S* f(Payload value, unsigned long);
};

S* S::f(Payload value, unsigned long)
{
    manager = 0;
    if (!reinterpret_cast<bool (__cdecl *)(const Payload*)>(
            func_0060a2f0)(&value))
    {
        new (storage) Payload(value);
        manager = 0x843f50;
    }
    else
    {
        manager = 0;
    }

    if (value.shared.ref)
    {
        RefCount* r = value.shared.ref;
        if (_InterlockedDecrement(&r->strong) == 0)
        {
            r->dispose();
            if (_InterlockedDecrement(&r->weak) == 0)
                r->destroy();
        }
    }
    return this;
}
