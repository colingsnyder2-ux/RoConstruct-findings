// from server: 100% by auto
// roc 2009-06 00896ab0  unit: seg_00890000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896ab0
//
// 00896ab0  a1a02ba400           mov eax, dword ptr [0xa42ba0]
// 00896ab5  50                   push eax
// 00896ab6  e8d547cdff           call 0x56b290
// 00896abb  33c0                 xor eax, eax
// 00896abd  83c404               add esp, 4
// 00896ac0  a3a02ba400           mov dword ptr [0xa42ba0], eax
// 00896ac5  a3a42ba400           mov dword ptr [0xa42ba4], eax
// 00896aca  a3a82ba400           mov dword ptr [0xa42ba8], eax
// 00896acf  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ??__F?ignoreArray@CollisionDetection@G3D@@0V?$Array@VVector3@G3D@@@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
