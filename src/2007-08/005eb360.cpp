// from server: 87% by colin
// roc 2007-08 005eb360  unit: RBX::FlagStand  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005eb360
//
// 005eb360  8b442404             mov eax, dword ptr [esp + 4]
// 005eb364  d98118010000         fld dword ptr [ecx + 0x118]
// 005eb36a  d918                 fstp dword ptr [eax]
// 005eb36c  d9811c010000         fld dword ptr [ecx + 0x11c]
// 005eb372  d95804               fstp dword ptr [eax + 4]
// 005eb375  d98120010000         fld dword ptr [ecx + 0x120]
// 005eb37b  d95808               fstp dword ptr [eax + 8]
// 005eb37e  c20400               ret 4

struct FlagStand {
    char pad[0x118];
    float x;
    float y;
    float z;
    void getVector(float* out);
};

void FlagStand::getVector(float* out)
{
    out[0] = x;
    out[1] = y;
    out[2] = z;
}
