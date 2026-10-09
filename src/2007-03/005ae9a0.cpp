// roc 2007-03 005ae9a0  unit: seg_005a0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ae9a0
//
// 005ae9a0  8b4110               mov eax, dword ptr [ecx + 0x10]
// 005ae9a3  85c0                 test eax, eax
// 005ae9a5  7503                 jne 0x5ae9aa
// 005ae9a7  8b4108               mov eax, dword ptr [ecx + 8]
// 005ae9aa  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000016@@QAEHXZ)

namespace ns_ROCX000016 {
struct S {
    int pad0;
    int pad4;
    int field8;
    int padc;
    int field10;
    int f();
};

int S::f() {
    int r = field10;
    if (r == 0) r = field8;
    return r;
}
}
