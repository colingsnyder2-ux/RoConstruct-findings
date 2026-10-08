// from server: 100% by auto
// roc 2007-08 00779030  unit: seg_00770000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779030
//
// 00779030  a1c8fa8b00           mov eax, dword ptr [0x8bfac8]
// 00779035  50                   push eax
// 00779036  e8d567d8ff           call 0x4ff810
// 0077903b  33c0                 xor eax, eax
// 0077903d  83c404               add esp, 4
// 00779040  a3c8fa8b00           mov dword ptr [0x8bfac8], eax
// 00779045  a3ccfa8b00           mov dword ptr [0x8bfacc], eax
// 0077904a  a3d0fa8b00           mov dword ptr [0x8bfad0], eax
// 0077904f  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ??__F?ignoreArray@CollisionDetection@G3D@@0V?$Array@VVector3@G3D@@@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
