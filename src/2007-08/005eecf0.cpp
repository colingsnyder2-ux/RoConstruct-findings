// from server: 88% by colin
// roc 2007-08 005eecf0  unit: RBX::BodyVelocity  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005eecf0
//
// 005eecf0  ba01000000           mov edx, 1
// 005eecf5  841538d18b00         test byte ptr [0x8bd138], dl
// 005eecfb  751a                 jne 0x5eed17
// 005eecfd  d9ee                 fldz 
// 005eecff  091538d18b00         or dword ptr [0x8bd138], edx
// 005eed05  d9152cd18b00         fst dword ptr [0x8bd12c]
// 005eed0b  d91530d18b00         fst dword ptr [0x8bd130]
// 005eed11  d91d34d18b00         fstp dword ptr [0x8bd134]
// 005eed17  d9052cd18b00         fld dword ptr [0x8bd12c]
// 005eed1d  d8990c010000         fcomp dword ptr [ecx + 0x10c]
// 005eed23  dfe0                 fnstsw ax
// 005eed25  f6c444               test ah, 0x44
// 005eed28  7a29                 jp 0x5eed53
// 005eed2a  d90530d18b00         fld dword ptr [0x8bd130]
// 005eed30  d89910010000         fcomp dword ptr [ecx + 0x110]
// 005eed36  dfe0                 fnstsw ax
// 005eed38  f6c444               test ah, 0x44
// 005eed3b  7a16                 jp 0x5eed53
// 005eed3d  d90534d18b00         fld dword ptr [0x8bd134]
// 005eed43  d89914010000         fcomp dword ptr [ecx + 0x114]
// 005eed49  dfe0                 fnstsw ax
// 005eed4b  f6c444               test ah, 0x44
// 005eed4e  7a03                 jp 0x5eed53
// 005eed50  33c0                 xor eax, eax
// 005eed52  c3                   ret 
// 005eed53  8bc2                 mov eax, edx
// 005eed55  c3                   ret 

struct BodyVelocity {
    char pad[0x10c];
    float velocityX;
    float velocityY;
    float velocityZ;
    int isZeroVelocity();
};

static float g_zeroX;
static float g_zeroY;
static float g_zeroZ;
static int g_zeroInit;

int BodyVelocity::isZeroVelocity()
{
    int one = 1;
    if ((g_zeroInit & one) == 0) {
        g_zeroInit |= one;
        g_zeroX = 0.0f;
        g_zeroY = 0.0f;
        g_zeroZ = 0.0f;
    }
    if (g_zeroX == velocityX && g_zeroY == velocityY && g_zeroZ == velocityZ)
        return 0;
    return one;
}
