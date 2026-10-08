// from server: 100% by auto
// roc 2008-06 007fd3c0  unit: seg_007f0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd3c0
//
// 007fd3c0  a114529700           mov eax, dword ptr [0x975214]
// 007fd3c5  50                   push eax
// 007fd3c6  e855a9d0ff           call 0x507d20
// 007fd3cb  33c0                 xor eax, eax
// 007fd3cd  83c404               add esp, 4
// 007fd3d0  a314529700           mov dword ptr [0x975214], eax
// 007fd3d5  a318529700           mov dword ptr [0x975218], eax
// 007fd3da  a31c529700           mov dword ptr [0x97521c], eax
// 007fd3df  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ??__F?ignoreArray@CollisionDetection@G3D@@0V?$Array@VVector3@G3D@@@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
