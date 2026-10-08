// from server: 100% by auto
// roc 2010-06 009ddc90  unit: seg_009d0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ddc90
//
// 009ddc90  a1fc88c000           mov eax, dword ptr [0xc088fc]
// 009ddc95  50                   push eax
// 009ddc96  e825fdb6ff           call 0x54d9c0
// 009ddc9b  33c0                 xor eax, eax
// 009ddc9d  83c404               add esp, 4
// 009ddca0  a3fc88c000           mov dword ptr [0xc088fc], eax
// 009ddca5  a30089c000           mov dword ptr [0xc08900], eax
// 009ddcaa  a30489c000           mov dword ptr [0xc08904], eax
// 009ddcaf  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ??__F?ignoreArray@CollisionDetection@G3D@@0V?$Array@VVector3@G3D@@@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
