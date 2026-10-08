// from server: 100% by auto
// roc 2010-06 009de040  unit: seg_009d0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de040
//
// 009de040  a1f891c000           mov eax, dword ptr [0xc091f8]
// 009de045  50                   push eax
// 009de046  e875f9b6ff           call 0x54d9c0
// 009de04b  33c0                 xor eax, eax
// 009de04d  83c404               add esp, 4
// 009de050  a3f891c000           mov dword ptr [0xc091f8], eax
// 009de055  a3fc91c000           mov dword ptr [0xc091fc], eax
// 009de05a  a30092c000           mov dword ptr [0xc09200], eax
// 009de05f  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ??__F?ignoreArray@CollisionDetection@G3D@@0V?$Array@VVector3@G3D@@@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
