// from server: 100% by auto
// roc 2007-08 00779050  unit: seg_00770000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779050
//
// 00779050  a1d4fa8b00           mov eax, dword ptr [0x8bfad4]
// 00779055  50                   push eax
// 00779056  e8b567d8ff           call 0x4ff810
// 0077905b  33c0                 xor eax, eax
// 0077905d  83c404               add esp, 4
// 00779060  a3d4fa8b00           mov dword ptr [0x8bfad4], eax
// 00779065  a3d8fa8b00           mov dword ptr [0x8bfad8], eax
// 0077906a  a3dcfa8b00           mov dword ptr [0x8bfadc], eax
// 0077906f  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ??__F?ignoreArray@CollisionDetection@G3D@@0V?$Array@VVector3@G3D@@@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
