// from server: 89% by colin
// roc 2007-08 005b44e0  unit: RBX::ICameraSubject  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b44e0
//
// 005b44e0  ba01000000           mov edx, 1
// 005b44e5  8415bc5e8c00         test byte ptr [0x8c5ebc], dl
// 005b44eb  7528                 jne 0x5b4515
// 005b44ed  d905f0547b00         fld dword ptr [0x7b54f0]
// 005b44f3  0915bc5e8c00         or dword ptr [0x8c5ebc], edx
// 005b44f9  d91db45e8c00         fstp dword ptr [0x8c5eb4]
// 005b44ff  c705b05e8c0000000000 mov dword ptr [0x8c5eb0], 0
// 005b4509  d9059c7e7900         fld dword ptr [0x797e9c]
// 005b450f  d91db85e8c00         fstp dword ptr [0x8c5eb8]
// 005b4515  a1b05e8c00           mov eax, dword ptr [0x8c5eb0]
// 005b451a  3901                 cmp dword ptr [ecx], eax
// 005b451c  7523                 jne 0x5b4541
// 005b451e  d905b45e8c00         fld dword ptr [0x8c5eb4]
// 005b4524  d85904               fcomp dword ptr [ecx + 4]
// 005b4527  dfe0                 fnstsw ax
// 005b4529  f6c444               test ah, 0x44
// 005b452c  7a13                 jp 0x5b4541
// 005b452e  d905b85e8c00         fld dword ptr [0x8c5eb8]
// 005b4534  d85908               fcomp dword ptr [ecx + 8]
// 005b4537  dfe0                 fnstsw ax
// 005b4539  f6c444               test ah, 0x44
// 005b453c  7a03                 jp 0x5b4541
// 005b453e  8bc2                 mov eax, edx
// 005b4540  c3                   ret 
// 005b4541  33c0                 xor eax, eax
// 005b4543  c3                   ret 

struct ICameraSubject {
    int field0;
    float field4;
    float field8;
    int isDefault();
};

extern float g_float_7b54f0;
extern float g_float_797e9c;
extern int g_int_8c5eb0;
extern float g_float_8c5eb4;
extern float g_float_8c5eb8;
extern int g_int_8c5ebc;

int ICameraSubject::isDefault()
{
    int one = 1;
    if (!(g_int_8c5ebc & one)) {
        g_float_8c5eb4 = g_float_7b54f0;
        g_int_8c5ebc |= one;
        g_int_8c5eb0 = 0;
        g_float_8c5eb8 = g_float_797e9c;
    }
    if (field0 == g_int_8c5eb0 && field4 == g_float_8c5eb4 && field8 == g_float_8c5eb8)
        return one;
    return 0;
}
