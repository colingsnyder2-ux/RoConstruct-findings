// from server: 87% by colin
// roc 2007-08 004cd410  unit: G3D::_WeakPtr  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cd410
//
// 004cd410  8b442404             mov eax, dword ptr [esp + 4]
// 004cd414  d981e0010000         fld dword ptr [ecx + 0x1e0]
// 004cd41a  d918                 fstp dword ptr [eax]
// 004cd41c  d981e4010000         fld dword ptr [ecx + 0x1e4]
// 004cd422  d95804               fstp dword ptr [eax + 4]
// 004cd425  d981e8010000         fld dword ptr [ecx + 0x1e8]
// 004cd42b  d95808               fstp dword ptr [eax + 8]
// 004cd42e  c20400               ret 4

struct G3D_WeakPtr {
    char pad[0x1e0];
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
