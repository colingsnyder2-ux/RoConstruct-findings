// from server: 100% by king_originala
// roc 2008-06 005de230  unit: RBX::Message  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005de230
//
// 005de230  8b442408             mov eax, dword ptr [esp + 8]
// 005de234  d944240c             fld dword ptr [esp + 0xc]
// 005de238  d9e8                 fld1 
// 005de23a  53                   push ebx
// 005de23b  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005de23f  56                   push esi
// 005de240  57                   push edi
// 005de241  33ff                 xor edi, edi
// 005de243  2bd8                 sub ebx, eax
// 005de245  8bf0                 mov esi, eax
// 005de247  33c9                 xor ecx, ecx
// 005de249  8bd6                 mov edx, esi
// 005de24b  d90413               fld dword ptr [ebx + edx]
// 005de24e  d902                 fld dword ptr [edx]
// 005de250  d9c0                 fld st(0)
// 005de252  ddea                 fucomp st(2)
// 005de254  dfe0                 fnstsw ax
// 005de256  f6c444               test ah, 0x44
// 005de259  7b1f                 jnp 0x5de27a
// 005de25b  d8e9                 fsubr st(1)
// 005de25d  d9e1                 fabs 
// 005de25f  d9c9                 fxch st(1)
// 005de261  d9e1                 fabs 
// 005de263  d8c2                 fadd st(2)
// 005de265  d8cb                 fmul st(3)
// 005de267  ded9                 fcompp 
// 005de269  dfe0                 fnstsw ax
// 005de26b  f6c401               test ah, 1
// 005de26e  740e                 je 0x5de27e
// 005de270  5f                   pop edi
// 005de271  ddd9                 fstp st(1)
// 005de273  5e                   pop esi
// 005de274  ddd8                 fstp st(0)
// 005de276  32c0                 xor al, al
// 005de278  5b                   pop ebx
// 005de279  c3                   ret 
// 005de27a  ddd8                 fstp st(0)
// 005de27c  ddd8                 fstp st(0)
// 005de27e  41                   inc ecx
// 005de27f  83c204               add edx, 4
// 005de282  83f903               cmp ecx, 3
// 005de285  7cc4                 jl 0x5de24b
// 005de287  47                   inc edi
// 005de288  83c60c               add esi, 0xc
// 005de28b  83ff03               cmp edi, 3
// 005de28e  7cb7                 jl 0x5de247
// 005de290  5f                   pop edi
// 005de291  ddd9                 fstp st(1)
// 005de293  5e                   pop esi
// 005de294  ddd8                 fstp st(0)
// 005de296  b001                 mov al, 1
// 005de298  5b                   pop ebx
// 005de299  c3                   ret 

extern "C" double __cdecl fabs(double);

struct Matrix {
    float m[3][3];
};

bool __cdecl fuzzyEqual(const Matrix& a, const Matrix& b, float tolerance)
{
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            double x = a.m[i][j];
            double y = b.m[i][j];
            if (x != y) {
                if (!(fabs(x - y) <= (fabs(x) + 1.0) * tolerance))
                    return false;
            }
        }
    }
    return true;
}
