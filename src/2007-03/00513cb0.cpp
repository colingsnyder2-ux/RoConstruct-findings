// roc 2007-03 00513cb0  unit: seg_00510000  size: 211 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00513cb0
//
// 00513cb0  83ec1c               sub esp, 0x1c
// 00513cb3  8b442424             mov eax, dword ptr [esp + 0x24]
// 00513cb7  d94014               fld dword ptr [eax + 0x14]
// 00513cba  56                   push esi
// 00513cbb  d94010               fld dword ptr [eax + 0x10]
// 00513cbe  8b742424             mov esi, dword ptr [esp + 0x24]
// 00513cc2  d94018               fld dword ptr [eax + 0x18]
// 00513cc5  c744240400000000     mov dword ptr [esp + 4], 0
// 00513ccd  d94104               fld dword ptr [ecx + 4]
// 00513cd0  d8cb                 fmul st(3)
// 00513cd2  d901                 fld dword ptr [ecx]
// 00513cd4  d8cb                 fmul st(3)
// 00513cd6  dec1                 faddp st(1)
// 00513cd8  d94108               fld dword ptr [ecx + 8]
// 00513cdb  d8ca                 fmul st(2)
// 00513cdd  dec1                 faddp st(1)
// 00513cdf  d95c2408             fstp dword ptr [esp + 8]
// 00513ce3  d9410c               fld dword ptr [ecx + 0xc]
// 00513ce6  d8ca                 fmul st(2)
// 00513ce8  d94110               fld dword ptr [ecx + 0x10]
// 00513ceb  d8cc                 fmul st(4)
// 00513ced  dec1                 faddp st(1)
// 00513cef  d94114               fld dword ptr [ecx + 0x14]
// 00513cf2  d8ca                 fmul st(2)
// 00513cf4  dec1                 faddp st(1)
// 00513cf6  d95c240c             fstp dword ptr [esp + 0xc]
// 00513cfa  d94118               fld dword ptr [ecx + 0x18]
// 00513cfd  deca                 fmulp st(2)
// 00513cff  d9411c               fld dword ptr [ecx + 0x1c]
// 00513d02  decb                 fmulp st(3)
// 00513d04  d9c9                 fxch st(1)
// 00513d06  dec2                 faddp st(2)
// 00513d08  d84920               fmul dword ptr [ecx + 0x20]
// 00513d0b  dec1                 faddp st(1)
// 00513d0d  d95c2410             fstp dword ptr [esp + 0x10]
// 00513d11  d94008               fld dword ptr [eax + 8]
// 00513d14  d94004               fld dword ptr [eax + 4]
// 00513d17  d9400c               fld dword ptr [eax + 0xc]
// 00513d1a  8d442408             lea eax, [esp + 8]
// 00513d1e  d94104               fld dword ptr [ecx + 4]
// 00513d21  50                   push eax
// 00513d22  d8cb                 fmul st(3)
// 00513d24  d901                 fld dword ptr [ecx]
// 00513d26  d8cb                 fmul st(3)
// 00513d28  dec1                 faddp st(1)
// 00513d2a  d94108               fld dword ptr [ecx + 8]
// 00513d2d  d8ca                 fmul st(2)
// 00513d2f  dec1                 faddp st(1)
// 00513d31  d84124               fadd dword ptr [ecx + 0x24]
// 00513d34  d95c2418             fstp dword ptr [esp + 0x18]
// 00513d38  d94110               fld dword ptr [ecx + 0x10]
// 00513d3b  d8cb                 fmul st(3)
// 00513d3d  d9410c               fld dword ptr [ecx + 0xc]
// 00513d40  d8cb                 fmul st(3)
// 00513d42  dec1                 faddp st(1)
// 00513d44  d94114               fld dword ptr [ecx + 0x14]
// 00513d47  d8ca                 fmul st(2)
// 00513d49  dec1                 faddp st(1)
// 00513d4b  d84128               fadd dword ptr [ecx + 0x28]
// 00513d4e  d95c241c             fstp dword ptr [esp + 0x1c]
// 00513d52  d94118               fld dword ptr [ecx + 0x18]
// 00513d55  deca                 fmulp st(2)
// 00513d57  d9411c               fld dword ptr [ecx + 0x1c]
// 00513d5a  decb                 fmulp st(3)
// 00513d5c  d9c9                 fxch st(1)
// 00513d5e  dec2                 faddp st(2)
// 00513d60  d84920               fmul dword ptr [ecx + 0x20]
// 00513d63  dec1                 faddp st(1)
// 00513d65  d8412c               fadd dword ptr [ecx + 0x2c]
// 00513d68  8d4c2418             lea ecx, [esp + 0x18]
// 00513d6c  51                   push ecx
// 00513d6d  56                   push esi
// 00513d6e  d95c2428             fstp dword ptr [esp + 0x28]
// 00513d72  e8d9feffff           call 0x513c50
// 00513d77  83c40c               add esp, 0xc
// 00513d7a  8bc6                 mov eax, esi
// 00513d7c  5e                   pop esi
// 00513d7d  83c41c               add esp, 0x1c
// 00513d80  c20800               ret 8
// library rbxgs-g3d/G3Dcpp\CoordinateFrame.cpp (function ?toWorldSpace@CoordinateFrame@G3D@@QBE?AVRay@2@ABV32@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/CoordinateFrame.cpp
