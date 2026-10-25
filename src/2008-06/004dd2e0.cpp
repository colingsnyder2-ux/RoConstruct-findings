// from server: 100% by Espeon
// roc 2008-06 004dd2e0  unit: RBX::ViewNew::ViewG3D  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004dd2e0
//
// 004dd2e0  6aff                 push -1
// 004dd2e2  6848e47e00           push 0x7ee448
// 004dd2e7  64a100000000         mov eax, dword ptr fs:[0]
// 004dd2ed  50                   push eax
// 004dd2ee  64892500000000       mov dword ptr fs:[0], esp
// 004dd2f5  51                   push ecx
// 004dd2f6  8bc1                 mov eax, ecx
// 004dd2f8  33c9                 xor ecx, ecx
// 004dd2fa  c700e0e18100         mov dword ptr [eax], 0x81e1e0
// 004dd300  894804               mov dword ptr [eax + 4], ecx
// 004dd303  894808               mov dword ptr [eax + 8], ecx
// 004dd306  8b542414             mov edx, dword ptr [esp + 0x14]
// 004dd30a  c7004c6e8200         mov dword ptr [eax], 0x826e4c
// 004dd310  894810               mov dword ptr [eax + 0x10], ecx
// 004dd313  894814               mov dword ptr [eax + 0x14], ecx
// 004dd316  89480c               mov dword ptr [eax + 0xc], ecx
// 004dd319  894824               mov dword ptr [eax + 0x24], ecx
// 004dd31c  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004dd320  895018               mov dword ptr [eax + 0x18], edx
// 004dd323  c6401c01             mov byte ptr [eax + 0x1c], 1
// 004dd327  c74020ffffffff       mov dword ptr [eax + 0x20], 0xffffffff
// 004dd32e  64890d00000000       mov dword ptr fs:[0], ecx
// 004dd335  83c410               add esp, 0x10
// 004dd338  c20400               ret 4

extern "C" void _ReadWriteBarrier();
#pragma intrinsic(_ReadWriteBarrier)
// from server: 84% by king_originala
struct Base
{
    unsigned int first;
    unsigned int second;

    Base();
    virtual ~Base();
};

inline Base::Base() : first(0), second(0)
{
    _ReadWriteBarrier();
}

struct Pair
{
    unsigned int first;
    unsigned int second;

    Pair();
    ~Pair();
};

inline Pair::Pair() : first(0), second(0)
{
    if (first)
        throw 0;
}

struct S : Base
{
    unsigned int field0c;
    Pair field10;
    unsigned int field18;
    bool field1c;
    int field20;
    unsigned int field24;

    S(unsigned int value);
    virtual ~S();
};

S::S(unsigned int value) : field18(value),field1c(true),field20(-1)
{
    field0c=0;
    field24=0;
}
