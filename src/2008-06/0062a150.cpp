// from server: 100% by king_originala
// roc 2008-06 0062a150  unit: RBX::VNetworkSettings::?$BoundPropGetSet  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062a150
//
// 0062a150  8b442404             mov eax, dword ptr [esp + 4]
// 0062a154  56                   push esi
// 0062a155  8bf1                 mov esi, ecx
// 0062a157  8906                 mov dword ptr [esi], eax
// 0062a159  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0062a15d  894604               mov dword ptr [esi + 4], eax
// 0062a160  85c0                 test eax, eax
// 0062a162  7410                 je 0x62a174
// 0062a164  83c004               add eax, 4
// 0062a167  b901000000           mov ecx, 1
// 0062a16c  f00fc108             lock xadd dword ptr [eax], ecx
// 0062a170  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0062a174  d9442410             fld dword ptr [esp + 0x10]
// 0062a178  d95e08               fstp dword ptr [esi + 8]
// 0062a17b  85c0                 test eax, eax
// 0062a17d  7434                 je 0x62a1b3
// 0062a17f  57                   push edi
// 0062a180  8bf8                 mov edi, eax
// 0062a182  83c004               add eax, 4
// 0062a185  83caff               or edx, 0xffffffff
// 0062a188  f00fc110             lock xadd dword ptr [eax], edx
// 0062a18c  751e                 jne 0x62a1ac
// 0062a18e  8b07                 mov eax, dword ptr [edi]
// 0062a190  8b5004               mov edx, dword ptr [eax + 4]
// 0062a193  8bcf                 mov ecx, edi
// 0062a195  ffd2                 call edx
// 0062a197  8d4708               lea eax, [edi + 8]
// 0062a19a  83c9ff               or ecx, 0xffffffff
// 0062a19d  f00fc108             lock xadd dword ptr [eax], ecx
// 0062a1a1  7509                 jne 0x62a1ac
// 0062a1a3  8b17                 mov edx, dword ptr [edi]
// 0062a1a5  8b4208               mov eax, dword ptr [edx + 8]
// 0062a1a8  8bcf                 mov ecx, edi
// 0062a1aa  ffd0                 call eax
// 0062a1ac  5f                   pop edi
// 0062a1ad  8bc6                 mov eax, esi
// 0062a1af  5e                   pop esi
// 0062a1b0  c20c00               ret 0xc
// 0062a1b3  8bc6                 mov eax, esi
// 0062a1b5  5e                   pop esi
// 0062a1b6  c20c00               ret 0xc

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;

    volatile long strong;
    volatile long weak;

    void release();
};

__forceinline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0)
    {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Shared
{
    void* object;
    Control* control;

    ~Shared();
};

__forceinline Shared::~Shared()
{
    if (control)
        control->release();
}

struct S
{
    void* object;
    Control* control;
    float value;

    S(Shared source, float number);
};

S::S(Shared source, float number)
{
    object = source.object;
    control = source.control;
    if (source.control)
        _InterlockedIncrement(&source.control->strong);
    value = number;
}
