// from server: 100% by auto
// roc 2007-08 0051d8f0  unit: seg_00510000  size: 211 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051d8f0
//
// 0051d8f0  83ec1c               sub esp, 0x1c
// 0051d8f3  8b442424             mov eax, dword ptr [esp + 0x24]
// 0051d8f7  d94014               fld dword ptr [eax + 0x14]
// 0051d8fa  56                   push esi
// 0051d8fb  d94010               fld dword ptr [eax + 0x10]
// 0051d8fe  8b742424             mov esi, dword ptr [esp + 0x24]
// 0051d902  d94018               fld dword ptr [eax + 0x18]
// 0051d905  c744240400000000     mov dword ptr [esp + 4], 0
// 0051d90d  d94104               fld dword ptr [ecx + 4]
// 0051d910  d8cb                 fmul st(3)
// 0051d912  d901                 fld dword ptr [ecx]
// 0051d914  d8cb                 fmul st(3)
// 0051d916  dec1                 faddp st(1)
// 0051d918  d94108               fld dword ptr [ecx + 8]
// 0051d91b  d8ca                 fmul st(2)
// 0051d91d  dec1                 faddp st(1)
// 0051d91f  d95c2408             fstp dword ptr [esp + 8]
// 0051d923  d9410c               fld dword ptr [ecx + 0xc]
// 0051d926  d8ca                 fmul st(2)
// 0051d928  d94110               fld dword ptr [ecx + 0x10]
// 0051d92b  d8cc                 fmul st(4)
// 0051d92d  dec1                 faddp st(1)
// 0051d92f  d94114               fld dword ptr [ecx + 0x14]
// 0051d932  d8ca                 fmul st(2)
// 0051d934  dec1                 faddp st(1)
// 0051d936  d95c240c             fstp dword ptr [esp + 0xc]
// 0051d93a  d94118               fld dword ptr [ecx + 0x18]
// 0051d93d  deca                 fmulp st(2)
// 0051d93f  d9411c               fld dword ptr [ecx + 0x1c]
// 0051d942  decb                 fmulp st(3)
// 0051d944  d9c9                 fxch st(1)
// 0051d946  dec2                 faddp st(2)
// 0051d948  d84920               fmul dword ptr [ecx + 0x20]
// 0051d94b  dec1                 faddp st(1)
// 0051d94d  d95c2410             fstp dword ptr [esp + 0x10]
// 0051d951  d94008               fld dword ptr [eax + 8]
// 0051d954  d94004               fld dword ptr [eax + 4]
// 0051d957  d9400c               fld dword ptr [eax + 0xc]
// 0051d95a  8d442408             lea eax, [esp + 8]
// 0051d95e  d94104               fld dword ptr [ecx + 4]
// 0051d961  50                   push eax
// 0051d962  d8cb                 fmul st(3)
// 0051d964  d901                 fld dword ptr [ecx]
// 0051d966  d8cb                 fmul st(3)
// 0051d968  dec1                 faddp st(1)
// 0051d96a  d94108               fld dword ptr [ecx + 8]
// 0051d96d  d8ca                 fmul st(2)
// 0051d96f  dec1                 faddp st(1)
// 0051d971  d84124               fadd dword ptr [ecx + 0x24]
// 0051d974  d95c2418             fstp dword ptr [esp + 0x18]
// 0051d978  d94110               fld dword ptr [ecx + 0x10]
// 0051d97b  d8cb                 fmul st(3)
// 0051d97d  d9410c               fld dword ptr [ecx + 0xc]
// 0051d980  d8cb                 fmul st(3)
// 0051d982  dec1                 faddp st(1)
// 0051d984  d94114               fld dword ptr [ecx + 0x14]
// 0051d987  d8ca                 fmul st(2)
// 0051d989  dec1                 faddp st(1)
// 0051d98b  d84128               fadd dword ptr [ecx + 0x28]
// 0051d98e  d95c241c             fstp dword ptr [esp + 0x1c]
// 0051d992  d94118               fld dword ptr [ecx + 0x18]
// 0051d995  deca                 fmulp st(2)
// 0051d997  d9411c               fld dword ptr [ecx + 0x1c]
// 0051d99a  decb                 fmulp st(3)
// 0051d99c  d9c9                 fxch st(1)
// 0051d99e  dec2                 faddp st(2)
// 0051d9a0  d84920               fmul dword ptr [ecx + 0x20]
// 0051d9a3  dec1                 faddp st(1)
// 0051d9a5  d8412c               fadd dword ptr [ecx + 0x2c]
// 0051d9a8  8d4c2418             lea ecx, [esp + 0x18]
// 0051d9ac  51                   push ecx
// 0051d9ad  56                   push esi
// 0051d9ae  d95c2428             fstp dword ptr [esp + 0x28]
// 0051d9b2  e8d9feffff           call 0x51d890
// 0051d9b7  83c40c               add esp, 0xc
// 0051d9ba  8bc6                 mov eax, esi
// 0051d9bc  5e                   pop esi
// 0051d9bd  83c41c               add esp, 0x1c
// 0051d9c0  c20800               ret 8
// library g3d-6.09/G3Dcpp\CoordinateFrame.cpp (function ?toWorldSpace@CoordinateFrame@G3D@@QBE?AVRay@2@ABV32@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CoordinateFrame.cpp
