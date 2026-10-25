// from server: 100% by colin
// roc 2008-06 0059ff70  unit: RBX::SpecialShape  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059ff70
//
// 0059ff70  8b542404             mov edx, dword ptr [esp + 4]
// 0059ff74  d902                 fld dword ptr [edx]
// 0059ff76  d89980010000         fcomp dword ptr [ecx + 0x180]
// 0059ff7c  dfe0                 fnstsw ax
// 0059ff7e  f6c444               test ah, 0x44
// 0059ff81  7a20                 jp 0x59ffa3
// 0059ff83  d94204               fld dword ptr [edx + 4]
// 0059ff86  d89984010000         fcomp dword ptr [ecx + 0x184]
// 0059ff8c  dfe0                 fnstsw ax
// 0059ff8e  f6c444               test ah, 0x44
// 0059ff91  7a10                 jp 0x59ffa3
// 0059ff93  d94208               fld dword ptr [edx + 8]
// 0059ff96  d89988010000         fcomp dword ptr [ecx + 0x188]
// 0059ff9c  dfe0                 fnstsw ax
// 0059ff9e  f6c444               test ah, 0x44
// 0059ffa1  7b27                 jnp 0x59ffca
// 0059ffa3  d902                 fld dword ptr [edx]
// 0059ffa5  c74424047c689700     mov dword ptr [esp + 4], 0x97687c
// 0059ffad  d99980010000         fstp dword ptr [ecx + 0x180]
// 0059ffb3  d94204               fld dword ptr [edx + 4]
// 0059ffb6  d99984010000         fstp dword ptr [ecx + 0x184]
// 0059ffbc  d94208               fld dword ptr [edx + 8]
// 0059ffbf  d99988010000         fstp dword ptr [ecx + 0x188]
// 0059ffc5  e936dbe6ff           jmp 0x40db00
// 0059ffca  c20400               ret 4

#pragma float_control(precise, off)

extern char property;

struct Vector3 {
    float x, y, z;
};

struct S {
    char pad[0x180];
    Vector3 value;
    void setValue(const Vector3& v);
    void notify(const char* p);
};

void S::setValue(const Vector3& v)
{
    if (value.x != v.x || value.y != v.y || value.z != v.z) {
        value.x = v.x;
        value.y = v.y;
        value.z = v.z;
        notify(&property);
    }
}
