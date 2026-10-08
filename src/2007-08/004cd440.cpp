// from server: 87% by colin
// roc 2007-08 004cd440  unit: G3D::_WeakPtr  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cd440
//
// 004cd440  8b442404             mov eax, dword ptr [esp + 4]
// 004cd444  d981ec010000         fld dword ptr [ecx + 0x1ec]
// 004cd44a  d918                 fstp dword ptr [eax]
// 004cd44c  d981f0010000         fld dword ptr [ecx + 0x1f0]
// 004cd452  d95804               fstp dword ptr [eax + 4]
// 004cd455  d981f4010000         fld dword ptr [ecx + 0x1f4]
// 004cd45b  d95808               fstp dword ptr [eax + 8]
// 004cd45e  c20400               ret 4

struct G3D_WeakPtr {
    char pad[0x1ec];
    float x;
    float y;
    float z;
    void get(float* out);
};

void G3D_WeakPtr::get(float* out) {
    out[0] = x;
    out[1] = y;
    out[2] = z;
}
