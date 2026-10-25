// from server: 100% by king_originala
// roc 2008-06 005b1110  unit: RBX::Accoutrement  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b1110
//
// 005b1110  64a100000000         mov eax, dword ptr fs:[0]
// 005b1116  6aff                 push -1
// 005b1118  6868617c00           push 0x7c6168
// 005b111d  50                   push eax
// 005b111e  64892500000000       mov dword ptr fs:[0], esp
// 005b1125  56                   push esi
// 005b1126  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005b112e  394c2414             cmp dword ptr [esp + 0x14], ecx
// 005b1132  7405                 je 0x5b1139
// 005b1134  e867ffffff           call 0x5b10a0
// 005b1139  8b742418             mov esi, dword ptr [esp + 0x18]
// 005b113d  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 005b1145  85f6                 test esi, esi
// 005b1147  742a                 je 0x5b1173
// 005b1149  8d4604               lea eax, [esi + 4]
// 005b114c  83c9ff               or ecx, 0xffffffff
// 005b114f  f00fc108             lock xadd dword ptr [eax], ecx
// 005b1153  751e                 jne 0x5b1173
// 005b1155  8b16                 mov edx, dword ptr [esi]
// 005b1157  8b4204               mov eax, dword ptr [edx + 4]
// 005b115a  8bce                 mov ecx, esi
// 005b115c  ffd0                 call eax
// 005b115e  8d4e08               lea ecx, [esi + 8]
// 005b1161  83caff               or edx, 0xffffffff
// 005b1164  f00fc111             lock xadd dword ptr [ecx], edx
// 005b1168  7509                 jne 0x5b1173
// 005b116a  8b06                 mov eax, dword ptr [esi]
// 005b116c  8b5008               mov edx, dword ptr [eax + 8]
// 005b116f  8bce                 mov ecx, esi
// 005b1171  ffd2                 call edx
// 005b1173  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005b1177  64890d00000000       mov dword ptr fs:[0], ecx
// 005b117e  5e                   pop esi
// 005b117f  83c40c               add esp, 0xc
// 005b1182  c20800               ret 8

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
