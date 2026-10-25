// from server: 100% by colin
// roc 2008-06 004657f0  unit: CScriptEditor  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004657f0
//
// 004657f0  837c240801           cmp dword ptr [esp + 8], 1
// 004657f5  56                   push esi
// 004657f6  752f                 jne 0x465827
// 004657f8  8b4154               mov eax, dword ptr [ecx + 0x54]
// 004657fb  8b7054               mov esi, dword ptr [eax + 0x54]
// 004657fe  83c054               add eax, 0x54
// 00465801  83ec08               sub esp, 8
// 00465804  8bd4                 mov edx, esp
// 00465806  8932                 mov dword ptr [edx], esi
// 00465808  8b4004               mov eax, dword ptr [eax + 4]
// 0046580b  89642414             mov dword ptr [esp + 0x14], esp
// 0046580f  894204               mov dword ptr [edx + 4], eax
// 00465812  85c0                 test eax, eax
// 00465814  740c                 je 0x465822
// 00465816  83c004               add eax, 4
// 00465819  ba01000000           mov edx, 1
// 0046581e  f00fc110             lock xadd dword ptr [eax], edx
// 00465822  e839faffff           call 0x465260
// 00465827  5e                   pop esi
// 00465828  c20c00               ret 0xc

extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control
{
    long unused;
    volatile long references;
};

struct Shared
{
    void* pointer;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : pointer(other.pointer), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->references);
}

struct Document
{
    char padding[0x54];
    Shared value;
};

struct CScriptEditor
{
    char padding[0x54];
    Document* document;

    void consume(Shared);
    void notify(int, int, int);
};

void CScriptEditor::notify(int, int event, int)
{
    if (event == 1)
        consume(document->value);
}
