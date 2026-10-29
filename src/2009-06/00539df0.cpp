// roc 2009-06 00539df0  unit: RBX::VerticalCylinderBuilder  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00539df0
//
// 00539df0  8bc1                 mov eax, ecx
// 00539df2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00539df6  d901                 fld dword ptr [ecx]
// 00539df8  d918                 fstp dword ptr [eax]
// 00539dfa  d94104               fld dword ptr [ecx + 4]
// 00539dfd  d95804               fstp dword ptr [eax + 4]
// 00539e00  d94108               fld dword ptr [ecx + 8]
// 00539e03  d95808               fstp dword ptr [eax + 8]
// 00539e06  d9410c               fld dword ptr [ecx + 0xc]
// 00539e09  d9580c               fstp dword ptr [eax + 0xc]
// 00539e0c  d94110               fld dword ptr [ecx + 0x10]
// 00539e0f  d95810               fstp dword ptr [eax + 0x10]
// 00539e12  d94114               fld dword ptr [ecx + 0x14]
// 00539e15  d95814               fstp dword ptr [eax + 0x14]
// 00539e18  d94118               fld dword ptr [ecx + 0x18]
// 00539e1b  d95818               fstp dword ptr [eax + 0x18]
// 00539e1e  d9411c               fld dword ptr [ecx + 0x1c]
// 00539e21  d9581c               fstp dword ptr [eax + 0x1c]
// 00539e24  d94120               fld dword ptr [ecx + 0x20]
// 00539e27  d95820               fstp dword ptr [eax + 0x20]
// 00539e2a  d94124               fld dword ptr [ecx + 0x24]
// 00539e2d  d95824               fstp dword ptr [eax + 0x24]
// 00539e30  d94128               fld dword ptr [ecx + 0x28]
// 00539e33  d95828               fstp dword ptr [eax + 0x28]
// 00539e36  d9412c               fld dword ptr [ecx + 0x2c]
// 00539e39  d9582c               fstp dword ptr [eax + 0x2c]
// 00539e3c  d94130               fld dword ptr [ecx + 0x30]
// 00539e3f  d95830               fstp dword ptr [eax + 0x30]
// 00539e42  d94134               fld dword ptr [ecx + 0x34]
// 00539e45  d95834               fstp dword ptr [eax + 0x34]
// 00539e48  d94138               fld dword ptr [ecx + 0x38]
// 00539e4b  d95838               fstp dword ptr [eax + 0x38]
// 00539e4e  d9413c               fld dword ptr [ecx + 0x3c]
// 00539e51  d9583c               fstp dword ptr [eax + 0x3c]
// 00539e54  d94140               fld dword ptr [ecx + 0x40]
// 00539e57  d95840               fstp dword ptr [eax + 0x40]
// 00539e5a  c20400               ret 4
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
