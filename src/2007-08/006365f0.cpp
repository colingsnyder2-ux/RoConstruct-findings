// roc 2007-08 006365f0  unit: CXTPControlComboBoxList  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006365f0
//
// 006365f0  6aff                 push -1
// 006365f2  68eedc7500           push 0x75dcee
// 006365f7  64a100000000         mov eax, dword ptr fs:[0]
// 006365fd  50                   push eax
// 006365fe  a188518b00           mov eax, dword ptr [0x8b5188]
// 00636603  33c4                 xor eax, esp
// 00636605  50                   push eax
// 00636606  8d442404             lea eax, [esp + 4]
// 0063660a  64a300000000         mov dword ptr fs:[0], eax
// 00636610  b801000000           mov eax, 1
// 00636615  8405d0868c00         test byte ptr [0x8c86d0], al
// 0063661b  7525                 jne 0x636642
// 0063661d  0905d0868c00         or dword ptr [0x8c86d0], eax
// 00636623  b9c4868c00           mov ecx, 0x8c86c4
// 00636628  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00636630  e87bf3ffff           call 0x6359b0
// 00636635  6870ca7700           push 0x77ca70
// 0063663a  e8e4a6ffff           call 0x630d23
// 0063663f  83c404               add esp, 4
// 00636642  b8c4868c00           mov eax, 0x8c86c4
// 00636647  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0063664b  64890d00000000       mov dword ptr fs:[0], ecx
// 00636652  59                   pop ecx
// 00636653  83c40c               add esp, 0xc
// 00636656  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
