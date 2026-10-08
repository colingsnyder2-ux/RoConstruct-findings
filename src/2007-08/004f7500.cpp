// from server: 100% by auto
// roc 2007-08 004f7500  unit: seg_004f0000  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f7500
//
// 004f7500  83ec0c               sub esp, 0xc
// 004f7503  8b442414             mov eax, dword ptr [esp + 0x14]
// 004f7507  d900                 fld dword ptr [eax]
// 004f7509  d86124               fsub dword ptr [ecx + 0x24]
// 004f750c  d91c24               fstp dword ptr [esp]
// 004f750f  d94004               fld dword ptr [eax + 4]
// 004f7512  d86128               fsub dword ptr [ecx + 0x28]
// 004f7515  d95c2404             fstp dword ptr [esp + 4]
// 004f7519  d94008               fld dword ptr [eax + 8]
// 004f751c  8b442410             mov eax, dword ptr [esp + 0x10]
// 004f7520  d8612c               fsub dword ptr [ecx + 0x2c]
// 004f7523  d95c2408             fstp dword ptr [esp + 8]
// 004f7527  d9410c               fld dword ptr [ecx + 0xc]
// 004f752a  d9442404             fld dword ptr [esp + 4]
// 004f752e  d9c0                 fld st(0)
// 004f7530  deca                 fmulp st(2)
// 004f7532  d901                 fld dword ptr [ecx]
// 004f7534  d90424               fld dword ptr [esp]
// 004f7537  d9c0                 fld st(0)
// 004f7539  deca                 fmulp st(2)
// 004f753b  d9cb                 fxch st(3)
// 004f753d  dec1                 faddp st(1)
// 004f753f  d94118               fld dword ptr [ecx + 0x18]
// 004f7542  d9442408             fld dword ptr [esp + 8]
// 004f7546  d9c0                 fld st(0)
// 004f7548  deca                 fmulp st(2)
// 004f754a  d9ca                 fxch st(2)
// 004f754c  dec1                 faddp st(1)
// 004f754e  d918                 fstp dword ptr [eax]
// 004f7550  d94110               fld dword ptr [ecx + 0x10]
// 004f7553  d8ca                 fmul st(2)
// 004f7555  d94104               fld dword ptr [ecx + 4]
// 004f7558  d8cc                 fmul st(4)
// 004f755a  dec1                 faddp st(1)
// 004f755c  d9411c               fld dword ptr [ecx + 0x1c]
// 004f755f  d8ca                 fmul st(2)
// 004f7561  dec1                 faddp st(1)
// 004f7563  d95804               fstp dword ptr [eax + 4]
// 004f7566  d94114               fld dword ptr [ecx + 0x14]
// 004f7569  deca                 fmulp st(2)
// 004f756b  d94108               fld dword ptr [ecx + 8]
// 004f756e  decb                 fmulp st(3)
// 004f7570  d9c9                 fxch st(1)
// 004f7572  dec2                 faddp st(2)
// 004f7574  d84920               fmul dword ptr [ecx + 0x20]
// 004f7577  dec1                 faddp st(1)
// 004f7579  d95808               fstp dword ptr [eax + 8]
// 004f757c  83c40c               add esp, 0xc
// 004f757f  c20800               ret 8
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?pointToObjectSpace@CoordinateFrame@G3D@@QBE?AVVector3@2@ABV32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
