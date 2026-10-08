// from server: 87% by colin
// roc 2007-08 005eb330  unit: RBX::FlagStand  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005eb330
//
// 005eb330  8b442404             mov eax, dword ptr [esp + 4]
// 005eb334  d9811c010000         fld dword ptr [ecx + 0x11c]
// 005eb33a  d918                 fstp dword ptr [eax]
// 005eb33c  d98120010000         fld dword ptr [ecx + 0x120]
// 005eb342  d95804               fstp dword ptr [eax + 4]
// 005eb345  d98124010000         fld dword ptr [ecx + 0x124]
// 005eb34b  d95808               fstp dword ptr [eax + 8]
// 005eb34e  c20400               ret 4

struct FlagStand {
    char pad[0x11c];
    float x;
    float y;
    float z;
    void getVector(float* out);
};

void FlagStand::getVector(float* out) {
    out[0] = x;
    out[1] = y;
    out[2] = z;
}
