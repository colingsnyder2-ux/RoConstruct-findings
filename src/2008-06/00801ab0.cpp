// roc 2008-06 00801ab0  unit: seg_00800000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801ab0
//
// 00801ab0  a1e4f69700           mov eax, dword ptr [0x97f6e4]
// 00801ab5  50                   push eax
// 00801ab6  e86562d0ff           call 0x507d20
// 00801abb  33c0                 xor eax, eax
// 00801abd  83c404               add esp, 4
// 00801ac0  a3e4f69700           mov dword ptr [0x97f6e4], eax
// 00801ac5  a3e8f69700           mov dword ptr [0x97f6e8], eax
// 00801aca  a3ecf69700           mov dword ptr [0x97f6ec], eax
// 00801acf  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ??__F?ignoreArray@CollisionDetection@G3D@@0V?$Array@VVector3@G3D@@@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
