// from server: 87% by colin
// roc 2007-08 005aca40  unit: RBX::World  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005aca40
//
// 005aca40  8b442404             mov eax, dword ptr [esp + 4]
// 005aca44  d9810c010000         fld dword ptr [ecx + 0x10c]
// 005aca4a  d918                 fstp dword ptr [eax]
// 005aca4c  d98110010000         fld dword ptr [ecx + 0x110]
// 005aca52  d95804               fstp dword ptr [eax + 4]
// 005aca55  d98114010000         fld dword ptr [ecx + 0x114]
// 005aca5b  d95808               fstp dword ptr [eax + 8]
// 005aca5e  c20400               ret 4

struct RBX_World {
    char pad[0x10c];
    float field_10c;
    float field_110;
    float field_114;
    void getExtents(float* out);
};

void RBX_World::getExtents(float* out)
{
    out[0] = field_10c;
    out[1] = field_110;
    out[2] = field_114;
}
