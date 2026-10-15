// roc 2008-06 00649c90  unit: RBX::Ball  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00649c90
//
// 00649c90  83ec0c               sub esp, 0xc
// 00649c93  837c241400           cmp dword ptr [esp + 0x14], 0
// 00649c98  7538                 jne 0x649cd2
// 00649c9a  d9410c               fld dword ptr [ecx + 0xc]
// 00649c9d  d821                 fsub dword ptr [ecx]
// 00649c9f  d94110               fld dword ptr [ecx + 0x10]
// 00649ca2  d86104               fsub dword ptr [ecx + 4]
// 00649ca5  d94114               fld dword ptr [ecx + 0x14]
// 00649ca8  d86108               fsub dword ptr [ecx + 8]
// 00649cab  d9c2                 fld st(2)
// 00649cad  d8cb                 fmul st(3)
// 00649caf  d9c2                 fld st(2)
// 00649cb1  d8cb                 fmul st(3)
// 00649cb3  dec1                 faddp st(1)
// 00649cb5  d9c1                 fld st(1)
// 00649cb7  d8ca                 fmul st(2)
// 00649cb9  dec1                 faddp st(1)
// 00649cbb  d9fa                 fsqrt 
// 00649cbd  d9e8                 fld1 
// 00649cbf  def1                 fdivrp st(1)
// 00649cc1  d9c0                 fld st(0)
// 00649cc3  decc                 fmulp st(4)
// 00649cc5  d9cb                 fxch st(3)
// 00649cc7  d91c24               fstp dword ptr [esp]
// 00649cca  d9c2                 fld st(2)
// 00649ccc  deca                 fmulp st(2)
// 00649cce  d9c9                 fxch st(1)
// 00649cd0  eb34                 jmp 0x649d06
// 00649cd2  d94124               fld dword ptr [ecx + 0x24]
// 00649cd5  d821                 fsub dword ptr [ecx]
// 00649cd7  d94128               fld dword ptr [ecx + 0x28]
// 00649cda  d86104               fsub dword ptr [ecx + 4]
// 00649cdd  d9412c               fld dword ptr [ecx + 0x2c]
// 00649ce0  d86108               fsub dword ptr [ecx + 8]
// 00649ce3  d9c0                 fld st(0)
// 00649ce5  d8c9                 fmul st(1)
// 00649ce7  d9c2                 fld st(2)
// 00649ce9  d8cb                 fmul st(3)
// 00649ceb  dec1                 faddp st(1)
// 00649ced  d9c3                 fld st(3)
// 00649cef  d8cc                 fmul st(4)
// 00649cf1  dec1                 faddp st(1)
// 00649cf3  d9fa                 fsqrt 
// 00649cf5  d9e8                 fld1 
// 00649cf7  def1                 fdivrp st(1)
// 00649cf9  d9c0                 fld st(0)
// 00649cfb  decc                 fmulp st(4)
// 00649cfd  d9cb                 fxch st(3)
// 00649cff  d91c24               fstp dword ptr [esp]
// 00649d02  d9c9                 fxch st(1)
// 00649d04  d8ca                 fmul st(2)
// 00649d06  8b442410             mov eax, dword ptr [esp + 0x10]
// 00649d0a  d95c2404             fstp dword ptr [esp + 4]
// 00649d0e  8d0c24               lea ecx, [esp]
// 00649d11  dec9                 fmulp st(1)
// 00649d13  d95c2408             fstp dword ptr [esp + 8]
// 00649d17  d901                 fld dword ptr [ecx]
// 00649d19  d918                 fstp dword ptr [eax]
// 00649d1b  d94104               fld dword ptr [ecx + 4]
// 00649d1e  d95804               fstp dword ptr [eax + 4]
// 00649d21  d94108               fld dword ptr [ecx + 8]
// 00649d24  d95808               fstp dword ptr [eax + 8]
// 00649d27  83c40c               add esp, 0xc
// 00649d2a  c20800               ret 8
// library rbxgs/roc_camera_flight_default_0_5e0bfcd6c544f87f.cpp (function ?getAxis@Face@RBX@@ABE?AVVector3@G3D@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs roc_camera_flight_default_0_5e0bfcd6c544f87f.cpp
