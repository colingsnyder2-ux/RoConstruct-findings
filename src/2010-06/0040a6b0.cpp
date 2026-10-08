// from server: 100% by auto
// roc 2010-06 0040a6b0  unit: RBX::Reflection::ClassDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040a6b0
//
// 0040a6b0  64a100000000         mov eax, dword ptr fs:[0]
// 0040a6b6  6aff                 push -1
// 0040a6b8  688e629900           push 0x99628e
// 0040a6bd  50                   push eax
// 0040a6be  b801000000           mov eax, 1
// 0040a6c3  64892500000000       mov dword ptr fs:[0], esp
// 0040a6ca  8405d0fcbf00         test byte ptr [0xbffcd0], al
// 0040a6d0  7525                 jne 0x40a6f7
// 0040a6d2  0905d0fcbf00         or dword ptr [0xbffcd0], eax
// 0040a6d8  b9d8fbbf00           mov ecx, 0xbffbd8
// 0040a6dd  c744240800000000     mov dword ptr [esp + 8], 0
// 0040a6e5  e866051c00           call 0x5cac50
// 0040a6ea  68c0aa9d00           push 0x9daac0
// 0040a6ef  e86fe33900           call 0x7a8a63
// 0040a6f4  83c404               add esp, 4
// 0040a6f7  8b0c24               mov ecx, dword ptr [esp]
// 0040a6fa  b8d8fbbf00           mov eax, 0xbffbd8
// 0040a6ff  64890d00000000       mov dword ptr fs:[0], ecx
// 0040a706  83c40c               add esp, 0xc
// 0040a709  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
