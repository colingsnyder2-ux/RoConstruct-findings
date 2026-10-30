// roc 2011-06 00988f90  unit: RBX::VerticalCylinderBuilder  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00988f90
//
// 00988f90  8bc1                 mov eax, ecx
// 00988f92  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00988f96  d901                 fld dword ptr [ecx]
// 00988f98  d918                 fstp dword ptr [eax]
// 00988f9a  d94104               fld dword ptr [ecx + 4]
// 00988f9d  d95804               fstp dword ptr [eax + 4]
// 00988fa0  d94108               fld dword ptr [ecx + 8]
// 00988fa3  d95808               fstp dword ptr [eax + 8]
// 00988fa6  d9410c               fld dword ptr [ecx + 0xc]
// 00988fa9  d9580c               fstp dword ptr [eax + 0xc]
// 00988fac  d94110               fld dword ptr [ecx + 0x10]
// 00988faf  d95810               fstp dword ptr [eax + 0x10]
// 00988fb2  d94114               fld dword ptr [ecx + 0x14]
// 00988fb5  d95814               fstp dword ptr [eax + 0x14]
// 00988fb8  d94118               fld dword ptr [ecx + 0x18]
// 00988fbb  d95818               fstp dword ptr [eax + 0x18]
// 00988fbe  d9411c               fld dword ptr [ecx + 0x1c]
// 00988fc1  d9581c               fstp dword ptr [eax + 0x1c]
// 00988fc4  d94120               fld dword ptr [ecx + 0x20]
// 00988fc7  d95820               fstp dword ptr [eax + 0x20]
// 00988fca  d94124               fld dword ptr [ecx + 0x24]
// 00988fcd  d95824               fstp dword ptr [eax + 0x24]
// 00988fd0  d94128               fld dword ptr [ecx + 0x28]
// 00988fd3  d95828               fstp dword ptr [eax + 0x28]
// 00988fd6  d9412c               fld dword ptr [ecx + 0x2c]
// 00988fd9  d9582c               fstp dword ptr [eax + 0x2c]
// 00988fdc  d94130               fld dword ptr [ecx + 0x30]
// 00988fdf  d95830               fstp dword ptr [eax + 0x30]
// 00988fe2  d94134               fld dword ptr [ecx + 0x34]
// 00988fe5  d95834               fstp dword ptr [eax + 0x34]
// 00988fe8  d94138               fld dword ptr [ecx + 0x38]
// 00988feb  d95838               fstp dword ptr [eax + 0x38]
// 00988fee  d9413c               fld dword ptr [ecx + 0x3c]
// 00988ff1  d9583c               fstp dword ptr [eax + 0x3c]
// 00988ff4  d94140               fld dword ptr [ecx + 0x40]
// 00988ff7  d95840               fstp dword ptr [eax + 0x40]
// 00988ffa  c20400               ret 4
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