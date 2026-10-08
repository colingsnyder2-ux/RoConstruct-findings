// from server: 100% by auto
// roc 2012-06 00556fc0  unit: RBX::NetworkSettings::W4PhysicsReceiveMethod::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00556fc0
//
// 00556fc0  64a100000000         mov eax, dword ptr fs:[0]
// 00556fc6  6aff                 push -1
// 00556fc8  681edfaa00           push 0xaadf1e
// 00556fcd  50                   push eax
// 00556fce  b801000000           mov eax, 1
// 00556fd3  64892500000000       mov dword ptr fs:[0], esp
// 00556fda  8405d427e200         test byte ptr [0xe227d4], al
// 00556fe0  7525                 jne 0x557007
// 00556fe2  0905d427e200         or dword ptr [0xe227d4], eax
// 00556fe8  b92827e200           mov ecx, 0xe22728
// 00556fed  c744240800000000     mov dword ptr [esp + 8], 0
// 00556ff5  e846250400           call 0x599540
// 00556ffa  68603eb100           push 0xb13e60
// 00556fff  e8f1c14200           call 0x9831f5
// 00557004  83c404               add esp, 4
// 00557007  8b0c24               mov ecx, dword ptr [esp]
// 0055700a  b82827e200           mov eax, 0xe22728
// 0055700f  64890d00000000       mov dword ptr fs:[0], ecx
// 00557016  83c40c               add esp, 0xc
// 00557019  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
