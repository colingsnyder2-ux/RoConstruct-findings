// from server: 82% by colin
// roc 2007-08 004426d0  unit: CPropGrid  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004426d0
//
// 004426d0  8b4118               mov eax, dword ptr [ecx + 0x18]
// 004426d3  0faf442404           imul eax, dword ptr [esp + 4]
// 004426d8  99                   cdq 
// 004426d9  83e207               and edx, 7
// 004426dc  03c2                 add eax, edx
// 004426de  8b5114               mov edx, dword ptr [ecx + 0x14]
// 004426e1  0faf542408           imul edx, dword ptr [esp + 8]
// 004426e6  c1f803               sar eax, 3
// 004426e9  03c2                 add eax, edx
// 004426eb  034108               add eax, dword ptr [ecx + 8]
// 004426ee  c20800               ret 8

struct CPropGrid {
    int f(int a, int b);
    char pad[8];
    int field8;
    char pad2[8];
    int field14;
    int field18;
};

int CPropGrid::f(int a, int b) {
    int r = field18 * a;
    r = (r + (r >> 31 & 7)) >> 3;
    r += field14 * b;
    r += field8;
    return r;
}
