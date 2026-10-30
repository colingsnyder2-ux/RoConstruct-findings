// roc 2010-06 00547970  unit: RBX::RbxG3D::Material  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00547970
//
// 00547970  8bc1                 mov eax, ecx
// 00547972  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00547976  d901                 fld dword ptr [ecx]
// 00547978  d918                 fstp dword ptr [eax]
// 0054797a  d94104               fld dword ptr [ecx + 4]
// 0054797d  d95804               fstp dword ptr [eax + 4]
// 00547980  d94108               fld dword ptr [ecx + 8]
// 00547983  d95808               fstp dword ptr [eax + 8]
// 00547986  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00547989  89500c               mov dword ptr [eax + 0xc], edx
// 0054798c  d94110               fld dword ptr [ecx + 0x10]
// 0054798f  d95810               fstp dword ptr [eax + 0x10]
// 00547992  d94114               fld dword ptr [ecx + 0x14]
// 00547995  d95814               fstp dword ptr [eax + 0x14]
// 00547998  d94118               fld dword ptr [ecx + 0x18]
// 0054799b  d95818               fstp dword ptr [eax + 0x18]
// 0054799e  d9411c               fld dword ptr [ecx + 0x1c]
// 005479a1  d9581c               fstp dword ptr [eax + 0x1c]
// 005479a4  d94120               fld dword ptr [ecx + 0x20]
// 005479a7  d95820               fstp dword ptr [eax + 0x20]
// 005479aa  d94124               fld dword ptr [ecx + 0x24]
// 005479ad  d95824               fstp dword ptr [eax + 0x24]
// 005479b0  d94128               fld dword ptr [ecx + 0x28]
// 005479b3  d95828               fstp dword ptr [eax + 0x28]
// 005479b6  d9412c               fld dword ptr [ecx + 0x2c]
// 005479b9  d9582c               fstp dword ptr [eax + 0x2c]
// 005479bc  d94130               fld dword ptr [ecx + 0x30]
// 005479bf  d95830               fstp dword ptr [eax + 0x30]
// 005479c2  8b5134               mov edx, dword ptr [ecx + 0x34]
// 005479c5  895034               mov dword ptr [eax + 0x34], edx
// 005479c8  8b5138               mov edx, dword ptr [ecx + 0x38]
// 005479cb  895038               mov dword ptr [eax + 0x38], edx
// 005479ce  d9413c               fld dword ptr [ecx + 0x3c]
// 005479d1  d9583c               fstp dword ptr [eax + 0x3c]
// 005479d4  d94140               fld dword ptr [ecx + 0x40]
// 005479d7  d95840               fstp dword ptr [eax + 0x40]
// 005479da  d94144               fld dword ptr [ecx + 0x44]
// 005479dd  d95844               fstp dword ptr [eax + 0x44]
// 005479e0  c20400               ret 4
// copied from an identical function in another client (function ?copyFrom@RBX_BeveledBlockBuilder@ns_ROCX000008@@QAEPAU12@PAU12@@Z)

namespace ns_ROCX000008 {
// from server: 100% by atomic.potato
struct RBX_BeveledBlockBuilder {
    char pad0[0x48];
    RBX_BeveledBlockBuilder* copyFrom(RBX_BeveledBlockBuilder* other);
};

RBX_BeveledBlockBuilder* RBX_BeveledBlockBuilder::copyFrom(RBX_BeveledBlockBuilder* other) {
    *(float*)((char*)this + 0x00) = *(float*)((char*)other + 0x00);
    *(float*)((char*)this + 0x04) = *(float*)((char*)other + 0x04);
    *(float*)((char*)this + 0x08) = *(float*)((char*)other + 0x08);
    *(int*)((char*)this + 0x0c) = *(int*)((char*)other + 0x0c);
    *(float*)((char*)this + 0x10) = *(float*)((char*)other + 0x10);
    *(float*)((char*)this + 0x14) = *(float*)((char*)other + 0x14);
    *(float*)((char*)this + 0x18) = *(float*)((char*)other + 0x18);
    *(float*)((char*)this + 0x1c) = *(float*)((char*)other + 0x1c);
    *(float*)((char*)this + 0x20) = *(float*)((char*)other + 0x20);
    *(float*)((char*)this + 0x24) = *(float*)((char*)other + 0x24);
    *(float*)((char*)this + 0x28) = *(float*)((char*)other + 0x28);
    *(float*)((char*)this + 0x2c) = *(float*)((char*)other + 0x2c);
    *(float*)((char*)this + 0x30) = *(float*)((char*)other + 0x30);
    *(int*)((char*)this + 0x34) = *(int*)((char*)other + 0x34);
    *(int*)((char*)this + 0x38) = *(int*)((char*)other + 0x38);
    *(float*)((char*)this + 0x3c) = *(float*)((char*)other + 0x3c);
    *(float*)((char*)this + 0x40) = *(float*)((char*)other + 0x40);
    *(float*)((char*)this + 0x44) = *(float*)((char*)other + 0x44);
    return this;
}
}