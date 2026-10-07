// roc 2010-06 009de000  unit: seg_009d0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de000
//
// 009de000  a14491c000           mov eax, dword ptr [0xc09144]
// 009de005  50                   push eax
// 009de006  e8b5f9b6ff           call 0x54d9c0
// 009de00b  33c0                 xor eax, eax
// 009de00d  83c404               add esp, 4
// 009de010  a34491c000           mov dword ptr [0xc09144], eax
// 009de015  a34891c000           mov dword ptr [0xc09148], eax
// 009de01a  a34c91c000           mov dword ptr [0xc0914c], eax
// 009de01f  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ??__F?ignoreArray@CollisionDetection@G3D@@0V?$Array@VVector3@G3D@@@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
