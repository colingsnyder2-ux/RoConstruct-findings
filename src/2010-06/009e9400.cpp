// from server: 100% by auto
// roc 2010-06 009e9400  unit: seg_009e0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e9400
//
// 009e9400  a1accfc200           mov eax, dword ptr [0xc2cfac]
// 009e9405  50                   push eax
// 009e9406  e8b545b6ff           call 0x54d9c0
// 009e940b  33c0                 xor eax, eax
// 009e940d  83c404               add esp, 4
// 009e9410  a3accfc200           mov dword ptr [0xc2cfac], eax
// 009e9415  a3b0cfc200           mov dword ptr [0xc2cfb0], eax
// 009e941a  a3b4cfc200           mov dword ptr [0xc2cfb4], eax
// 009e941f  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ??__F?ignoreArray@CollisionDetection@G3D@@0V?$Array@VVector3@G3D@@@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
