// roc 2007-08 0077ce20  unit: seg_00770000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077ce20
//
// 0077ce20  a1d89b8c00           mov eax, dword ptr [0x8c9bd8]
// 0077ce25  50                   push eax
// 0077ce26  e8e529d8ff           call 0x4ff810
// 0077ce2b  33c0                 xor eax, eax
// 0077ce2d  83c404               add esp, 4
// 0077ce30  a3d89b8c00           mov dword ptr [0x8c9bd8], eax
// 0077ce35  a3dc9b8c00           mov dword ptr [0x8c9bdc], eax
// 0077ce3a  a3e09b8c00           mov dword ptr [0x8c9be0], eax
// 0077ce3f  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ??__F?ignoreArray@CollisionDetection@G3D@@0V?$Array@VVector3@G3D@@@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
