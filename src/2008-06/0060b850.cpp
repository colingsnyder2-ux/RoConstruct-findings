// from server: 100% by auto
// roc 2008-06 0060b850  unit: RBX::Feature::W4InOut::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060b850
//
// 0060b850  64a100000000         mov eax, dword ptr fs:[0]
// 0060b856  6aff                 push -1
// 0060b858  688e8a7d00           push 0x7d8a8e
// 0060b85d  50                   push eax
// 0060b85e  b801000000           mov eax, 1
// 0060b863  64892500000000       mov dword ptr fs:[0], esp
// 0060b86a  8405a0bd9700         test byte ptr [0x97bda0], al
// 0060b870  7525                 jne 0x60b897
// 0060b872  0905a0bd9700         or dword ptr [0x97bda0], eax
// 0060b878  b9b8bc9700           mov ecx, 0x97bcb8
// 0060b87d  c744240800000000     mov dword ptr [esp + 8], 0
// 0060b885  e846fcffff           call 0x60b4d0
// 0060b88a  68e0028000           push 0x8002e0
// 0060b88f  e81b5f0900           call 0x6a17af
// 0060b894  83c404               add esp, 4
// 0060b897  8b0c24               mov ecx, dword ptr [esp]
// 0060b89a  b8b8bc9700           mov eax, 0x97bcb8
// 0060b89f  64890d00000000       mov dword ptr fs:[0], ecx
// 0060b8a6  83c40c               add esp, 0xc
// 0060b8a9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
