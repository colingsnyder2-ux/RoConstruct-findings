// from server: 100% by auto
// roc 2007-08 00779090  unit: seg_00770000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779090
//
// 00779090  a144fb8b00           mov eax, dword ptr [0x8bfb44]
// 00779095  50                   push eax
// 00779096  e87567d8ff           call 0x4ff810
// 0077909b  33c0                 xor eax, eax
// 0077909d  83c404               add esp, 4
// 007790a0  a344fb8b00           mov dword ptr [0x8bfb44], eax
// 007790a5  a348fb8b00           mov dword ptr [0x8bfb48], eax
// 007790aa  a34cfb8b00           mov dword ptr [0x8bfb4c], eax
// 007790af  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ??__F?ignoreArray@CollisionDetection@G3D@@0V?$Array@VVector3@G3D@@@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
