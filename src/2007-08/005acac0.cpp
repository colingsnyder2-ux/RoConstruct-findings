// from server: 73% by colin
// roc 2007-08 005acac0  unit: RBX::World  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005acac0
//
// 005acac0  80b93401000000       cmp byte ptr [ecx + 0x134], 0
// 005acac7  7408                 je 0x5acad1
// 005acac9  81c150010000         add ecx, 0x150
// 005acacf  eb06                 jmp 0x5acad7
// 005acad1  81c15c010000         add ecx, 0x15c
// 005acad7  8b442404             mov eax, dword ptr [esp + 4]
// 005acadb  d901                 fld dword ptr [ecx]
// 005acadd  d918                 fstp dword ptr [eax]
// 005acadf  d94104               fld dword ptr [ecx + 4]
// 005acae2  d95804               fstp dword ptr [eax + 4]
// 005acae5  d94108               fld dword ptr [ecx + 8]
// 005acae8  d95808               fstp dword ptr [eax + 8]
// 005acaeb  c20400               ret 4

struct RBX_World {
    char pad[0x134];
    bool flag;
    char pad2[0x1b];
    float vecA[3];
    float vecB[3];
    void getVec(float* out);
};

void RBX_World::getVec(float* out) {
    float* src;
    if (flag) {
        src = vecA;
    } else {
        src = vecB;
    }
    out[0] = src[0];
    out[1] = src[1];
    out[2] = src[2];
}
