// roc 2008-06 00565440  unit: RBX::Debugable::W4AssertAction::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00565440
//
// 00565440  64a100000000         mov eax, dword ptr fs:[0]
// 00565446  6aff                 push -1
// 00565448  689ef37c00           push 0x7cf39e
// 0056544d  50                   push eax
// 0056544e  b801000000           mov eax, 1
// 00565453  64892500000000       mov dword ptr fs:[0], esp
// 0056545a  8405a8449700         test byte ptr [0x9744a8], al
// 00565460  7525                 jne 0x565487
// 00565462  0905a8449700         or dword ptr [0x9744a8], eax
// 00565468  b9c0439700           mov ecx, 0x9743c0
// 0056546d  c744240800000000     mov dword ptr [esp + 8], 0
// 00565475  e8f6f8ffff           call 0x564d70
// 0056547a  68a0cf7f00           push 0x7fcfa0
// 0056547f  e82bc31300           call 0x6a17af
// 00565484  83c404               add esp, 4
// 00565487  8b0c24               mov ecx, dword ptr [esp]
// 0056548a  b8c0439700           mov eax, 0x9743c0
// 0056548f  64890d00000000       mov dword ptr fs:[0], ecx
// 00565496  83c40c               add esp, 0xc
// 00565499  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
