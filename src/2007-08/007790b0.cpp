// from server: 100% by auto
// roc 2007-08 007790b0  unit: seg_00770000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007790b0
//
// 007790b0  a1c0fb8b00           mov eax, dword ptr [0x8bfbc0]
// 007790b5  50                   push eax
// 007790b6  e85567d8ff           call 0x4ff810
// 007790bb  33c0                 xor eax, eax
// 007790bd  83c404               add esp, 4
// 007790c0  a3c0fb8b00           mov dword ptr [0x8bfbc0], eax
// 007790c5  a3c4fb8b00           mov dword ptr [0x8bfbc4], eax
// 007790ca  a3c8fb8b00           mov dword ptr [0x8bfbc8], eax
// 007790cf  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ??__F?ignoreArray@CollisionDetection@G3D@@0V?$Array@VVector3@G3D@@@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
