// from server: 100% by auto
// roc 2009-06 005ef4e0  unit: RBX::PartInstance::W4FormFactor::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ef4e0
//
// 005ef4e0  64a100000000         mov eax, dword ptr fs:[0]
// 005ef4e6  6aff                 push -1
// 005ef4e8  681e598600           push 0x86591e
// 005ef4ed  50                   push eax
// 005ef4ee  b801000000           mov eax, 1
// 005ef4f3  64892500000000       mov dword ptr fs:[0], esp
// 005ef4fa  8405549fa400         test byte ptr [0xa49f54], al
// 005ef500  7525                 jne 0x5ef527
// 005ef502  0905549fa400         or dword ptr [0xa49f54], eax
// 005ef508  b9689ea400           mov ecx, 0xa49e68
// 005ef50d  c744240800000000     mov dword ptr [esp + 8], 0
// 005ef515  e896770b00           call 0x6a6cb0
// 005ef51a  68408a8900           push 0x898a40
// 005ef51f  e8d7a51200           call 0x719afb
// 005ef524  83c404               add esp, 4
// 005ef527  8b0c24               mov ecx, dword ptr [esp]
// 005ef52a  b8689ea400           mov eax, 0xa49e68
// 005ef52f  64890d00000000       mov dword ptr fs:[0], ecx
// 005ef536  83c40c               add esp, 0xc
// 005ef539  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
