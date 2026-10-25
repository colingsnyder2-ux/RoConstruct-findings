// from server: 100% by king_originala
// roc 2008-06 00632370  unit: RBX::BodyVelocity  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00632370
//
// 00632370  ba01000000           mov edx, 1
// 00632375  841550f09600         test byte ptr [0x96f050], dl
// 0063237b  751a                 jne 0x632397
// 0063237d  d9ee                 fldz 
// 0063237f  091550f09600         or dword ptr [0x96f050], edx
// 00632385  d91544f09600         fst dword ptr [0x96f044]
// 0063238b  d91548f09600         fst dword ptr [0x96f048]
// 00632391  d91d4cf09600         fstp dword ptr [0x96f04c]
// 00632397  d90544f09600         fld dword ptr [0x96f044]
// 0063239d  d89958010000         fcomp dword ptr [ecx + 0x158]
// 006323a3  dfe0                 fnstsw ax
// 006323a5  f6c444               test ah, 0x44
// 006323a8  7a29                 jp 0x6323d3
// 006323aa  d90548f09600         fld dword ptr [0x96f048]
// 006323b0  d8995c010000         fcomp dword ptr [ecx + 0x15c]
// 006323b6  dfe0                 fnstsw ax
// 006323b8  f6c444               test ah, 0x44
// 006323bb  7a16                 jp 0x6323d3
// 006323bd  d9054cf09600         fld dword ptr [0x96f04c]
// 006323c3  d89960010000         fcomp dword ptr [ecx + 0x160]
// 006323c9  dfe0                 fnstsw ax
// 006323cb  f6c444               test ah, 0x44
// 006323ce  7a03                 jp 0x6323d3
// 006323d0  33c0                 xor eax, eax
// 006323d2  c3                   ret 
// 006323d3  8bc2                 mov eax, edx
// 006323d5  c3                   ret 

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
    char padding[0x158];
    float x, y, z;
    bool isNonzero();
};

bool BodyVelocity::isNonzero()
{
    static Vector3 zero;
    return x != zero.x || y != zero.y || z != zero.z;
}
