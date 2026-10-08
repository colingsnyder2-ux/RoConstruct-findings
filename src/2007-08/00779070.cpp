// from server: 100% by auto
// roc 2007-08 00779070  unit: seg_00770000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779070
//
// 00779070  a138fb8b00           mov eax, dword ptr [0x8bfb38]
// 00779075  50                   push eax
// 00779076  e89567d8ff           call 0x4ff810
// 0077907b  33c0                 xor eax, eax
// 0077907d  83c404               add esp, 4
// 00779080  a338fb8b00           mov dword ptr [0x8bfb38], eax
// 00779085  a33cfb8b00           mov dword ptr [0x8bfb3c], eax
// 0077908a  a340fb8b00           mov dword ptr [0x8bfb40], eax
// 0077908f  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ??__F?ignoreArray@CollisionDetection@G3D@@0V?$Array@VVector3@G3D@@@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
