// from server: 100% by auto
// roc 2010-06 009ddc10  unit: seg_009d0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ddc10
//
// 009ddc10  a1e087c000           mov eax, dword ptr [0xc087e0]
// 009ddc15  50                   push eax
// 009ddc16  e8a5fdb6ff           call 0x54d9c0
// 009ddc1b  33c0                 xor eax, eax
// 009ddc1d  83c404               add esp, 4
// 009ddc20  a3e087c000           mov dword ptr [0xc087e0], eax
// 009ddc25  a3e487c000           mov dword ptr [0xc087e4], eax
// 009ddc2a  a3e887c000           mov dword ptr [0xc087e8], eax
// 009ddc2f  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ??__F?ignoreArray@CollisionDetection@G3D@@0V?$Array@VVector3@G3D@@@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
