// roc 2012-06 00469030  unit: RBX::CRenderSettings::W4ShadowMode::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00469030
//
// 00469030  64a100000000         mov eax, dword ptr fs:[0]
// 00469036  6aff                 push -1
// 00469038  688efca900           push 0xa9fc8e
// 0046903d  50                   push eax
// 0046903e  b801000000           mov eax, 1
// 00469043  64892500000000       mov dword ptr fs:[0], esp
// 0046904a  8405ec94e100         test byte ptr [0xe194ec], al
// 00469050  7525                 jne 0x469077
// 00469052  0905ec94e100         or dword ptr [0xe194ec], eax
// 00469058  b94094e100           mov ecx, 0xe19440
// 0046905d  c744240800000000     mov dword ptr [esp + 8], 0
// 00469065  e8f6f1ffff           call 0x468260
// 0046906a  68e023b100           push 0xb123e0
// 0046906f  e881a15100           call 0x9831f5
// 00469074  83c404               add esp, 4
// 00469077  8b0c24               mov ecx, dword ptr [esp]
// 0046907a  b84094e100           mov eax, 0xe19440
// 0046907f  64890d00000000       mov dword ptr fs:[0], ecx
// 00469086  83c40c               add esp, 0xc
// 00469089  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
