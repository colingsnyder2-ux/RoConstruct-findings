// roc 2010-06 004c1230  unit: RBX::Network::Players::W4ChatOption::?$holder  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004c1230
//
// 004c1230  8b8954010000         mov ecx, dword ptr [ecx + 0x154]
// 004c1236  8b4110               mov eax, dword ptr [ecx + 0x10]
// 004c1239  2b410c               sub eax, dword ptr [ecx + 0xc]
// 004c123c  c1f803               sar eax, 3
// 004c123f  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX00001b@@QAEHXZ)

namespace ns_ROCX00001b {
struct S {
    int f();
};

int S::f()
{
    struct T {
        char pad[12];
        int unused;
        int end;
    };
    T *p = *(T **)((char *)this + 0x154);
    return (p->end - *(int *)((char *)p + 0xc)) >> 3;
}
}
