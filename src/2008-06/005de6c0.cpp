// roc 2008-06 005de6c0  unit: RBX::Message  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005de6c0
//
// 005de6c0  83ec0c               sub esp, 0xc
// 005de6c3  d9442418             fld dword ptr [esp + 0x18]
// 005de6c7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005de6cb  d9fe                 fsin 
// 005de6cd  8d0424               lea eax, [esp]
// 005de6d0  50                   push eax
// 005de6d1  d9c0                 fld st(0)
// 005de6d3  d8c9                 fmul st(1)
// 005de6d5  d9e8                 fld1 
// 005de6d7  d9c0                 fld st(0)
// 005de6d9  d8e2                 fsub st(2)
// 005de6db  d9fa                 fsqrt 
// 005de6dd  d9442418             fld dword ptr [esp + 0x18]
// 005de6e1  d9c0                 fld st(0)
// 005de6e3  d9fe                 fsin 
// 005de6e5  d8ca                 fmul st(2)
// 005de6e7  d9e0                 fchs 
// 005de6e9  d9c9                 fxch st(1)
// 005de6eb  d9ff                 fcos 
// 005de6ed  deca                 fmulp st(2)
// 005de6ef  d9c9                 fxch st(1)
// 005de6f1  d9e0                 fchs 
// 005de6f3  d9c0                 fld st(0)
// 005de6f5  d8c9                 fmul st(1)
// 005de6f7  d9c2                 fld st(2)
// 005de6f9  d8cb                 fmul st(3)
// 005de6fb  dec1                 faddp st(1)
// 005de6fd  dec4                 faddp st(4)
// 005de6ff  d9cb                 fxch st(3)
// 005de701  d9fa                 fsqrt 
// 005de703  defa                 fdivp st(2)
// 005de705  d8c9                 fmul st(1)
// 005de707  d9c1                 fld st(1)
// 005de709  decc                 fmulp st(4)
// 005de70b  d9ca                 fxch st(2)
// 005de70d  dec9                 fmulp st(1)
// 005de70f  d94124               fld dword ptr [ecx + 0x24]
// 005de712  dec2                 faddp st(2)
// 005de714  d9c9                 fxch st(1)
// 005de716  d95c2404             fstp dword ptr [esp + 4]
// 005de71a  d94128               fld dword ptr [ecx + 0x28]
// 005de71d  dec2                 faddp st(2)
// 005de71f  d9c9                 fxch st(1)
// 005de721  d95c2408             fstp dword ptr [esp + 8]
// 005de725  d8412c               fadd dword ptr [ecx + 0x2c]
// 005de728  d95c240c             fstp dword ptr [esp + 0xc]
// 005de72c  e8efa6f3ff           call 0x518e20
// 005de731  83c40c               add esp, 0xc
// 005de734  c3                   ret 
// library rbxgs-dll/util\Math.cpp (function ?setHeadingElevation@Math@RBX@@SAXAAVCoordinateFrame@G3D@@MM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll util/Math.cpp
