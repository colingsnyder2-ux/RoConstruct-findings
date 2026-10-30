// roc 2011-06 0097c060  unit: RBX::BeveledBlockBuilder  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0097c060
//
// 0097c060  8bc1                 mov eax, ecx
// 0097c062  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0097c066  d901                 fld dword ptr [ecx]
// 0097c068  d918                 fstp dword ptr [eax]
// 0097c06a  d94104               fld dword ptr [ecx + 4]
// 0097c06d  d95804               fstp dword ptr [eax + 4]
// 0097c070  d94108               fld dword ptr [ecx + 8]
// 0097c073  d95808               fstp dword ptr [eax + 8]
// 0097c076  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0097c079  89500c               mov dword ptr [eax + 0xc], edx
// 0097c07c  d94110               fld dword ptr [ecx + 0x10]
// 0097c07f  d95810               fstp dword ptr [eax + 0x10]
// 0097c082  d94114               fld dword ptr [ecx + 0x14]
// 0097c085  d95814               fstp dword ptr [eax + 0x14]
// 0097c088  d94118               fld dword ptr [ecx + 0x18]
// 0097c08b  d95818               fstp dword ptr [eax + 0x18]
// 0097c08e  d9411c               fld dword ptr [ecx + 0x1c]
// 0097c091  d9581c               fstp dword ptr [eax + 0x1c]
// 0097c094  d94120               fld dword ptr [ecx + 0x20]
// 0097c097  d95820               fstp dword ptr [eax + 0x20]
// 0097c09a  d94124               fld dword ptr [ecx + 0x24]
// 0097c09d  d95824               fstp dword ptr [eax + 0x24]
// 0097c0a0  d94128               fld dword ptr [ecx + 0x28]
// 0097c0a3  d95828               fstp dword ptr [eax + 0x28]
// 0097c0a6  d9412c               fld dword ptr [ecx + 0x2c]
// 0097c0a9  d9582c               fstp dword ptr [eax + 0x2c]
// 0097c0ac  d94130               fld dword ptr [ecx + 0x30]
// 0097c0af  d95830               fstp dword ptr [eax + 0x30]
// 0097c0b2  8b5134               mov edx, dword ptr [ecx + 0x34]
// 0097c0b5  895034               mov dword ptr [eax + 0x34], edx
// 0097c0b8  8b5138               mov edx, dword ptr [ecx + 0x38]
// 0097c0bb  895038               mov dword ptr [eax + 0x38], edx
// 0097c0be  d9413c               fld dword ptr [ecx + 0x3c]
// 0097c0c1  d9583c               fstp dword ptr [eax + 0x3c]
// 0097c0c4  d94140               fld dword ptr [ecx + 0x40]
// 0097c0c7  d95840               fstp dword ptr [eax + 0x40]
// 0097c0ca  d94144               fld dword ptr [ecx + 0x44]
// 0097c0cd  d95844               fstp dword ptr [eax + 0x44]
// 0097c0d0  c20400               ret 4
// copied from an identical function in another client (function ?copyFrom@RBX_BeveledBlockBuilder@@QAEPAU1@PAU1@@Z)

// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
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