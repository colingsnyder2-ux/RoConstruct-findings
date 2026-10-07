// roc 2012-06 00557030  unit: RBX::NetworkSettings::W4PhysicsReceiveMethod::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00557030
//
// 00557030  64a100000000         mov eax, dword ptr fs:[0]
// 00557036  6aff                 push -1
// 00557038  683edfaa00           push 0xaadf3e
// 0055703d  50                   push eax
// 0055703e  b801000000           mov eax, 1
// 00557043  64892500000000       mov dword ptr fs:[0], esp
// 0055704a  84058428e200         test byte ptr [0xe22884], al
// 00557050  7525                 jne 0x557077
// 00557052  09058428e200         or dword ptr [0xe22884], eax
// 00557058  b9d827e200           mov ecx, 0xe227d8
// 0055705d  c744240800000000     mov dword ptr [esp + 8], 0
// 00557065  e8061c0000           call 0x558c70
// 0055706a  68503eb100           push 0xb13e50
// 0055706f  e881c14200           call 0x9831f5
// 00557074  83c404               add esp, 4
// 00557077  8b0c24               mov ecx, dword ptr [esp]
// 0055707a  b8d827e200           mov eax, 0xe227d8
// 0055707f  64890d00000000       mov dword ptr fs:[0], ecx
// 00557086  83c40c               add esp, 0xc
// 00557089  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
