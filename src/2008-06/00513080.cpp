// roc 2008-06 00513080  unit: G3D::GCamera  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00513080
//
// 00513080  dd442404             fld qword ptr [esp + 4]
// 00513084  b801000000           mov eax, 1
// 00513089  d9e1                 fabs 
// 0051308b  dc0538128100         fadd qword ptr [0x811238]
// 00513091  840520f09600         test byte ptr [0x96f020], al
// 00513097  7513                 jne 0x5130ac
// 00513099  090520f09600         or dword ptr [0x96f020], eax
// 0051309f  a1ac248000           mov eax, dword ptr [0x8024ac]
// 005130a4  dd00                 fld qword ptr [eax]
// 005130a6  dd1d18f09600         fstp qword ptr [0x96f018]
// 005130ac  dd0518f09600         fld qword ptr [0x96f018]
// 005130b2  dde9                 fucomp st(1)
// 005130b4  dfe0                 fnstsw ax
// 005130b6  f6c444               test ah, 0x44
// 005130b9  7a09                 jp 0x5130c4
// 005130bb  ddd8                 fstp st(0)
// 005130bd  dd0510888200         fld qword ptr [0x828810]
// 005130c3  c3                   ret 
// 005130c4  dc0d10888200         fmul qword ptr [0x828810]
// 005130ca  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?eps@G3D@@YANNN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
