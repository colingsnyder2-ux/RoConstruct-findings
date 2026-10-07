// roc 2008-06 007fc590  unit: seg_007f0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fc590
//
// 007fc590  a1c8289700           mov eax, dword ptr [0x9728c8]
// 007fc595  50                   push eax
// 007fc596  e885b7d0ff           call 0x507d20
// 007fc59b  33c0                 xor eax, eax
// 007fc59d  83c404               add esp, 4
// 007fc5a0  a3c8289700           mov dword ptr [0x9728c8], eax
// 007fc5a5  a3cc289700           mov dword ptr [0x9728cc], eax
// 007fc5aa  a3d0289700           mov dword ptr [0x9728d0], eax
// 007fc5af  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ??__F?ignoreArray@CollisionDetection@G3D@@0V?$Array@VVector3@G3D@@@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
