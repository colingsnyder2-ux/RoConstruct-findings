// from server: 100% by auto
// roc 2008-06 005ef4c0  unit: RBX::VDecal::?$FactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ef4c0
//
// 005ef4c0  64a100000000         mov eax, dword ptr fs:[0]
// 005ef4c6  6aff                 push -1
// 005ef4c8  682e717d00           push 0x7d712e
// 005ef4cd  50                   push eax
// 005ef4ce  b801000000           mov eax, 1
// 005ef4d3  64892500000000       mov dword ptr fs:[0], esp
// 005ef4da  840570b59700         test byte ptr [0x97b570], al
// 005ef4e0  7525                 jne 0x5ef507
// 005ef4e2  090570b59700         or dword ptr [0x97b570], eax
// 005ef4e8  b988b49700           mov ecx, 0x97b488
// 005ef4ed  c744240800000000     mov dword ptr [esp + 8], 0
// 005ef4f5  e8c605f8ff           call 0x56fac0
// 005ef4fa  6830ff7f00           push 0x7fff30
// 005ef4ff  e8ab220b00           call 0x6a17af
// 005ef504  83c404               add esp, 4
// 005ef507  8b0c24               mov ecx, dword ptr [esp]
// 005ef50a  b888b49700           mov eax, 0x97b488
// 005ef50f  64890d00000000       mov dword ptr fs:[0], ecx
// 005ef516  83c40c               add esp, 0xc
// 005ef519  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
