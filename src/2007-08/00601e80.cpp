// from server: 49% by colin
// roc 2007-08 00601e80  unit: RBX::Humanoid  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00601e80
//
// 00601e80  d94108               fld dword ptr [ecx + 8]
// 00601e83  83ec08               sub esp, 8
// 00601e86  d94104               fld dword ptr [ecx + 4]
// 00601e89  d901                 fld dword ptr [ecx]
// 00601e8b  dcc8                 fmul st(0), st(0)
// 00601e8d  d9c1                 fld st(1)
// 00601e8f  deca                 fmulp st(2)
// 00601e91  dec1                 faddp st(1)
// 00601e93  d9c1                 fld st(1)
// 00601e95  deca                 fmulp st(2)
// 00601e97  dec1                 faddp st(1)
// 00601e99  d9ee                 fldz 
// 00601e9b  d9c0                 fld st(0)
// 00601e9d  ddea                 fucomp st(2)
// 00601e9f  dfe0                 fnstsw ax
// 00601ea1  f6c444               test ah, 0x44
// 00601ea4  7b2b                 jnp 0x601ed1
// 00601ea6  d9c1                 fld st(1)
// 00601ea8  83ec10               sub esp, 0x10
// 00601eab  d9e1                 fabs 
// 00601ead  dd5c2410             fstp qword ptr [esp + 0x10]
// 00601eb1  dd5c2408             fstp qword ptr [esp + 8]
// 00601eb5  dd1c24               fstp qword ptr [esp]
// 00601eb8  e8a375f0ff           call 0x509460
// 00601ebd  dc5c2410             fcomp qword ptr [esp + 0x10]
// 00601ec1  83c410               add esp, 0x10
// 00601ec4  dfe0                 fnstsw ax
// 00601ec6  f6c401               test ah, 1
// 00601ec9  740a                 je 0x601ed5
// 00601ecb  33c0                 xor eax, eax
// 00601ecd  83c408               add esp, 8
// 00601ed0  c3                   ret 
// 00601ed1  ddd9                 fstp st(1)
// 00601ed3  ddd8                 fstp st(0)
// 00601ed5  b801000000           mov eax, 1
// 00601eda  83c408               add esp, 8
// 00601edd  c3                   ret 

extern "C" double __cdecl sub_509460(double, double, double);

struct RBX_Humanoid {
    float x;
    float y;
    float z;
    bool method();
};

bool RBX_Humanoid::method() {
    float lenSq = x * y + x * y + z * z;
    if (lenSq != 0.0f) {
        return true;
    }
    double len = sub_509460((double)z, (double)y, (double)lenSq);
    if (len < (double)lenSq) {
        return false;
    }
    return true;
}
