// roc 2008-06 006a74a0  unit: CXTPControlComboBoxList  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a74a0
//
// 006a74a0  6aff                 push -1
// 006a74a2  68cef07d00           push 0x7df0ce
// 006a74a7  64a100000000         mov eax, dword ptr fs:[0]
// 006a74ad  50                   push eax
// 006a74ae  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 006a74b3  33c4                 xor eax, esp
// 006a74b5  50                   push eax
// 006a74b6  8d442404             lea eax, [esp + 4]
// 006a74ba  64a300000000         mov dword ptr fs:[0], eax
// 006a74c0  b801000000           mov eax, 1
// 006a74c5  840558e09700         test byte ptr [0x97e058], al
// 006a74cb  7525                 jne 0x6a74f2
// 006a74cd  090558e09700         or dword ptr [0x97e058], eax
// 006a74d3  b94ce09700           mov ecx, 0x97e04c
// 006a74d8  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 006a74e0  e82bf2ffff           call 0x6a6710
// 006a74e5  6870168000           push 0x801670
// 006a74ea  e8c0a2ffff           call 0x6a17af
// 006a74ef  83c404               add esp, 4
// 006a74f2  b84ce09700           mov eax, 0x97e04c
// 006a74f7  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006a74fb  64890d00000000       mov dword ptr fs:[0], ecx
// 006a7502  59                   pop ecx
// 006a7503  83c40c               add esp, 0xc
// 006a7506  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
