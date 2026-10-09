// roc 2007-03 004fe7c0  unit: seg_004f0000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fe7c0
//
// 004fe7c0  8b442404             mov eax, dword ptr [esp + 4]
// 004fe7c4  56                   push esi
// 004fe7c5  50                   push eax
// 004fe7c6  8bf1                 mov esi, ecx
// 004fe7c8  e8b3ffffff           call 0x4fe780
// 004fe7cd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004fe7d1  51                   push ecx
// 004fe7d2  8bce                 mov ecx, esi
// 004fe7d4  e8a7ffffff           call 0x4fe780
// 004fe7d9  8b542410             mov edx, dword ptr [esp + 0x10]
// 004fe7dd  52                   push edx
// 004fe7de  8bce                 mov ecx, esi
// 004fe7e0  e89bffffff           call 0x4fe780
// 004fe7e5  8b442414             mov eax, dword ptr [esp + 0x14]
// 004fe7e9  50                   push eax
// 004fe7ea  8bce                 mov ecx, esi
// 004fe7ec  e88fffffff           call 0x4fe780
// 004fe7f1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004fe7f5  51                   push ecx
// 004fe7f6  8bce                 mov ecx, esi
// 004fe7f8  e883ffffff           call 0x4fe780
// 004fe7fd  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004fe801  52                   push edx
// 004fe802  8bce                 mov ecx, esi
// 004fe804  e877ffffff           call 0x4fe780
// 004fe809  5e                   pop esi
// 004fe80a  c21800               ret 0x18
// copied from an identical function in another client (function ?set@GCamera@ns_ROCX000012@@QAEXPBM00000@Z)

namespace ns_ROCX000012 {
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
}
