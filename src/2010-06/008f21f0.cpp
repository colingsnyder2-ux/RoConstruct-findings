// roc 2010-06 008f21f0  unit: RBX::Reflection::EventSource  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008f21f0
//
// 008f21f0  8bc1                 mov eax, ecx
// 008f21f2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008f21f6  d901                 fld dword ptr [ecx]
// 008f21f8  d918                 fstp dword ptr [eax]
// 008f21fa  d94104               fld dword ptr [ecx + 4]
// 008f21fd  d95804               fstp dword ptr [eax + 4]
// 008f2200  d94108               fld dword ptr [ecx + 8]
// 008f2203  d95808               fstp dword ptr [eax + 8]
// 008f2206  d9410c               fld dword ptr [ecx + 0xc]
// 008f2209  d9580c               fstp dword ptr [eax + 0xc]
// 008f220c  d94110               fld dword ptr [ecx + 0x10]
// 008f220f  d95810               fstp dword ptr [eax + 0x10]
// 008f2212  d94114               fld dword ptr [ecx + 0x14]
// 008f2215  d95814               fstp dword ptr [eax + 0x14]
// 008f2218  d94118               fld dword ptr [ecx + 0x18]
// 008f221b  d95818               fstp dword ptr [eax + 0x18]
// 008f221e  d9411c               fld dword ptr [ecx + 0x1c]
// 008f2221  d9581c               fstp dword ptr [eax + 0x1c]
// 008f2224  d94120               fld dword ptr [ecx + 0x20]
// 008f2227  d95820               fstp dword ptr [eax + 0x20]
// 008f222a  d94124               fld dword ptr [ecx + 0x24]
// 008f222d  d95824               fstp dword ptr [eax + 0x24]
// 008f2230  d94128               fld dword ptr [ecx + 0x28]
// 008f2233  d95828               fstp dword ptr [eax + 0x28]
// 008f2236  d9412c               fld dword ptr [ecx + 0x2c]
// 008f2239  d9582c               fstp dword ptr [eax + 0x2c]
// 008f223c  d94130               fld dword ptr [ecx + 0x30]
// 008f223f  d95830               fstp dword ptr [eax + 0x30]
// 008f2242  d94134               fld dword ptr [ecx + 0x34]
// 008f2245  d95834               fstp dword ptr [eax + 0x34]
// 008f2248  d94138               fld dword ptr [ecx + 0x38]
// 008f224b  d95838               fstp dword ptr [eax + 0x38]
// 008f224e  d9413c               fld dword ptr [ecx + 0x3c]
// 008f2251  d9583c               fstp dword ptr [eax + 0x3c]
// 008f2254  d94140               fld dword ptr [ecx + 0x40]
// 008f2257  d95840               fstp dword ptr [eax + 0x40]
// 008f225a  c20400               ret 4
// copied from an identical function in another client (function ?copy@RbxMeshPartAdapter@ns_ROCX000008@@QAEAAU12@PBM@Z)

namespace ns_ROCX000008 {
// from server: 100% by atomic.potato
struct RbxMeshPartAdapter
{
    float data[17];
    RbxMeshPartAdapter& copy(const float* src);
};

RbxMeshPartAdapter& RbxMeshPartAdapter::copy(const float* src)
{
    data[0] = src[0];
    data[1] = src[1];
    data[2] = src[2];
    data[3] = src[3];
    data[4] = src[4];
    data[5] = src[5];
    data[6] = src[6];
    data[7] = src[7];
    data[8] = src[8];
    data[9] = src[9];
    data[10] = src[10];
    data[11] = src[11];
    data[12] = src[12];
    data[13] = src[13];
    data[14] = src[14];
    data[15] = src[15];
    data[16] = src[16];
    return *this;
}
}