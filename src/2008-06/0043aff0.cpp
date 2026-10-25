// from server: 100% by king_originala
// roc 2008-06 0043aff0  unit: G3D::VVector3::?$XItem  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043aff0
//
// 0043aff0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0043aff4  d901                 fld dword ptr [ecx]
// 0043aff6  8b542404             mov edx, dword ptr [esp + 4]
// 0043affa  d81a                 fcomp dword ptr [edx]
// 0043affc  dfe0                 fnstsw ax
// 0043affe  f6c444               test ah, 0x44
// 0043b001  7a22                 jp 0x43b025
// 0043b003  d94104               fld dword ptr [ecx + 4]
// 0043b006  d85a04               fcomp dword ptr [edx + 4]
// 0043b009  dfe0                 fnstsw ax
// 0043b00b  f6c444               test ah, 0x44
// 0043b00e  7a15                 jp 0x43b025
// 0043b010  d94108               fld dword ptr [ecx + 8]
// 0043b013  d85a08               fcomp dword ptr [edx + 8]
// 0043b016  dfe0                 fnstsw ax
// 0043b018  f6c444               test ah, 0x44
// 0043b01b  7a08                 jp 0x43b025
// 0043b01d  b801000000           mov eax, 1
// 0043b022  c20800               ret 8
// 0043b025  33c0                 xor eax, eax
// 0043b027  c20800               ret 8

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
