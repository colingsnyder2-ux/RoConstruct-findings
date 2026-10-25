// from server: 100% by king_originala
// roc 2008-06 005de1d0  unit: RBX::Message  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005de1d0
//
// 005de1d0  8b542408             mov edx, dword ptr [esp + 8]
// 005de1d4  d944240c             fld dword ptr [esp + 0xc]
// 005de1d8  d9e8                 fld1 
// 005de1da  56                   push esi
// 005de1db  8b742408             mov esi, dword ptr [esp + 8]
// 005de1df  33c9                 xor ecx, ecx
// 005de1e1  2bf2                 sub esi, edx
// 005de1e3  d90416               fld dword ptr [esi + edx]
// 005de1e6  d902                 fld dword ptr [edx]
// 005de1e8  d9c0                 fld st(0)
// 005de1ea  ddea                 fucomp st(2)
// 005de1ec  dfe0                 fnstsw ax
// 005de1ee  f6c444               test ah, 0x44
// 005de1f1  7b1d                 jnp 0x5de210
// 005de1f3  d8e9                 fsubr st(1)
// 005de1f5  d9e1                 fabs 
// 005de1f7  d9c9                 fxch st(1)
// 005de1f9  d9e1                 fabs 
// 005de1fb  d8c2                 fadd st(2)
// 005de1fd  d8cb                 fmul st(3)
// 005de1ff  ded9                 fcompp 
// 005de201  dfe0                 fnstsw ax
// 005de203  f6c401               test ah, 1
// 005de206  740c                 je 0x5de214
// 005de208  ddd9                 fstp st(1)
// 005de20a  32c0                 xor al, al
// 005de20c  ddd8                 fstp st(0)
// 005de20e  5e                   pop esi
// 005de20f  c3                   ret 
// 005de210  ddd8                 fstp st(0)
// 005de212  ddd8                 fstp st(0)
// 005de214  41                   inc ecx
// 005de215  83c204               add edx, 4
// 005de218  83f903               cmp ecx, 3
// 005de21b  7cc6                 jl 0x5de1e3
// 005de21d  ddd9                 fstp st(1)
// 005de21f  b001                 mov al, 1
// 005de221  ddd8                 fstp st(0)
// 005de223  5e                   pop esi
// 005de224  c3                   ret 

extern "C" double __cdecl fabs(double);

bool __cdecl compare(const float* a, const float* b, float epsilon)
{
    for (int i = 0; i < 3; ++i)
    {
        const double av = a[i];
        const double bv = b[i];
        if (!(av == bv ||
              fabs(av - bv) <= (fabs(av) + 1.0) * epsilon))
            return false;
    }
    return true;
}
