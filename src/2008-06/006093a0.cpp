// roc 2008-06 006093a0  unit: RBX::Controller::W4ControllerType::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006093a0
//
// 006093a0  64a100000000         mov eax, dword ptr fs:[0]
// 006093a6  6aff                 push -1
// 006093a8  681e897d00           push 0x7d891e
// 006093ad  50                   push eax
// 006093ae  b801000000           mov eax, 1
// 006093b3  64892500000000       mov dword ptr fs:[0], esp
// 006093ba  840588b99700         test byte ptr [0x97b988], al
// 006093c0  7525                 jne 0x6093e7
// 006093c2  090588b99700         or dword ptr [0x97b988], eax
// 006093c8  b9a0b89700           mov ecx, 0x97b8a0
// 006093cd  c744240800000000     mov dword ptr [esp + 8], 0
// 006093d5  e8a6be0000           call 0x615280
// 006093da  68b0018000           push 0x8001b0
// 006093df  e8cb830900           call 0x6a17af
// 006093e4  83c404               add esp, 4
// 006093e7  8b0c24               mov ecx, dword ptr [esp]
// 006093ea  b8a0b89700           mov eax, 0x97b8a0
// 006093ef  64890d00000000       mov dword ptr fs:[0], ecx
// 006093f6  83c40c               add esp, 0xc
// 006093f9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
