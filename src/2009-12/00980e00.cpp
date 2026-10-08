// roc 2009-12 00980e00  unit: seg_00980000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00980e00
//
// 00980e00  a16030b800           mov eax, dword ptr [0xb83060]
// 00980e05  50                   push eax
// 00980e06  e8d595c6ff           call 0x5ea3e0
// 00980e0b  33c0                 xor eax, eax
// 00980e0d  83c404               add esp, 4
// 00980e10  a36030b800           mov dword ptr [0xb83060], eax
// 00980e15  a36430b800           mov dword ptr [0xb83064], eax
// 00980e1a  a36830b800           mov dword ptr [0xb83068], eax
// 00980e1f  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ??__F?ignoreArray@CollisionDetection@G3D@@0V?$Array@VVector3@G3D@@@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
