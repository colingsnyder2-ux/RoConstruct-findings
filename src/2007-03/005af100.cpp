// roc 2007-03 005af100  unit: seg_005a0000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005af100
//
// 005af100  8b4110               mov eax, dword ptr [ecx + 0x10]
// 005af103  85c0                 test eax, eax
// 005af105  7503                 jne 0x5af10a
// 005af107  8b4108               mov eax, dword ptr [ecx + 8]
// 005af10a  50                   push eax
// 005af10b  e880ffffff           call 0x5af090
// 005af110  c3                   ret 
// copied from an identical function in another client (function ?method@Geometry@ns_ROCX000000@@QAEXXZ)

namespace ns_ROCX000000 {
struct Geometry {
    char pad[8];
    int field8;
    char pad2[4];
    int field10;
    void method();
};

void __stdcall helper(int);

void Geometry::method() {
    int v = field10;
    if (v == 0)
        v = field8;
    helper(v);
}
}
