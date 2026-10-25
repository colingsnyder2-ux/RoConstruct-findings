// from server: 100% by king_originala
// roc 2008-06 005adc60  unit: RBX::VScriptContext::?$BoundFuncDesc  size: 198 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005adc60
//
// 005adc60  6aff                 push -1
// 005adc62  6868917d00           push 0x7d9168
// 005adc67  64a100000000         mov eax, dword ptr fs:[0]
// 005adc6d  50                   push eax
// 005adc6e  64892500000000       mov dword ptr fs:[0], esp
// 005adc75  83ec0c               sub esp, 0xc
// 005adc78  56                   push esi
// 005adc79  68bc468300           push 0x8346bc
// 005adc7e  6a01                 push 1
// 005adc80  e8db5aeeff           call 0x493760
// 005adc85  8bc8                 mov ecx, eax
// 005adc87  e884bbedff           call 0x489810
// 005adc8c  8d442408             lea eax, [esp + 8]
// 005adc90  50                   push eax
// 005adc91  e85ab4fbff           call 0x5690f0
// 005adc96  8b10                 mov edx, dword ptr [eax]
// 005adc98  51                   push ecx
// 005adc99  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005adca1  8964240c             mov dword ptr [esp + 0xc], esp
// 005adca5  8bcc                 mov ecx, esp
// 005adca7  85d2                 test edx, edx
// 005adca9  7405                 je 0x5adcb0
// 005adcab  83c214               add edx, 0x14
// 005adcae  eb02                 jmp 0x5adcb2
// 005adcb0  33d2                 xor edx, edx
// 005adcb2  8911                 mov dword ptr [ecx], edx
// 005adcb4  8b4004               mov eax, dword ptr [eax + 4]
// 005adcb7  894104               mov dword ptr [ecx + 4], eax
// 005adcba  85c0                 test eax, eax
// 005adcbc  740c                 je 0x5adcca
// 005adcbe  83c004               add eax, 4
// 005adcc1  b901000000           mov ecx, 1
// 005adcc6  f00fc108             lock xadd dword ptr [eax], ecx
// 005adcca  8b542428             mov edx, dword ptr [esp + 0x28]
// 005adcce  52                   push edx
// 005adccf  e85ccaffff           call 0x5aa730
// 005adcd4  8b742418             mov esi, dword ptr [esp + 0x18]
// 005adcd8  83c40c               add esp, 0xc
// 005adcdb  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 005adce3  85f6                 test esi, esi
// 005adce5  742a                 je 0x5add11
// 005adce7  8d4604               lea eax, [esi + 4]
// 005adcea  83c9ff               or ecx, 0xffffffff
// 005adced  f00fc108             lock xadd dword ptr [eax], ecx
// 005adcf1  751e                 jne 0x5add11
// 005adcf3  8b16                 mov edx, dword ptr [esi]
// 005adcf5  8b4204               mov eax, dword ptr [edx + 4]
// 005adcf8  8bce                 mov ecx, esi
// 005adcfa  ffd0                 call eax
// 005adcfc  8d4e08               lea ecx, [esi + 8]
// 005adcff  83caff               or edx, 0xffffffff
// 005add02  f00fc111             lock xadd dword ptr [ecx], edx
// 005add06  7509                 jne 0x5add11
// 005add08  8b06                 mov eax, dword ptr [esi]
// 005add0a  8b5008               mov edx, dword ptr [eax + 8]
// 005add0d  8bce                 mov ecx, esi
// 005add0f  ffd2                 call edx
// 005add11  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005add15  b801000000           mov eax, 1
// 005add1a  64890d00000000       mov dword ptr fs:[0], ecx
// 005add21  5e                   pop esi
// 005add22  83c418               add esp, 0x18
// 005add25  c3                   ret 

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
};

struct Shared
{
    void *object;
    Control *control;
    ~Shared();
};

struct Adjusted
{
    void *object;
    Control *control;
    Adjusted(const Shared &);
    Adjusted(const Adjusted &);
    ~Adjusted();
};

struct Instance
{
    void sub_489810();
};

extern "C" Instance *__stdcall sub_493760(int, const char *);
extern Shared __cdecl sub_5690f0();
extern void __cdecl sub_5aa730(void *, Adjusted);

__forceinline Shared::~Shared()
{
    Control *p = control;
    if (p)
    {
        if (_InterlockedDecrement(&p->strong) == 0)
        {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

__forceinline Adjusted::Adjusted(const Shared &p)
{
    object = p.object ? (char *)p.object + 20 : 0;
    control = p.control;
    if (control)
        _InterlockedIncrement(&control->strong);
}

__forceinline Adjusted::Adjusted(const Adjusted &p)
{
    object = p.object;
    control = p.control;
    if (control)
        _InterlockedIncrement(&control->strong);
}

__forceinline Adjusted::~Adjusted()
{
    Control *p = control;
    if (p)
    {
        if (_InterlockedDecrement(&p->strong) == 0)
        {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

int __cdecl f(void *state)
{
    sub_493760(1, "settings()")->sub_489810();
    sub_5aa730(state, Adjusted(sub_5690f0()));
    return 1;
}
