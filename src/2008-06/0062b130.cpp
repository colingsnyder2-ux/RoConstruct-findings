// from server: 100% by king_originala
// roc 2008-06 0062b130  unit: RBX::Explosion  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062b130
//
// 0062b130  57                   push edi
// 0062b131  8d442408             lea eax, [esp + 8]
// 0062b135  8bf9                 mov edi, ecx
// 0062b137  50                   push eax
// 0062b138  c70700000000         mov dword ptr [edi], 0
// 0062b13e  e8adf1fdff           call 0x60a2f0
// 0062b143  83c404               add esp, 4
// 0062b146  84c0                 test al, al
// 0062b148  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0062b14c  752c                 jne 0x62b17a
// 0062b14e  8d4f08               lea ecx, [edi + 8]
// 0062b151  85c9                 test ecx, ecx
// 0062b153  741d                 je 0x62b172
// 0062b155  8b542408             mov edx, dword ptr [esp + 8]
// 0062b159  8911                 mov dword ptr [ecx], edx
// 0062b15b  894104               mov dword ptr [ecx + 4], eax
// 0062b15e  85c0                 test eax, eax
// 0062b160  7410                 je 0x62b172
// 0062b162  83c004               add eax, 4
// 0062b165  b901000000           mov ecx, 1
// 0062b16a  f00fc108             lock xadd dword ptr [eax], ecx
// 0062b16e  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0062b172  c707e45d8400         mov dword ptr [edi], 0x845de4
// 0062b178  eb06                 jmp 0x62b180
// 0062b17a  c70700000000         mov dword ptr [edi], 0
// 0062b180  85c0                 test eax, eax
// 0062b182  7434                 je 0x62b1b8
// 0062b184  56                   push esi
// 0062b185  8bf0                 mov esi, eax
// 0062b187  83c004               add eax, 4
// 0062b18a  83caff               or edx, 0xffffffff
// 0062b18d  f00fc110             lock xadd dword ptr [eax], edx
// 0062b191  751e                 jne 0x62b1b1
// 0062b193  8b06                 mov eax, dword ptr [esi]
// 0062b195  8b5004               mov edx, dword ptr [eax + 4]
// 0062b198  8bce                 mov ecx, esi
// 0062b19a  ffd2                 call edx
// 0062b19c  8d4608               lea eax, [esi + 8]
// 0062b19f  83c9ff               or ecx, 0xffffffff
// 0062b1a2  f00fc108             lock xadd dword ptr [eax], ecx
// 0062b1a6  7509                 jne 0x62b1b1
// 0062b1a8  8b16                 mov edx, dword ptr [esi]
// 0062b1aa  8b4208               mov eax, dword ptr [edx + 8]
// 0062b1ad  8bce                 mov ecx, esi
// 0062b1af  ffd0                 call eax
// 0062b1b1  5e                   pop esi
// 0062b1b2  8bc7                 mov eax, edi
// 0062b1b4  5f                   pop edi
// 0062b1b5  c20c00               ret 0xc
// 0062b1b8  8bc7                 mov eax, edi
// 0062b1ba  5f                   pop edi
// 0062b1bb  c20c00               ret 0xc

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

bool __cdecl func_0060a2f0();
extern unsigned char table_00845de4[];

inline void* __cdecl operator new(unsigned int, void* p)
{
    return p;
}

struct Control
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;

    volatile long strong;
    volatile long weak;

    void release();
};

inline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0)
    {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Pair
{
    void* object;
    Control* control;

    Pair(void* p, Control* c);
    void release();
};

inline Pair::Pair(void* p, Control* c) : object(p), control(c)
{
    if (c)
        _InterlockedIncrement(&c->strong);
}

inline void Pair::release()
{
    if (control)
        control->release();
}

struct S
{
    void* table;
    unsigned int reserved;
    Pair value;

    S* f(Pair p, unsigned int unused);
};

S* S::f(Pair p, unsigned int)
{
    table = 0;

    if (!reinterpret_cast<bool (__cdecl *)(Pair*)>(func_0060a2f0)(&p))
    {
        new (&value) Pair(p.object, p.control);
        table = table_00845de4;
    }
    else
    {
        table = 0;
    }

    p.release();
    return this;
}
