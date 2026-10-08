// from server: 100% by auto
// roc 2012-06 00468d90  unit: RBX::CRenderSettings::W4ShadowMode::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00468d90
//
// 00468d90  64a100000000         mov eax, dword ptr fs:[0]
// 00468d96  6aff                 push -1
// 00468d98  68cefba900           push 0xa9fbce
// 00468d9d  50                   push eax
// 00468d9e  b801000000           mov eax, 1
// 00468da3  64892500000000       mov dword ptr fs:[0], esp
// 00468daa  8405cc90e100         test byte ptr [0xe190cc], al
// 00468db0  7525                 jne 0x468dd7
// 00468db2  0905cc90e100         or dword ptr [0xe190cc], eax
// 00468db8  b92090e100           mov ecx, 0xe19020
// 00468dbd  c744240800000000     mov dword ptr [esp + 8], 0
// 00468dc5  e846f2ffff           call 0x468010
// 00468dca  684024b100           push 0xb12440
// 00468dcf  e821a45100           call 0x9831f5
// 00468dd4  83c404               add esp, 4
// 00468dd7  8b0c24               mov ecx, dword ptr [esp]
// 00468dda  b82090e100           mov eax, 0xe19020
// 00468ddf  64890d00000000       mov dword ptr fs:[0], ecx
// 00468de6  83c40c               add esp, 0xc
// 00468de9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
