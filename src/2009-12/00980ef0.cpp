// roc 2009-12 00980ef0  unit: seg_00980000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00980ef0
//
// 00980ef0  a1d840b800           mov eax, dword ptr [0xb840d8]
// 00980ef5  50                   push eax
// 00980ef6  e8e594c6ff           call 0x5ea3e0
// 00980efb  33c0                 xor eax, eax
// 00980efd  83c404               add esp, 4
// 00980f00  a3d840b800           mov dword ptr [0xb840d8], eax
// 00980f05  a3dc40b800           mov dword ptr [0xb840dc], eax
// 00980f0a  a3e040b800           mov dword ptr [0xb840e0], eax
// 00980f0f  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ??__F?ignoreArray@CollisionDetection@G3D@@0V?$Array@VVector3@G3D@@@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
