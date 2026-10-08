// from server: 100% by auto
// roc 2009-06 00896a00  unit: seg_00890000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896a00
//
// 00896a00  a1d41ca400           mov eax, dword ptr [0xa41cd4]
// 00896a05  50                   push eax
// 00896a06  e88548cdff           call 0x56b290
// 00896a0b  33c0                 xor eax, eax
// 00896a0d  83c404               add esp, 4
// 00896a10  a3d41ca400           mov dword ptr [0xa41cd4], eax
// 00896a15  a3d81ca400           mov dword ptr [0xa41cd8], eax
// 00896a1a  a3dc1ca400           mov dword ptr [0xa41cdc], eax
// 00896a1f  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ??__F?ignoreArray@CollisionDetection@G3D@@0V?$Array@VVector3@G3D@@@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
