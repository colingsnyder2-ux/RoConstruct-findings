// from server: 100% by auto
// roc 2007-08 005dc0d0  unit: RBX::Feature::W4InOut::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dc0d0
//
// 005dc0d0  64a100000000         mov eax, dword ptr fs:[0]
// 005dc0d6  6aff                 push -1
// 005dc0d8  681ea77500           push 0x75a71e
// 005dc0dd  50                   push eax
// 005dc0de  b801000000           mov eax, 1
// 005dc0e3  64892500000000       mov dword ptr fs:[0], esp
// 005dc0ea  8405706c8c00         test byte ptr [0x8c6c70], al
// 005dc0f0  7525                 jne 0x5dc117
// 005dc0f2  0905706c8c00         or dword ptr [0x8c6c70], eax
// 005dc0f8  b9d86b8c00           mov ecx, 0x8c6bd8
// 005dc0fd  c744240800000000     mov dword ptr [esp + 8], 0
// 005dc105  e886fdffff           call 0x5dbe90
// 005dc10a  68d0be7700           push 0x77bed0
// 005dc10f  e80f4c0500           call 0x630d23
// 005dc114  83c404               add esp, 4
// 005dc117  8b0c24               mov ecx, dword ptr [esp]
// 005dc11a  b8d86b8c00           mov eax, 0x8c6bd8
// 005dc11f  64890d00000000       mov dword ptr fs:[0], ecx
// 005dc126  83c40c               add esp, 0xc
// 005dc129  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
