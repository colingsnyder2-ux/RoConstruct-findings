// from server: 100% by colin
// roc 2008-06 00632720  unit: RBX::BodyForce  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00632720
//
// 00632720  ba01000000           mov edx, 1
// 00632725  841550f09600         test byte ptr [0x96f050], dl
// 0063272b  751a                 jne 0x632747
// 0063272d  d9ee                 fldz 
// 0063272f  091550f09600         or dword ptr [0x96f050], edx
// 00632735  d91544f09600         fst dword ptr [0x96f044]
// 0063273b  d91548f09600         fst dword ptr [0x96f048]
// 00632741  d91d4cf09600         fstp dword ptr [0x96f04c]
// 00632747  d90544f09600         fld dword ptr [0x96f044]
// 0063274d  d89948010000         fcomp dword ptr [ecx + 0x148]
// 00632753  dfe0                 fnstsw ax
// 00632755  f6c444               test ah, 0x44
// 00632758  7a29                 jp 0x632783
// 0063275a  d90548f09600         fld dword ptr [0x96f048]
// 00632760  d8994c010000         fcomp dword ptr [ecx + 0x14c]
// 00632766  dfe0                 fnstsw ax
// 00632768  f6c444               test ah, 0x44
// 0063276b  7a16                 jp 0x632783
// 0063276d  d9054cf09600         fld dword ptr [0x96f04c]
// 00632773  d89950010000         fcomp dword ptr [ecx + 0x150]
// 00632779  dfe0                 fnstsw ax
// 0063277b  f6c444               test ah, 0x44
// 0063277e  7a03                 jp 0x632783
// 00632780  33c0                 xor eax, eax
// 00632782  c3                   ret 
// 00632783  8bc2                 mov eax, edx
// 00632785  c3                   ret 

#pragma float_control(precise, off)

struct Vector3 {
    static float x, y, z;
    Vector3();
};

float Vector3::x;
float Vector3::y;
float Vector3::z;

inline Vector3::Vector3()
{
    x = 0.0f;
    y = 0.0f;
    z = 0.0f;
}

struct BodyVelocity {
    char padding[0x148];
    float x, y, z;
    bool isNonzero();
};

bool BodyVelocity::isNonzero()
{
    static Vector3 zero;
    return x != zero.x || y != zero.y || z != zero.z;
}
