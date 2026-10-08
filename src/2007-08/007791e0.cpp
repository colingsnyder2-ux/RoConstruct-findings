// from server: 100% by auto
// roc 2007-08 007791e0  unit: seg_00770000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007791e0
//
// 007791e0  a110fc8b00           mov eax, dword ptr [0x8bfc10]
// 007791e5  50                   push eax
// 007791e6  e82566d8ff           call 0x4ff810
// 007791eb  33c0                 xor eax, eax
// 007791ed  83c404               add esp, 4
// 007791f0  a310fc8b00           mov dword ptr [0x8bfc10], eax
// 007791f5  a314fc8b00           mov dword ptr [0x8bfc14], eax
// 007791fa  a318fc8b00           mov dword ptr [0x8bfc18], eax
// 007791ff  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ??__F?ignoreArray@CollisionDetection@G3D@@0V?$Array@VVector3@G3D@@@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
