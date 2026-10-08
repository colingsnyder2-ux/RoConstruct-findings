// from server: 73% by colin
// roc 2007-08 005acaf0  unit: RBX::World  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005acaf0
//
// 005acaf0  80b93401000000       cmp byte ptr [ecx + 0x134], 0
// 005acaf7  7408                 je 0x5acb01
// 005acaf9  81c138010000         add ecx, 0x138
// 005acaff  eb06                 jmp 0x5acb07
// 005acb01  81c144010000         add ecx, 0x144
// 005acb07  8b442404             mov eax, dword ptr [esp + 4]
// 005acb0b  d901                 fld dword ptr [ecx]
// 005acb0d  d918                 fstp dword ptr [eax]
// 005acb0f  d94104               fld dword ptr [ecx + 4]
// 005acb12  d95804               fstp dword ptr [eax + 4]
// 005acb15  d94108               fld dword ptr [ecx + 8]
// 005acb18  d95808               fstp dword ptr [eax + 8]
// 005acb1b  c20400               ret 4

struct World {
    char pad[0x134];
    bool flag;
    char pad2[0x3];
    float vecA[3];
    float vecB[3];
    void getVec(float* out);
};

void World::getVec(float* out) {
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
