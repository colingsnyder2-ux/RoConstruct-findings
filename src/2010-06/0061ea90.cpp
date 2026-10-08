// from server: 100% by auto
// roc 2010-06 0061ea90  unit: RBX::Accoutrement  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0061ea90
//
// 0061ea90  64a100000000         mov eax, dword ptr fs:[0]
// 0061ea96  6aff                 push -1
// 0061ea98  68eeac9900           push 0x99acee
// 0061ea9d  50                   push eax
// 0061ea9e  b801000000           mov eax, 1
// 0061eaa3  64892500000000       mov dword ptr fs:[0], esp
// 0061eaaa  8405e8a1c100         test byte ptr [0xc1a1e8], al
// 0061eab0  7525                 jne 0x61ead7
// 0061eab2  0905e8a1c100         or dword ptr [0xc1a1e8], eax
// 0061eab8  b900a1c100           mov ecx, 0xc1a100
// 0061eabd  c744240800000000     mov dword ptr [esp + 8], 0
// 0061eac5  e8a6e1ffff           call 0x61cc70
// 0061eaca  68d02e9e00           push 0x9e2ed0
// 0061eacf  e88f9f1800           call 0x7a8a63
// 0061ead4  83c404               add esp, 4
// 0061ead7  8b0c24               mov ecx, dword ptr [esp]
// 0061eada  b800a1c100           mov eax, 0xc1a100
// 0061eadf  64890d00000000       mov dword ptr fs:[0], ecx
// 0061eae6  83c40c               add esp, 0xc
// 0061eae9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
