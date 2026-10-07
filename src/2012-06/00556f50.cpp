// roc 2012-06 00556f50  unit: RBX::NetworkSettings::W4PhysicsReceiveMethod::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00556f50
//
// 00556f50  64a100000000         mov eax, dword ptr fs:[0]
// 00556f56  6aff                 push -1
// 00556f58  68fedeaa00           push 0xaadefe
// 00556f5d  50                   push eax
// 00556f5e  b801000000           mov eax, 1
// 00556f63  64892500000000       mov dword ptr fs:[0], esp
// 00556f6a  84052427e200         test byte ptr [0xe22724], al
// 00556f70  7525                 jne 0x556f97
// 00556f72  09052427e200         or dword ptr [0xe22724], eax
// 00556f78  b97826e200           mov ecx, 0xe22678
// 00556f7d  c744240800000000     mov dword ptr [esp + 8], 0
// 00556f85  e8161f0000           call 0x558ea0
// 00556f8a  68703eb100           push 0xb13e70
// 00556f8f  e861c24200           call 0x9831f5
// 00556f94  83c404               add esp, 4
// 00556f97  8b0c24               mov ecx, dword ptr [esp]
// 00556f9a  b87826e200           mov eax, 0xe22678
// 00556f9f  64890d00000000       mov dword ptr fs:[0], ecx
// 00556fa6  83c40c               add esp, 0xc
// 00556fa9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
