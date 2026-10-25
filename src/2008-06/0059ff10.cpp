// from server: 100% by king_originala
// roc 2008-06 0059ff10  unit: RBX::SpecialShape  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059ff10
//
// 0059ff10  8b542404             mov edx, dword ptr [esp + 4]
// 0059ff14  d902                 fld dword ptr [edx]
// 0059ff16  d89934010000         fcomp dword ptr [ecx + 0x134]
// 0059ff1c  dfe0                 fnstsw ax
// 0059ff1e  f6c444               test ah, 0x44
// 0059ff21  7a20                 jp 0x59ff43
// 0059ff23  d94204               fld dword ptr [edx + 4]
// 0059ff26  d89938010000         fcomp dword ptr [ecx + 0x138]
// 0059ff2c  dfe0                 fnstsw ax
// 0059ff2e  f6c444               test ah, 0x44
// 0059ff31  7a10                 jp 0x59ff43
// 0059ff33  d94208               fld dword ptr [edx + 8]
// 0059ff36  d8993c010000         fcomp dword ptr [ecx + 0x13c]
// 0059ff3c  dfe0                 fnstsw ax
// 0059ff3e  f6c444               test ah, 0x44
// 0059ff41  7b27                 jnp 0x59ff6a
// 0059ff43  d902                 fld dword ptr [edx]
// 0059ff45  c74424043c689700     mov dword ptr [esp + 4], 0x97683c
// 0059ff4d  d99934010000         fstp dword ptr [ecx + 0x134]
// 0059ff53  d94204               fld dword ptr [edx + 4]
// 0059ff56  d99938010000         fstp dword ptr [ecx + 0x138]
// 0059ff5c  d94208               fld dword ptr [edx + 8]
// 0059ff5f  d9993c010000         fstp dword ptr [ecx + 0x13c]
// 0059ff65  e996dbe6ff           jmp 0x40db00
// 0059ff6a  c20400               ret 4

#pragma float_control(precise, off)

extern char property;

struct Vector3 {
    float x, y, z;
};

struct S {
    char pad[0x134];
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
