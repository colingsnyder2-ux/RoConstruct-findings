// roc 2009-12 0097f060  unit: seg_00970000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0097f060
//
// 0097f060  a1e4dbb700           mov eax, dword ptr [0xb7dbe4]
// 0097f065  50                   push eax
// 0097f066  e875b3c6ff           call 0x5ea3e0
// 0097f06b  33c0                 xor eax, eax
// 0097f06d  83c404               add esp, 4
// 0097f070  a3e4dbb700           mov dword ptr [0xb7dbe4], eax
// 0097f075  a3e8dbb700           mov dword ptr [0xb7dbe8], eax
// 0097f07a  a3ecdbb700           mov dword ptr [0xb7dbec], eax
// 0097f07f  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ??__F?ignoreArray@CollisionDetection@G3D@@0V?$Array@VVector3@G3D@@@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
