// roc 2010-06 009dc150  unit: seg_009d0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dc150
//
// 009dc150  a1ec3cc000           mov eax, dword ptr [0xc03cec]
// 009dc155  50                   push eax
// 009dc156  e86518b7ff           call 0x54d9c0
// 009dc15b  33c0                 xor eax, eax
// 009dc15d  83c404               add esp, 4
// 009dc160  a3ec3cc000           mov dword ptr [0xc03cec], eax
// 009dc165  a3f03cc000           mov dword ptr [0xc03cf0], eax
// 009dc16a  a3f43cc000           mov dword ptr [0xc03cf4], eax
// 009dc16f  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ??__F?ignoreArray@CollisionDetection@G3D@@0V?$Array@VVector3@G3D@@@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
