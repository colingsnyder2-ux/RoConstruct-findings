// from server: 87% by colin
// roc 2007-08 006024e0  unit: RBX::Running  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006024e0
//
// 006024e0  ba01000000           mov edx, 1
// 006024e5  841538d18b00         test byte ptr [0x8bd138], dl
// 006024eb  751a                 jne 0x602507
// 006024ed  d9ee                 fldz 
// 006024ef  091538d18b00         or dword ptr [0x8bd138], edx
// 006024f5  d9152cd18b00         fst dword ptr [0x8bd12c]
// 006024fb  d91530d18b00         fst dword ptr [0x8bd130]
// 00602501  d91d34d18b00         fstp dword ptr [0x8bd134]
// 00602507  d9052cd18b00         fld dword ptr [0x8bd12c]
// 0060250d  d8593c               fcomp dword ptr [ecx + 0x3c]
// 00602510  dfe0                 fnstsw ax
// 00602512  f6c444               test ah, 0x44
// 00602515  7a23                 jp 0x60253a
// 00602517  d90530d18b00         fld dword ptr [0x8bd130]
// 0060251d  d85940               fcomp dword ptr [ecx + 0x40]
// 00602520  dfe0                 fnstsw ax
// 00602522  f6c444               test ah, 0x44
// 00602525  7a13                 jp 0x60253a
// 00602527  d90534d18b00         fld dword ptr [0x8bd134]
// 0060252d  d85944               fcomp dword ptr [ecx + 0x44]
// 00602530  dfe0                 fnstsw ax
// 00602532  f6c444               test ah, 0x44
// 00602535  7a03                 jp 0x60253a
// 00602537  33c0                 xor eax, eax
// 00602539  c3                   ret 
// 0060253a  8bc2                 mov eax, edx
// 0060253c  c3                   ret 

struct RBX_Running {
    char pad[0x3c];
    float x;
    float y;
    float z;
    int check();
};

static float g_prevX;
static float g_prevY;
static float g_prevZ;
static int g_initialized;

int RBX_Running::check()
{
    int one = 1;
    if (!(g_initialized & one)) {
        g_initialized |= one;
        g_prevX = 0.0f;
        g_prevY = 0.0f;
        g_prevZ = 0.0f;
    }
    if (g_prevX == x && g_prevY == y && g_prevZ == z)
        return 0;
    return one;
}
