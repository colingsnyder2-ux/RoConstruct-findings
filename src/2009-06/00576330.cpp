// roc 2009-06 00576330  unit: G3D::BinaryInput  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00576330
//
// 00576330  dd442404             fld qword ptr [esp + 4]
// 00576334  b801000000           mov eax, 1
// 00576339  d9e1                 fabs 
// 0057633b  dc05c0178b00         fadd qword ptr [0x8b17c0]
// 00576341  8405b8c8a300         test byte ptr [0xa3c8b8], al
// 00576347  7513                 jne 0x57635c
// 00576349  0905b8c8a300         or dword ptr [0xa3c8b8], eax
// 0057634f  a144e58900           mov eax, dword ptr [0x89e544]
// 00576354  dd00                 fld qword ptr [eax]
// 00576356  dd1db0c8a300         fstp qword ptr [0xa3c8b0]
// 0057635c  dd05b0c8a300         fld qword ptr [0xa3c8b0]
// 00576362  dde9                 fucomp st(1)
// 00576364  dfe0                 fnstsw ax
// 00576366  f6c444               test ah, 0x44
// 00576369  7a09                 jp 0x576374
// 0057636b  ddd8                 fstp st(0)
// 0057636d  dd0568b88c00         fld qword ptr [0x8cb868]
// 00576373  c3                   ret 
// 00576374  dc0d68b88c00         fmul qword ptr [0x8cb868]
// 0057637a  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?eps@G3D@@YANNN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
