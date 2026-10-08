// from server: 100% by auto
// roc 2007-08 00779220  unit: seg_00770000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779220
//
// 00779220  a15cfc8b00           mov eax, dword ptr [0x8bfc5c]
// 00779225  50                   push eax
// 00779226  e8e565d8ff           call 0x4ff810
// 0077922b  33c0                 xor eax, eax
// 0077922d  83c404               add esp, 4
// 00779230  a35cfc8b00           mov dword ptr [0x8bfc5c], eax
// 00779235  a360fc8b00           mov dword ptr [0x8bfc60], eax
// 0077923a  a364fc8b00           mov dword ptr [0x8bfc64], eax
// 0077923f  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ??__F?ignoreArray@CollisionDetection@G3D@@0V?$Array@VVector3@G3D@@@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
