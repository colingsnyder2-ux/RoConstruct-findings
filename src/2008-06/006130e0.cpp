// roc 2008-06 006130e0  unit: seg_00610000  size: 250 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006130e0
//
// 006130e0  83ec0c               sub esp, 0xc
// 006130e3  8b542418             mov edx, dword ptr [esp + 0x18]
// 006130e7  8b410c               mov eax, dword ptr [ecx + 0xc]
// 006130ea  d94210               fld dword ptr [edx + 0x10]
// 006130ed  d8a0b8000000         fsub dword ptr [eax + 0xb8]
// 006130f3  0594000000           add eax, 0x94
// 006130f8  d94214               fld dword ptr [edx + 0x14]
// 006130fb  d86028               fsub dword ptr [eax + 0x28]
// 006130fe  d94218               fld dword ptr [edx + 0x18]
// 00613101  d8602c               fsub dword ptr [eax + 0x2c]
// 00613104  d94040               fld dword ptr [eax + 0x40]
// 00613107  d8c9                 fmul st(1)
// 00613109  d94044               fld dword ptr [eax + 0x44]
// 0061310c  d8cb                 fmul st(3)
// 0061310e  dee9                 fsubp st(1)
// 00613110  d94044               fld dword ptr [eax + 0x44]
// 00613113  d8cc                 fmul st(4)
// 00613115  d9403c               fld dword ptr [eax + 0x3c]
// 00613118  decb                 fmulp st(3)
// 0061311a  dee2                 fsubrp st(2)
// 0061311c  d9403c               fld dword ptr [eax + 0x3c]
// 0061311f  decb                 fmulp st(3)
// 00613121  d94040               fld dword ptr [eax + 0x40]
// 00613124  decc                 fmulp st(4)
// 00613126  d9ca                 fxch st(2)
// 00613128  dee3                 fsubrp st(3)
// 0061312a  d9c9                 fxch st(1)
// 0061312c  d84030               fadd dword ptr [eax + 0x30]
// 0061312f  d94034               fld dword ptr [eax + 0x34]
// 00613132  dec2                 faddp st(2)
// 00613134  d94038               fld dword ptr [eax + 0x38]
// 00613137  8b4110               mov eax, dword ptr [ecx + 0x10]
// 0061313a  dec3                 faddp st(3)
// 0061313c  0594000000           add eax, 0x94
// 00613141  d94210               fld dword ptr [edx + 0x10]
// 00613144  d86024               fsub dword ptr [eax + 0x24]
// 00613147  d94214               fld dword ptr [edx + 0x14]
// 0061314a  d86028               fsub dword ptr [eax + 0x28]
// 0061314d  d94218               fld dword ptr [edx + 0x18]
// 00613150  d8602c               fsub dword ptr [eax + 0x2c]
// 00613153  d94040               fld dword ptr [eax + 0x40]
// 00613156  d8c9                 fmul st(1)
// 00613158  d94044               fld dword ptr [eax + 0x44]
// 0061315b  d8cb                 fmul st(3)
// 0061315d  dee9                 fsubp st(1)
// 0061315f  d91c24               fstp dword ptr [esp]
// 00613162  d94044               fld dword ptr [eax + 0x44]
// 00613165  d8cb                 fmul st(3)
// 00613167  d9403c               fld dword ptr [eax + 0x3c]
// 0061316a  deca                 fmulp st(2)
// 0061316c  dee1                 fsubrp st(1)
// 0061316e  d9403c               fld dword ptr [eax + 0x3c]
// 00613171  deca                 fmulp st(2)
// 00613173  d94040               fld dword ptr [eax + 0x40]
// 00613176  decb                 fmulp st(3)
// 00613178  d9c9                 fxch st(1)
// 0061317a  dee2                 fsubrp st(2)
// 0061317c  d94030               fld dword ptr [eax + 0x30]
// 0061317f  d80424               fadd dword ptr [esp]
// 00613182  d94034               fld dword ptr [eax + 0x34]
// 00613185  dec2                 faddp st(2)
// 00613187  d94038               fld dword ptr [eax + 0x38]
// 0061318a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0061318e  dec3                 faddp st(3)
// 00613190  dee3                 fsubrp st(3)
// 00613192  dee3                 fsubrp st(3)
// 00613194  dee3                 fsubrp st(3)
// 00613196  d902                 fld dword ptr [edx]
// 00613198  d8c9                 fmul st(1)
// 0061319a  d9c3                 fld st(3)
// 0061319c  d84a08               fmul dword ptr [edx + 8]
// 0061319f  dec1                 faddp st(1)
// 006131a1  d9c2                 fld st(2)
// 006131a3  d84a04               fmul dword ptr [edx + 4]
// 006131a6  dec1                 faddp st(1)
// 006131a8  d910                 fst dword ptr [eax]
// 006131aa  d902                 fld dword ptr [edx]
// 006131ac  d8c9                 fmul st(1)
// 006131ae  d9c1                 fld st(1)
// 006131b0  d84a04               fmul dword ptr [edx + 4]
// 006131b3  d9ca                 fxch st(2)
// 006131b5  d84a08               fmul dword ptr [edx + 8]
// 006131b8  8b442414             mov eax, dword ptr [esp + 0x14]
// 006131bc  d9cb                 fxch st(3)
// 006131be  dee1                 fsubrp st(1)
// 006131c0  d9cb                 fxch st(3)
// 006131c2  dee1                 fsubrp st(1)
// 006131c4  d9cb                 fxch st(3)
// 006131c6  dee1                 fsubrp st(1)
// 006131c8  d9c9                 fxch st(1)
// 006131ca  d918                 fstp dword ptr [eax]
// 006131cc  d9c9                 fxch st(1)
// 006131ce  d95804               fstp dword ptr [eax + 4]
// 006131d1  d95808               fstp dword ptr [eax + 8]
// 006131d4  83c40c               add esp, 0xc
// 006131d7  c20c00               ret 0xc
// library rbxgs/roc_camera_flight_default_0_5e0bfcd6c544f87f.cpp (function ?computeNormalPerpVel@GeoPair@RBX@@QAEXAAMAAVVector3@G3D@@ABVPairParams@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs roc_camera_flight_default_0_5e0bfcd6c544f87f.cpp
