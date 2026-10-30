// roc 2009-06 00435240  unit: G3D::VVector3::?$XItem  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00435240
//
// 00435240  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00435244  d901                 fld dword ptr [ecx]
// 00435246  8b542404             mov edx, dword ptr [esp + 4]
// 0043524a  d81a                 fcomp dword ptr [edx]
// 0043524c  dfe0                 fnstsw ax
// 0043524e  f6c444               test ah, 0x44
// 00435251  7a22                 jp 0x435275
// 00435253  d94104               fld dword ptr [ecx + 4]
// 00435256  d85a04               fcomp dword ptr [edx + 4]
// 00435259  dfe0                 fnstsw ax
// 0043525b  f6c444               test ah, 0x44
// 0043525e  7a15                 jp 0x435275
// 00435260  d94108               fld dword ptr [ecx + 8]
// 00435263  d85a08               fcomp dword ptr [edx + 8]
// 00435266  dfe0                 fnstsw ax
// 00435268  f6c444               test ah, 0x44
// 0043526b  7a08                 jp 0x435275
// 0043526d  b801000000           mov eax, 1
// 00435272  c20800               ret 8
// 00435275  33c0                 xor eax, eax
// 00435277  c20800               ret 8
// copied from an identical function in another client (function ?equals@@YGHPBUVVector3@@0@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct VVector3 {
    float x;
    float y;
    float z;
};

#pragma float_control(precise, off, push)
int __stdcall equals(const VVector3* b, const VVector3* a) {
    if (b->x == a->x && b->y == a->y && b->z == a->z) return 1;
    return 0;
}
#pragma float_control(pop)