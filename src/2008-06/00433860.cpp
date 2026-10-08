// from server: 100% by auto
// roc 2008-06 00433860  unit: CClassTreeView  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00433860
//
// 00433860  64a100000000         mov eax, dword ptr fs:[0]
// 00433866  6aff                 push -1
// 00433868  689efe7b00           push 0x7bfe9e
// 0043386d  50                   push eax
// 0043386e  b801000000           mov eax, 1
// 00433873  64892500000000       mov dword ptr fs:[0], esp
// 0043387a  8405a0d19600         test byte ptr [0x96d1a0], al
// 00433880  7525                 jne 0x4338a7
// 00433882  0905a0d19600         or dword ptr [0x96d1a0], eax
// 00433888  b994d19600           mov ecx, 0x96d194
// 0043388d  c744240800000000     mov dword ptr [esp + 8], 0
// 00433895  e8d6f71200           call 0x563070
// 0043389a  68e0a97f00           push 0x7fa9e0
// 0043389f  e80bdf2600           call 0x6a17af
// 004338a4  83c404               add esp, 4
// 004338a7  8b0c24               mov ecx, dword ptr [esp]
// 004338aa  b894d19600           mov eax, 0x96d194
// 004338af  64890d00000000       mov dword ptr fs:[0], ecx
// 004338b6  83c40c               add esp, 0xc
// 004338b9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
