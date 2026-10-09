// from server: 100% by colin
// roc 2007-08 00509410  unit: G3D::GCamera  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00509410
//
// 00509410  8b442404             mov eax, dword ptr [esp + 4]
// 00509414  56                   push esi
// 00509415  50                   push eax
// 00509416  8bf1                 mov esi, ecx
// 00509418  e8b3ffffff           call 0x5093d0
// 0050941d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00509421  51                   push ecx
// 00509422  8bce                 mov ecx, esi
// 00509424  e8a7ffffff           call 0x5093d0
// 00509429  8b542410             mov edx, dword ptr [esp + 0x10]
// 0050942d  52                   push edx
// 0050942e  8bce                 mov ecx, esi
// 00509430  e89bffffff           call 0x5093d0
// 00509435  8b442414             mov eax, dword ptr [esp + 0x14]
// 00509439  50                   push eax
// 0050943a  8bce                 mov ecx, esi
// 0050943c  e88fffffff           call 0x5093d0
// 00509441  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00509445  51                   push ecx
// 00509446  8bce                 mov ecx, esi
// 00509448  e883ffffff           call 0x5093d0
// 0050944d  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00509451  52                   push edx
// 00509452  8bce                 mov ecx, esi
// 00509454  e877ffffff           call 0x5093d0
// 00509459  5e                   pop esi
// 0050945a  c21800               ret 0x18

struct GCamera {
    void setCoordinateFrame(const float*);
    void setFieldOfView(const float*);
    void setNearPlaneZ(const float*);
    void setFarPlaneZ(const float*);
    void setViewport(const float*);
    void setProjectionMatrix(const float*);
    void set(const float*, const float*, const float*, const float*, const float*, const float*);
};

void GCamera::set(const float* a, const float* b, const float* c, const float* d, const float* e, const float* f)
{
    setCoordinateFrame(a);
    setFieldOfView(b);
    setNearPlaneZ(c);
    setFarPlaneZ(d);
    setViewport(e);
    setProjectionMatrix(f);
}
