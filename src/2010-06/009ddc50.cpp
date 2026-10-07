// roc 2010-06 009ddc50  unit: seg_009d0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ddc50
//
// 009ddc50  a19888c000           mov eax, dword ptr [0xc08898]
// 009ddc55  50                   push eax
// 009ddc56  e865fdb6ff           call 0x54d9c0
// 009ddc5b  33c0                 xor eax, eax
// 009ddc5d  83c404               add esp, 4
// 009ddc60  a39888c000           mov dword ptr [0xc08898], eax
// 009ddc65  a39c88c000           mov dword ptr [0xc0889c], eax
// 009ddc6a  a3a088c000           mov dword ptr [0xc088a0], eax
// 009ddc6f  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ??__F?ignoreArray@CollisionDetection@G3D@@0V?$Array@VVector3@G3D@@@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
