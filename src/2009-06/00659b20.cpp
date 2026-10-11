// from server: 65% by atomic.potato
// roc 2009-06 00659b20  unit: RBX::VCamera::?$FactoryProduct  size: 181 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00659b20
//
// 00659b20  d9ee                 fldz 
// 00659b22  83ec0c               sub esp, 0xc
// 00659b25  d85c2410             fcomp dword ptr [esp + 0x10]
// 00659b29  56                   push esi
// 00659b2a  8bf1                 mov esi, ecx
// 00659b2c  dfe0                 fnstsw ax
// 00659b2e  f6c444               test ah, 0x44
// 00659b31  0f8b95000000         jnp 0x659bcc
// 00659b37  8d442408             lea eax, [esp + 8]
// 00659b3b  50                   push eax
// 00659b3c  8d4c2408             lea ecx, [esp + 8]
// 00659b40  51                   push ecx
// 00659b41  8d542414             lea edx, [esp + 0x14]
// 00659b45  52                   push edx
// 00659b46  8bce                 mov ecx, esi
// 00659b48  e893faffff           call 0x6595e0
// 00659b4d  f6058ccba40001       test byte ptr [0xa4cb8c], 1
// 00659b54  7515                 jne 0x659b6b
// 00659b56  d905b0118e00         fld dword ptr [0x8e11b0]
// 00659b5c  830d8ccba40001       or dword ptr [0xa4cb8c], 1
// 00659b63  d91588cba400         fst dword ptr [0xa4cb88]
// 00659b69  eb06                 jmp 0x659b71
// 00659b6b  d90588cba400         fld dword ptr [0xa4cb88]
// 00659b71  d9442404             fld dword ptr [esp + 4]
// 00659b75  d9442414             fld dword ptr [esp + 0x14]
// 00659b79  d8c1                 fadd st(1)
// 00659b7b  d9c2                 fld st(2)
// 00659b7d  d9e0                 fchs 
// 00659b7f  d8d1                 fcom st(1)
// 00659b81  dfe0                 fnstsw ax
// 00659b83  f6c401               test ah, 1
// 00659b86  7533                 jne 0x659bbb
// 00659b88  ddd9                 fstp st(1)
// 00659b8a  ddda                 fstp st(2)
// 00659b8c  dde9                 fucomp st(1)
// 00659b8e  dfe0                 fnstsw ax
// 00659b90  f6c444               test ah, 0x44
// 00659b93  7b35                 jnp 0x659bca
// 00659b95  d9442408             fld dword ptr [esp + 8]
// 00659b99  83ec0c               sub esp, 0xc
// 00659b9c  d95c2408             fstp dword ptr [esp + 8]
// 00659ba0  8bce                 mov ecx, esi
// 00659ba2  d95c2404             fstp dword ptr [esp + 4]
// 00659ba6  d9442418             fld dword ptr [esp + 0x18]
// 00659baa  d91c24               fstp dword ptr [esp]
// 00659bad  e8defeffff           call 0x659a90
// 00659bb2  b001                 mov al, 1
// 00659bb4  5e                   pop esi
// 00659bb5  83c40c               add esp, 0xc
// 00659bb8  c20400               ret 4
// 00659bbb  ddd8                 fstp st(0)
// 00659bbd  d8d2                 fcom st(2)
// 00659bbf  dfe0                 fnstsw ax
// 00659bc1  f6c401               test ah, 1
// 00659bc4  75c4                 jne 0x659b8a
// 00659bc6  ddd8                 fstp st(0)
// 00659bc8  ebc2                 jmp 0x659b8c
// 00659bca  ddd8                 fstp st(0)
// 00659bcc  32c0                 xor al, al
// 00659bce  5e                   pop esi
// 00659bcf  83c40c               add esp, 0xc
// 00659bd2  c20400               ret 4

extern float g_8e11b0;
extern float g_a4cb88;
extern int g_a4cb8c;

struct VCamera {
    char pad[0x100];
    bool sub_6595e0(float* a, float* b, float* c);
    void sub_659a90(float a, float b, float c);
    bool func(float arg);
};

bool VCamera::func(float arg) {
    if (arg == 0.0f) {
        return false;
    }
    float a, b, c;
    sub_6595e0(&a, &b, &c);
    if ((g_a4cb8c & 1) == 0) {
        g_a4cb88 = g_8e11b0;
        g_a4cb8c |= 1;
    }
    float t = g_a4cb88;
    float sum = b + t;
    float neg = -c;
    if (neg < sum) {
        if (neg == sum) {
            return false;
        }
    } else {
        if (neg > sum) {
            if (neg == sum) {
                return false;
            }
        }
    }
    sub_659a90(a, t, c);
    return true;
}
