// roc 2010-06 0044a9d0  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0044a9d0
//
// 0044a9d0  64a100000000         mov eax, dword ptr fs:[0]
// 0044a9d6  6aff                 push -1
// 0044a9d8  68fe159800           push 0x9815fe
// 0044a9dd  50                   push eax
// 0044a9de  b801000000           mov eax, 1
// 0044a9e3  64892500000000       mov dword ptr fs:[0], esp
// 0044a9ea  84053c0dc000         test byte ptr [0xc00d3c], al
// 0044a9f0  7525                 jne 0x44aa17
// 0044a9f2  09053c0dc000         or dword ptr [0xc00d3c], eax
// 0044a9f8  b9500cc000           mov ecx, 0xc00c50
// 0044a9fd  c744240800000000     mov dword ptr [esp + 8], 0
// 0044aa05  e8a6efffff           call 0x4499b0
// 0044aa0a  6830b89d00           push 0x9db830
// 0044aa0f  e84fe03500           call 0x7a8a63
// 0044aa14  83c404               add esp, 4
// 0044aa17  8b0c24               mov ecx, dword ptr [esp]
// 0044aa1a  b8500cc000           mov eax, 0xc00c50
// 0044aa1f  64890d00000000       mov dword ptr fs:[0], ecx
// 0044aa26  83c40c               add esp, 0xc
// 0044aa29  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
