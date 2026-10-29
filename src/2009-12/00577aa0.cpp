// roc 2009-12 00577aa0  unit: RBX::ViewRbxGfx  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00577aa0
//
// 00577aa0  8bc1                 mov eax, ecx
// 00577aa2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00577aa6  d901                 fld dword ptr [ecx]
// 00577aa8  d918                 fstp dword ptr [eax]
// 00577aaa  d94104               fld dword ptr [ecx + 4]
// 00577aad  d95804               fstp dword ptr [eax + 4]
// 00577ab0  d94108               fld dword ptr [ecx + 8]
// 00577ab3  d95808               fstp dword ptr [eax + 8]
// 00577ab6  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00577ab9  89500c               mov dword ptr [eax + 0xc], edx
// 00577abc  d94110               fld dword ptr [ecx + 0x10]
// 00577abf  d95810               fstp dword ptr [eax + 0x10]
// 00577ac2  d94114               fld dword ptr [ecx + 0x14]
// 00577ac5  d95814               fstp dword ptr [eax + 0x14]
// 00577ac8  d94118               fld dword ptr [ecx + 0x18]
// 00577acb  d95818               fstp dword ptr [eax + 0x18]
// 00577ace  d9411c               fld dword ptr [ecx + 0x1c]
// 00577ad1  d9581c               fstp dword ptr [eax + 0x1c]
// 00577ad4  d94120               fld dword ptr [ecx + 0x20]
// 00577ad7  d95820               fstp dword ptr [eax + 0x20]
// 00577ada  d94124               fld dword ptr [ecx + 0x24]
// 00577add  d95824               fstp dword ptr [eax + 0x24]
// 00577ae0  d94128               fld dword ptr [ecx + 0x28]
// 00577ae3  d95828               fstp dword ptr [eax + 0x28]
// 00577ae6  d9412c               fld dword ptr [ecx + 0x2c]
// 00577ae9  d9582c               fstp dword ptr [eax + 0x2c]
// 00577aec  d94130               fld dword ptr [ecx + 0x30]
// 00577aef  d95830               fstp dword ptr [eax + 0x30]
// 00577af2  8b5134               mov edx, dword ptr [ecx + 0x34]
// 00577af5  895034               mov dword ptr [eax + 0x34], edx
// 00577af8  8b5138               mov edx, dword ptr [ecx + 0x38]
// 00577afb  895038               mov dword ptr [eax + 0x38], edx
// 00577afe  d9413c               fld dword ptr [ecx + 0x3c]
// 00577b01  d9583c               fstp dword ptr [eax + 0x3c]
// 00577b04  d94140               fld dword ptr [ecx + 0x40]
// 00577b07  d95840               fstp dword ptr [eax + 0x40]
// 00577b0a  d94144               fld dword ptr [ecx + 0x44]
// 00577b0d  d95844               fstp dword ptr [eax + 0x44]
// 00577b10  c20400               ret 4
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
