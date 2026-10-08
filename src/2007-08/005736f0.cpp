// from server: 70% by colin
// roc 2007-08 005736f0  unit: RBX::VTexture::?$FactoryProduct  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005736f0
//
// 005736f0  8b542404             mov edx, dword ptr [esp + 4]
// 005736f4  d902                 fld dword ptr [edx]
// 005736f6  d819                 fcomp dword ptr [ecx]
// 005736f8  dfe0                 fnstsw ax
// 005736fa  f6c444               test ah, 0x44
// 005736fd  7a1f                 jp 0x57371e
// 005736ff  d94204               fld dword ptr [edx + 4]
// 00573702  d85904               fcomp dword ptr [ecx + 4]
// 00573705  dfe0                 fnstsw ax
// 00573707  f6c444               test ah, 0x44
// 0057370a  7a12                 jp 0x57371e
// 0057370c  d94208               fld dword ptr [edx + 8]
// 0057370f  d85908               fcomp dword ptr [ecx + 8]
// 00573712  dfe0                 fnstsw ax
// 00573714  f6c444               test ah, 0x44
// 00573717  7a05                 jp 0x57371e
// 00573719  33c0                 xor eax, eax
// 0057371b  c20400               ret 4
// 0057371e  b801000000           mov eax, 1
// 00573723  c20400               ret 4

struct VTexture {
    float x;
    float y;
    float z;
    bool equals(const VTexture* other) const;
};

bool VTexture::equals(const VTexture* other) const {
    if (x == other->x && y == other->y && z == other->z) {
        return false;
    }
    return true;
}
