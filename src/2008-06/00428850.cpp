// from server: 100% by king_originala
// roc 2008-06 00428850  unit: MainLogManager  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00428850
//
// 00428850  6aff                 push -1
// 00428852  6868917d00           push 0x7d9168
// 00428857  64a100000000         mov eax, dword ptr fs:[0]
// 0042885d  50                   push eax
// 0042885e  64892500000000       mov dword ptr fs:[0], esp
// 00428865  83ec08               sub esp, 8
// 00428868  8d0424               lea eax, [esp]
// 0042886b  56                   push esi
// 0042886c  50                   push eax
// 0042886d  e8ae0d1400           call 0x569620
// 00428872  83c404               add esp, 4
// 00428875  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00428879  8b11                 mov edx, dword ptr [ecx]
// 0042887b  8b30                 mov esi, dword ptr [eax]
// 0042887d  8b4204               mov eax, dword ptr [edx + 4]
// 00428880  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00428888  ffd0                 call eax
// 0042888a  50                   push eax
// 0042888b  6a03                 push 3
// 0042888d  56                   push esi
// 0042888e  e80d0b1400           call 0x5693a0
// 00428893  8b442414             mov eax, dword ptr [esp + 0x14]
// 00428897  83c40c               add esp, 0xc
// 0042889a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004288a2  85c0                 test eax, eax
// 004288a4  742c                 je 0x4288d2
// 004288a6  8bf0                 mov esi, eax
// 004288a8  83c004               add eax, 4
// 004288ab  83c9ff               or ecx, 0xffffffff
// 004288ae  f00fc108             lock xadd dword ptr [eax], ecx
// 004288b2  751e                 jne 0x4288d2
// 004288b4  8b16                 mov edx, dword ptr [esi]
// 004288b6  8b4204               mov eax, dword ptr [edx + 4]
// 004288b9  8bce                 mov ecx, esi
// 004288bb  ffd0                 call eax
// 004288bd  8d4e08               lea ecx, [esi + 8]
// 004288c0  83caff               or edx, 0xffffffff
// 004288c3  f00fc111             lock xadd dword ptr [ecx], edx
// 004288c7  7509                 jne 0x4288d2
// 004288c9  8b06                 mov eax, dword ptr [esi]
// 004288cb  8b5008               mov edx, dword ptr [eax + 8]
// 004288ce  8bce                 mov ecx, esi
// 004288d0  ffd2                 call edx
// 004288d2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004288d6  5e                   pop esi
// 004288d7  64890d00000000       mov dword ptr fs:[0], ecx
// 004288de  83c414               add esp, 0x14
// 004288e1  c3                   ret 

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

struct Logger
{
    void __cdecl writeLog(int, const char*);
};

struct Shared
{
    Logger* object;
    Control* control;

    Logger* operator->() const;
    ~Shared();
};

__forceinline Logger* Shared::operator->() const
{
    return object;
}

__forceinline Shared::~Shared()
{
    if (control)
        control->release();
}

struct Message
{
    virtual void unused();
    virtual const char* text();
};

extern Shared __cdecl getLogger();

void __cdecl func_00428850(Message* message)
{
    getLogger()->writeLog(3, message->text());
}
