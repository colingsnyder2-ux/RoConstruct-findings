// from server: 87% by colin
// roc 2007-08 005d1c00  unit: RBX::Tool  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d1c00
//
// 005d1c00  8b442404             mov eax, dword ptr [esp + 4]
// 005d1c04  d98198010000         fld dword ptr [ecx + 0x198]
// 005d1c0a  d918                 fstp dword ptr [eax]
// 005d1c0c  d9819c010000         fld dword ptr [ecx + 0x19c]
// 005d1c12  d95804               fstp dword ptr [eax + 4]
// 005d1c15  d981a0010000         fld dword ptr [ecx + 0x1a0]
// 005d1c1b  d95808               fstp dword ptr [eax + 8]
// 005d1c1e  c20400               ret 4

struct Tool {
    char pad[0x198];
    float field_198;
    float field_19c;
    float field_1a0;
    void getGrip(float* out);
};

void Tool::getGrip(float* out)
{
    out[0] = field_198;
    out[1] = field_19c;
    out[2] = field_1a0;
}
