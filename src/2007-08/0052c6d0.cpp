// from server: 100% by auto
// roc 2007-08 0052c6d0  unit: seg_00520000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052c6d0
//
// 0052c6d0  64a100000000         mov eax, dword ptr fs:[0]
// 0052c6d6  6aff                 push -1
// 0052c6d8  681e027500           push 0x75021e
// 0052c6dd  50                   push eax
// 0052c6de  b801000000           mov eax, 1
// 0052c6e3  64892500000000       mov dword ptr fs:[0], esp
// 0052c6ea  8405600c8c00         test byte ptr [0x8c0c60], al
// 0052c6f0  7525                 jne 0x52c717
// 0052c6f2  0905600c8c00         or dword ptr [0x8c0c60], eax
// 0052c6f8  b9580c8c00           mov ecx, 0x8c0c58
// 0052c6fd  c744240800000000     mov dword ptr [esp + 8], 0
// 0052c705  e8f68f1f00           call 0x725700
// 0052c70a  68f0927700           push 0x7792f0
// 0052c70f  e80f461000           call 0x630d23
// 0052c714  83c404               add esp, 4
// 0052c717  8b0c24               mov ecx, dword ptr [esp]
// 0052c71a  b8580c8c00           mov eax, 0x8c0c58
// 0052c71f  64890d00000000       mov dword ptr fs:[0], ecx
// 0052c726  83c40c               add esp, 0xc
// 0052c729  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
