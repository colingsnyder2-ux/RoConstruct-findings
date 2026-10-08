// from server: 100% by auto
// roc 2007-08 00578c40  unit: RBX::VPartInstance::?$BoundFuncDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00578c40
//
// 00578c40  64a100000000         mov eax, dword ptr fs:[0]
// 00578c46  6aff                 push -1
// 00578c48  681e547500           push 0x75541e
// 00578c4d  50                   push eax
// 00578c4e  b801000000           mov eax, 1
// 00578c53  64892500000000       mov dword ptr fs:[0], esp
// 00578c5a  8405002d8c00         test byte ptr [0x8c2d00], al
// 00578c60  7525                 jne 0x578c87
// 00578c62  0905002d8c00         or dword ptr [0x8c2d00], eax
// 00578c68  b9682c8c00           mov ecx, 0x8c2c68
// 00578c6d  c744240800000000     mov dword ptr [esp + 8], 0
// 00578c75  e896a90600           call 0x5e3610
// 00578c7a  68b0a37700           push 0x77a3b0
// 00578c7f  e89f800b00           call 0x630d23
// 00578c84  83c404               add esp, 4
// 00578c87  8b0c24               mov ecx, dword ptr [esp]
// 00578c8a  b8682c8c00           mov eax, 0x8c2c68
// 00578c8f  64890d00000000       mov dword ptr fs:[0], ecx
// 00578c96  83c40c               add esp, 0xc
// 00578c99  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
