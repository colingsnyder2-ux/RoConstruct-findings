// roc 2009-06 00627320  unit: RBX::Tool  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00627320
//
// 00627320  64a100000000         mov eax, dword ptr fs:[0]
// 00627326  6aff                 push -1
// 00627328  6838938500           push 0x859338
// 0062732d  50                   push eax
// 0062732e  64892500000000       mov dword ptr fs:[0], esp
// 00627335  56                   push esi
// 00627336  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0062733e  394c2414             cmp dword ptr [esp + 0x14], ecx
// 00627342  7405                 je 0x627349
// 00627344  e887ffffff           call 0x6272d0
// 00627349  8b742418             mov esi, dword ptr [esp + 0x18]
// 0062734d  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 00627355  85f6                 test esi, esi
// 00627357  742a                 je 0x627383
// 00627359  8d4604               lea eax, [esi + 4]
// 0062735c  83c9ff               or ecx, 0xffffffff
// 0062735f  f00fc108             lock xadd dword ptr [eax], ecx
// 00627363  751e                 jne 0x627383
// 00627365  8b16                 mov edx, dword ptr [esi]
// 00627367  8b4204               mov eax, dword ptr [edx + 4]
// 0062736a  8bce                 mov ecx, esi
// 0062736c  ffd0                 call eax
// 0062736e  8d4e08               lea ecx, [esi + 8]
// 00627371  83caff               or edx, 0xffffffff
// 00627374  f00fc111             lock xadd dword ptr [ecx], edx
// 00627378  7509                 jne 0x627383
// 0062737a  8b06                 mov eax, dword ptr [esi]
// 0062737c  8b5008               mov edx, dword ptr [eax + 8]
// 0062737f  8bce                 mov ecx, esi
// 00627381  ffd2                 call edx
// 00627383  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00627387  64890d00000000       mov dword ptr fs:[0], ecx
// 0062738e  5e                   pop esi
// 0062738f  83c40c               add esp, 0xc
// 00627392  c20800               ret 8
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