// roc 2009-06 0063cda0  unit: RBX::Accoutrement  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0063cda0
//
// 0063cda0  64a100000000         mov eax, dword ptr fs:[0]
// 0063cda6  6aff                 push -1
// 0063cda8  6838938500           push 0x859338
// 0063cdad  50                   push eax
// 0063cdae  64892500000000       mov dword ptr fs:[0], esp
// 0063cdb5  56                   push esi
// 0063cdb6  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0063cdbe  394c2414             cmp dword ptr [esp + 0x14], ecx
// 0063cdc2  7405                 je 0x63cdc9
// 0063cdc4  e867ffffff           call 0x63cd30
// 0063cdc9  8b742418             mov esi, dword ptr [esp + 0x18]
// 0063cdcd  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 0063cdd5  85f6                 test esi, esi
// 0063cdd7  742a                 je 0x63ce03
// 0063cdd9  8d4604               lea eax, [esi + 4]
// 0063cddc  83c9ff               or ecx, 0xffffffff
// 0063cddf  f00fc108             lock xadd dword ptr [eax], ecx
// 0063cde3  751e                 jne 0x63ce03
// 0063cde5  8b16                 mov edx, dword ptr [esi]
// 0063cde7  8b4204               mov eax, dword ptr [edx + 4]
// 0063cdea  8bce                 mov ecx, esi
// 0063cdec  ffd0                 call eax
// 0063cdee  8d4e08               lea ecx, [esi + 8]
// 0063cdf1  83caff               or edx, 0xffffffff
// 0063cdf4  f00fc111             lock xadd dword ptr [ecx], edx
// 0063cdf8  7509                 jne 0x63ce03
// 0063cdfa  8b06                 mov eax, dword ptr [esi]
// 0063cdfc  8b5008               mov edx, dword ptr [eax + 8]
// 0063cdff  8bce                 mov ecx, esi
// 0063ce01  ffd2                 call edx
// 0063ce03  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0063ce07  64890d00000000       mov dword ptr fs:[0], ecx
// 0063ce0e  5e                   pop esi
// 0063ce0f  83c40c               add esp, 0xc
// 0063ce12  c20800               ret 8
// copied from an identical function in another client (function ?fn_ROCX000000@S@@QAEXUShared@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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