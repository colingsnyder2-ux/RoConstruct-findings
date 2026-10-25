// from server: 100% by colin
// roc 2008-06 005fdbc0  unit: RBX::Tool  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fdbc0
//
// 005fdbc0  64a100000000         mov eax, dword ptr fs:[0]
// 005fdbc6  6aff                 push -1
// 005fdbc8  6868617c00           push 0x7c6168
// 005fdbcd  50                   push eax
// 005fdbce  64892500000000       mov dword ptr fs:[0], esp
// 005fdbd5  56                   push esi
// 005fdbd6  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005fdbde  394c2414             cmp dword ptr [esp + 0x14], ecx
// 005fdbe2  7405                 je 0x5fdbe9
// 005fdbe4  e887ffffff           call 0x5fdb70
// 005fdbe9  8b742418             mov esi, dword ptr [esp + 0x18]
// 005fdbed  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 005fdbf5  85f6                 test esi, esi
// 005fdbf7  742a                 je 0x5fdc23
// 005fdbf9  8d4604               lea eax, [esi + 4]
// 005fdbfc  83c9ff               or ecx, 0xffffffff
// 005fdbff  f00fc108             lock xadd dword ptr [eax], ecx
// 005fdc03  751e                 jne 0x5fdc23
// 005fdc05  8b16                 mov edx, dword ptr [esi]
// 005fdc07  8b4204               mov eax, dword ptr [edx + 4]
// 005fdc0a  8bce                 mov ecx, esi
// 005fdc0c  ffd0                 call eax
// 005fdc0e  8d4e08               lea ecx, [esi + 8]
// 005fdc11  83caff               or edx, 0xffffffff
// 005fdc14  f00fc111             lock xadd dword ptr [ecx], edx
// 005fdc18  7509                 jne 0x5fdc23
// 005fdc1a  8b06                 mov eax, dword ptr [esi]
// 005fdc1c  8b5008               mov edx, dword ptr [eax + 8]
// 005fdc1f  8bce                 mov ecx, esi
// 005fdc21  ffd2                 call edx
// 005fdc23  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005fdc27  64890d00000000       mov dword ptr fs:[0], ecx
// 005fdc2e  5e                   pop esi
// 005fdc2f  83c40c               add esp, 0xc
// 005fdc32  c20800               ret 8

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct S;

struct Shared {
    S* pointer;
    Control* control;
    ~Shared();
};

struct S {
    void helper();
    void func_005b1110(Shared value);
};

inline Shared::~Shared()
{
    Control* p = control;
    if (p) {
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

void S::func_005b1110(Shared value)
{
    if (value.pointer != this)
        helper();
}
