// roc 2009-06 00894fa0  unit: seg_00890000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00894fa0
//
// 00894fa0  a134d4a300           mov eax, dword ptr [0xa3d434]
// 00894fa5  50                   push eax
// 00894fa6  e8e562cdff           call 0x56b290
// 00894fab  33c0                 xor eax, eax
// 00894fad  83c404               add esp, 4
// 00894fb0  a334d4a300           mov dword ptr [0xa3d434], eax
// 00894fb5  a338d4a300           mov dword ptr [0xa3d438], eax
// 00894fba  a33cd4a300           mov dword ptr [0xa3d43c], eax
// 00894fbf  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ??__F?ignoreArray@CollisionDetection@G3D@@0V?$Array@VVector3@G3D@@@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
