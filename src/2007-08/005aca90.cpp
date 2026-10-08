// from server: 87% by colin
// roc 2007-08 005aca90  unit: RBX::World  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005aca90
//
// 005aca90  8b442404             mov eax, dword ptr [esp + 4]
// 005aca94  d981fc010000         fld dword ptr [ecx + 0x1fc]
// 005aca9a  d918                 fstp dword ptr [eax]
// 005aca9c  d98100020000         fld dword ptr [ecx + 0x200]
// 005acaa2  d95804               fstp dword ptr [eax + 4]
// 005acaa5  d98104020000         fld dword ptr [ecx + 0x204]
// 005acaab  d95808               fstp dword ptr [eax + 8]
// 005acaae  c20400               ret 4

struct RBX_World {
    char pad[0x1fc];
    float field_1fc;
    float field_200;
    float field_204;
    void getVector(float* out);
};

void RBX_World::getVector(float* out)
{
    out[0] = field_1fc;
    out[1] = field_200;
    out[2] = field_204;
}
