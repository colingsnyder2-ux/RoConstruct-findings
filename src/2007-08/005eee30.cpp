// from server: 88% by colin
// roc 2007-08 005eee30  unit: RBX::BodyForce  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005eee30
//
// 005eee30  ba01000000           mov edx, 1
// 005eee35  841538d18b00         test byte ptr [0x8bd138], dl
// 005eee3b  751a                 jne 0x5eee57
// 005eee3d  d9ee                 fldz 
// 005eee3f  091538d18b00         or dword ptr [0x8bd138], edx
// 005eee45  d9152cd18b00         fst dword ptr [0x8bd12c]
// 005eee4b  d91530d18b00         fst dword ptr [0x8bd130]
// 005eee51  d91d34d18b00         fstp dword ptr [0x8bd134]
// 005eee57  d9052cd18b00         fld dword ptr [0x8bd12c]
// 005eee5d  d899fc000000         fcomp dword ptr [ecx + 0xfc]
// 005eee63  dfe0                 fnstsw ax
// 005eee65  f6c444               test ah, 0x44
// 005eee68  7a29                 jp 0x5eee93
// 005eee6a  d90530d18b00         fld dword ptr [0x8bd130]
// 005eee70  d89900010000         fcomp dword ptr [ecx + 0x100]
// 005eee76  dfe0                 fnstsw ax
// 005eee78  f6c444               test ah, 0x44
// 005eee7b  7a16                 jp 0x5eee93
// 005eee7d  d90534d18b00         fld dword ptr [0x8bd134]
// 005eee83  d89904010000         fcomp dword ptr [ecx + 0x104]
// 005eee89  dfe0                 fnstsw ax
// 005eee8b  f6c444               test ah, 0x44
// 005eee8e  7a03                 jp 0x5eee93
// 005eee90  33c0                 xor eax, eax
// 005eee92  c3                   ret 
// 005eee93  8bc2                 mov eax, edx
// 005eee95  c3                   ret 

struct BodyForce {
    char pad[0xfc];
    float x;
    float y;
    float z;
    int isZeroForce();
};

static float g_zeroX;
static float g_zeroY;
static float g_zeroZ;
static int g_zeroInit;

int BodyForce::isZeroForce()
{
    int one = 1;
    if (!(g_zeroInit & one)) {
        g_zeroInit |= one;
        g_zeroX = 0.0f;
        g_zeroY = 0.0f;
        g_zeroZ = 0.0f;
    }
    if (g_zeroX == x) {
        if (g_zeroY == y) {
            if (g_zeroZ == z) {
                return 0;
            }
        }
    }
    return one;
}
