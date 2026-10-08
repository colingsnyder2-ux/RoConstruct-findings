// from server: 100% by auto
// roc 2012-06 0052a6a0  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0052a6a0
//
// 0052a6a0  64a100000000         mov eax, dword ptr fs:[0]
// 0052a6a6  6aff                 push -1
// 0052a6a8  68feb5aa00           push 0xaab5fe
// 0052a6ad  50                   push eax
// 0052a6ae  b801000000           mov eax, 1
// 0052a6b3  64892500000000       mov dword ptr fs:[0], esp
// 0052a6ba  840524e4e100         test byte ptr [0xe1e424], al
// 0052a6c0  7525                 jne 0x52a6e7
// 0052a6c2  090524e4e100         or dword ptr [0xe1e424], eax
// 0052a6c8  b978e3e100           mov ecx, 0xe1e378
// 0052a6cd  c744240800000000     mov dword ptr [esp + 8], 0
// 0052a6d5  e816feffff           call 0x52a4f0
// 0052a6da  68d031b100           push 0xb131d0
// 0052a6df  e8118b4500           call 0x9831f5
// 0052a6e4  83c404               add esp, 4
// 0052a6e7  8b0c24               mov ecx, dword ptr [esp]
// 0052a6ea  b878e3e100           mov eax, 0xe1e378
// 0052a6ef  64890d00000000       mov dword ptr fs:[0], ecx
// 0052a6f6  83c40c               add esp, 0xc
// 0052a6f9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
