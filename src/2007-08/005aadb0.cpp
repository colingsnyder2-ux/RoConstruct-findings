// from server: 42% by colin
// roc 2007-08 005aadb0  unit: seg_005a0000  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005aadb0
//
// 005aadb0  d9ee                 fldz 
// 005aadb2  56                   push esi
// 005aadb3  d9e8                 fld1 
// 005aadb5  8b742408             mov esi, dword ptr [esp + 8]
// 005aadb9  d9056c647900         fld dword ptr [0x79646c]
// 005aadbf  57                   push edi
// 005aadc0  33ff                 xor edi, edi
// 005aadc2  33c9                 xor ecx, ecx
// 005aadc4  8bd6                 mov edx, esi
// 005aadc6  d902                 fld dword ptr [edx]
// 005aadc8  d9c3                 fld st(3)
// 005aadca  dde9                 fucomp st(1)
// 005aadcc  dfe0                 fnstsw ax
// 005aadce  f6c444               test ah, 0x44
// 005aadd1  7b21                 jnp 0x5aadf4
// 005aadd3  d9c2                 fld st(2)
// 005aadd5  dde9                 fucomp st(1)
// 005aadd7  dfe0                 fnstsw ax
// 005aadd9  f6c444               test ah, 0x44
// 005aaddc  7b16                 jnp 0x5aadf4
// 005aadde  d9c1                 fld st(1)
// 005aade0  dae9                 fucompp 
// 005aade2  dfe0                 fnstsw ax
// 005aade4  f6c444               test ah, 0x44
// 005aade7  7b0d                 jnp 0x5aadf6
// 005aade9  ddda                 fstp st(2)
// 005aadeb  5f                   pop edi
// 005aadec  ddd8                 fstp st(0)
// 005aadee  32c0                 xor al, al
// 005aadf0  ddd8                 fstp st(0)
// 005aadf2  5e                   pop esi
// 005aadf3  c3                   ret 
// 005aadf4  ddd8                 fstp st(0)
// 005aadf6  83c101               add ecx, 1
// 005aadf9  83c204               add edx, 4
// 005aadfc  83f903               cmp ecx, 3
// 005aadff  7cc5                 jl 0x5aadc6
// 005aae01  83c701               add edi, 1
// 005aae04  83c60c               add esi, 0xc
// 005aae07  83ff03               cmp edi, 3
// 005aae0a  7cb6                 jl 0x5aadc2
// 005aae0c  ddda                 fstp st(2)
// 005aae0e  5f                   pop edi
// 005aae0f  ddd8                 fstp st(0)
// 005aae11  b001                 mov al, 1
// 005aae13  ddd8                 fstp st(0)
// 005aae15  5e                   pop esi
// 005aae16  c3                   ret 
// library rbxgs/v8world\World.cpp (function ?isValid@World@RBX@@QAE_NPBM@Z)

extern float g_worldEpsilon;

struct RBX_World {
    bool isValid(const float* matrix) const;
};

bool RBX_World::isValid(const float* matrix) const {
    const float* row = matrix;
    for (int i = 0; i < 3; ++i) {
        const float* col = row;
        for (int j = 0; j < 3; ++j) {
            float v = *col;
            if (v == 0.0f || v == 1.0f || v == g_worldEpsilon) {
                return false;
            }
            ++col;
        }
        row += 3;
    }
    return true;
}
