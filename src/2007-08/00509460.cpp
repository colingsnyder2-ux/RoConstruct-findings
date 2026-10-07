// roc 2007-08 00509460  unit: G3D::GCamera  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00509460
//
// 00509460  dd442404             fld qword ptr [esp + 4]
// 00509464  b801000000           mov eax, 1
// 00509469  840508d18b00         test byte ptr [0x8bd108], al
// 0050946f  d9e1                 fabs 
// 00509471  dc0598317900         fadd qword ptr [0x793198]
// 00509477  7513                 jne 0x50948c
// 00509479  090508d18b00         or dword ptr [0x8bd108], eax
// 0050947f  a164e57700           mov eax, dword ptr [0x77e564]
// 00509484  dd00                 fld qword ptr [eax]
// 00509486  dd1d00d18b00         fstp qword ptr [0x8bd100]
// 0050948c  dd0500d18b00         fld qword ptr [0x8bd100]
// 00509492  dde9                 fucomp st(1)
// 00509494  dfe0                 fnstsw ax
// 00509496  f6c444               test ah, 0x44
// 00509499  7a09                 jp 0x5094a4
// 0050949b  ddd8                 fstp st(0)
// 0050949d  dd05500b7a00         fld qword ptr [0x7a0b50]
// 005094a3  c3                   ret 
// 005094a4  dc0d500b7a00         fmul qword ptr [0x7a0b50]
// 005094aa  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?eps@G3D@@YANNN@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
