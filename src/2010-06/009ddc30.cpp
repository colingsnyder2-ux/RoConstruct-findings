// from server: 100% by auto
// roc 2010-06 009ddc30  unit: seg_009d0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ddc30
//
// 009ddc30  a1a488c000           mov eax, dword ptr [0xc088a4]
// 009ddc35  50                   push eax
// 009ddc36  e885fdb6ff           call 0x54d9c0
// 009ddc3b  33c0                 xor eax, eax
// 009ddc3d  83c404               add esp, 4
// 009ddc40  a3a488c000           mov dword ptr [0xc088a4], eax
// 009ddc45  a3a888c000           mov dword ptr [0xc088a8], eax
// 009ddc4a  a3ac88c000           mov dword ptr [0xc088ac], eax
// 009ddc4f  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ??__F?ignoreArray@CollisionDetection@G3D@@0V?$Array@VVector3@G3D@@@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
