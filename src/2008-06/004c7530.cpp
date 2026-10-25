// from server: 100% by king_originala
// roc 2008-06 004c7530  unit: RBX::VInstance::?$Association::Item  size: 358 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004c7530
//
// 004c7530  6aff                 push -1
// 004c7532  68fb7b7c00           push 0x7c7bfb
// 004c7537  64a100000000         mov eax, dword ptr fs:[0]
// 004c753d  50                   push eax
// 004c753e  64892500000000       mov dword ptr fs:[0], esp
// 004c7545  83ec18               sub esp, 0x18
// 004c7548  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004c754c  53                   push ebx
// 004c754d  56                   push esi
// 004c754e  57                   push edi
// 004c754f  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004c7557  85c9                 test ecx, ecx
// 004c7559  742b                 je 0x4c7586
// 004c755b  8d44241c             lea eax, [esp + 0x1c]
// 004c755f  50                   push eax
// 004c7560  e82b3af6ff           call 0x42af90
// 004c7565  50                   push eax
// 004c7566  8d4c2418             lea ecx, [esp + 0x18]
// 004c756a  51                   push ecx
// 004c756b  e810a10d00           call 0x5a1680
// 004c7570  83c408               add esp, 8
// 004c7573  8b742410             mov esi, dword ptr [esp + 0x10]
// 004c7577  c744242c02000000     mov dword ptr [esp + 0x2c], 2
// 004c757f  bb03000000           mov ebx, 3
// 004c7584  eb15                 jmp 0x4c759b
// 004c7586  33f6                 xor esi, esi
// 004c7588  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004c7590  89742410             mov dword ptr [esp + 0x10], esi
// 004c7594  8d44240c             lea eax, [esp + 0xc]
// 004c7598  8d5e04               lea ebx, [esi + 4]
// 004c759b  8b10                 mov edx, dword ptr [eax]
// 004c759d  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 004c75a1  8917                 mov dword ptr [edi], edx
// 004c75a3  8b4004               mov eax, dword ptr [eax + 4]
// 004c75a6  894704               mov dword ptr [edi + 4], eax
// 004c75a9  85c0                 test eax, eax
// 004c75ab  740c                 je 0x4c75b9
// 004c75ad  83c004               add eax, 4
// 004c75b0  b901000000           mov ecx, 1
// 004c75b5  f00fc108             lock xadd dword ptr [eax], ecx
// 004c75b9  83cb08               or ebx, 8
// 004c75bc  f6c304               test bl, 4
// 004c75bf  7435                 je 0x4c75f6
// 004c75c1  83e3fb               and ebx, 0xfffffffb
// 004c75c4  895c240c             mov dword ptr [esp + 0xc], ebx
// 004c75c8  85f6                 test esi, esi
// 004c75ca  742a                 je 0x4c75f6
// 004c75cc  8d5604               lea edx, [esi + 4]
// 004c75cf  83c8ff               or eax, 0xffffffff
// 004c75d2  f00fc102             lock xadd dword ptr [edx], eax
// 004c75d6  751e                 jne 0x4c75f6
// 004c75d8  8b16                 mov edx, dword ptr [esi]
// 004c75da  8b4204               mov eax, dword ptr [edx + 4]
// 004c75dd  8bce                 mov ecx, esi
// 004c75df  ffd0                 call eax
// 004c75e1  8d4e08               lea ecx, [esi + 8]
// 004c75e4  83caff               or edx, 0xffffffff
// 004c75e7  f00fc111             lock xadd dword ptr [ecx], edx
// 004c75eb  7509                 jne 0x4c75f6
// 004c75ed  8b06                 mov eax, dword ptr [esi]
// 004c75ef  8b5008               mov edx, dword ptr [eax + 8]
// 004c75f2  8bce                 mov ecx, esi
// 004c75f4  ffd2                 call edx
// 004c75f6  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 004c75fe  f6c302               test bl, 2
// 004c7601  7439                 je 0x4c763c
// 004c7603  8b742418             mov esi, dword ptr [esp + 0x18]
// 004c7607  83e3fd               and ebx, 0xfffffffd
// 004c760a  895c240c             mov dword ptr [esp + 0xc], ebx
// 004c760e  85f6                 test esi, esi
// 004c7610  742a                 je 0x4c763c
// 004c7612  8d4604               lea eax, [esi + 4]
// 004c7615  83c9ff               or ecx, 0xffffffff
// 004c7618  f00fc108             lock xadd dword ptr [eax], ecx
// 004c761c  751e                 jne 0x4c763c
// 004c761e  8b16                 mov edx, dword ptr [esi]
// 004c7620  8b4204               mov eax, dword ptr [edx + 4]
// 004c7623  8bce                 mov ecx, esi
// 004c7625  ffd0                 call eax
// 004c7627  8d4e08               lea ecx, [esi + 8]
// 004c762a  83caff               or edx, 0xffffffff
// 004c762d  f00fc111             lock xadd dword ptr [ecx], edx
// 004c7631  7509                 jne 0x4c763c
// 004c7633  8b06                 mov eax, dword ptr [esi]
// 004c7635  8b5008               mov edx, dword ptr [eax + 8]
// 004c7638  8bce                 mov ecx, esi
// 004c763a  ffd2                 call edx
// 004c763c  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 004c7644  f6c301               test bl, 1
// 004c7647  7439                 je 0x4c7682
// 004c7649  8b742420             mov esi, dword ptr [esp + 0x20]
// 004c764d  83e3fe               and ebx, 0xfffffffe
// 004c7650  895c240c             mov dword ptr [esp + 0xc], ebx
// 004c7654  85f6                 test esi, esi
// 004c7656  742a                 je 0x4c7682
// 004c7658  8d4604               lea eax, [esi + 4]
// 004c765b  83c9ff               or ecx, 0xffffffff
// 004c765e  f00fc108             lock xadd dword ptr [eax], ecx
// 004c7662  751e                 jne 0x4c7682
// 004c7664  8b16                 mov edx, dword ptr [esi]
// 004c7666  8b4204               mov eax, dword ptr [edx + 4]
// 004c7669  8bce                 mov ecx, esi
// 004c766b  ffd0                 call eax
// 004c766d  8d4e08               lea ecx, [esi + 8]
// 004c7670  83caff               or edx, 0xffffffff
// 004c7673  f00fc111             lock xadd dword ptr [ecx], edx
// 004c7677  7509                 jne 0x4c7682
// 004c7679  8b06                 mov eax, dword ptr [esi]
// 004c767b  8b5008               mov edx, dword ptr [eax + 8]
// 004c767e  8bce                 mov ecx, esi
// 004c7680  ffd2                 call edx
// 004c7682  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004c7686  8bc7                 mov eax, edi
// 004c7688  5f                   pop edi
// 004c7689  5e                   pop esi
// 004c768a  5b                   pop ebx
// 004c768b  64890d00000000       mov dword ptr fs:[0], ecx
// 004c7692  83c424               add esp, 0x24
// 004c7695  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)

struct Control
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct SourcePtr
{
    void* object;
    Control* control;
    ~SourcePtr();
};

struct Ptr
{
    void* object;
    Control* control;

    Ptr();
    Ptr(const Ptr&);
    ~Ptr();
};

__forceinline SourcePtr::~SourcePtr()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0)
    {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

__forceinline Ptr::Ptr() : object(0), control(0)
{
}

__forceinline Ptr::Ptr(const Ptr& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->strong);
}

__forceinline Ptr::~Ptr()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0)
    {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Source
{
    SourcePtr get() throw();
};

Ptr __cdecl convert(const SourcePtr&) throw();

Ptr __cdecl f(Source* source)
{
    return source ? convert(source->get()) : Ptr();
}
