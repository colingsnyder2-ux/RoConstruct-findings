// roc 2010-06 007b49a0  unit: CXTPControlComboBoxList  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b49a0
//
// 007b49a0  6aff                 push -1
// 007b49a2  68aeef9a00           push 0x9aefae
// 007b49a7  64a100000000         mov eax, dword ptr fs:[0]
// 007b49ad  50                   push eax
// 007b49ae  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007b49b3  33c4                 xor eax, esp
// 007b49b5  50                   push eax
// 007b49b6  8d442404             lea eax, [esp + 4]
// 007b49ba  64a300000000         mov dword ptr fs:[0], eax
// 007b49c0  b801000000           mov eax, 1
// 007b49c5  8405d054c200         test byte ptr [0xc254d0], al
// 007b49cb  7525                 jne 0x7b49f2
// 007b49cd  0905d054c200         or dword ptr [0xc254d0], eax
// 007b49d3  b9c454c200           mov ecx, 0xc254c4
// 007b49d8  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 007b49e0  e83bf2ffff           call 0x7b3c20
// 007b49e5  68008f9e00           push 0x9e8f00
// 007b49ea  e87440ffff           call 0x7a8a63
// 007b49ef  83c404               add esp, 4
// 007b49f2  b8c454c200           mov eax, 0xc254c4
// 007b49f7  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007b49fb  64890d00000000       mov dword ptr fs:[0], ecx
// 007b4a02  59                   pop ecx
// 007b4a03  83c40c               add esp, 0xc
// 007b4a06  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
