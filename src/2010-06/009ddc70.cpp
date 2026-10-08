// from server: 100% by auto
// roc 2010-06 009ddc70  unit: seg_009d0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ddc70
//
// 009ddc70  a1ec87c000           mov eax, dword ptr [0xc087ec]
// 009ddc75  50                   push eax
// 009ddc76  e845fdb6ff           call 0x54d9c0
// 009ddc7b  33c0                 xor eax, eax
// 009ddc7d  83c404               add esp, 4
// 009ddc80  a3ec87c000           mov dword ptr [0xc087ec], eax
// 009ddc85  a3f087c000           mov dword ptr [0xc087f0], eax
// 009ddc8a  a3f487c000           mov dword ptr [0xc087f4], eax
// 009ddc8f  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ??__F?ignoreArray@CollisionDetection@G3D@@0V?$Array@VVector3@G3D@@@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
