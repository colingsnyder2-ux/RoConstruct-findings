// roc 2007-08 00579e80  unit: RBX::SpecialShape::W4MeshType::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00579e80
//
// 00579e80  64a100000000         mov eax, dword ptr fs:[0]
// 00579e86  6aff                 push -1
// 00579e88  68be547500           push 0x7554be
// 00579e8d  50                   push eax
// 00579e8e  b801000000           mov eax, 1
// 00579e93  64892500000000       mov dword ptr fs:[0], esp
// 00579e9a  8405a02d8c00         test byte ptr [0x8c2da0], al
// 00579ea0  7525                 jne 0x579ec7
// 00579ea2  0905a02d8c00         or dword ptr [0x8c2da0], eax
// 00579ea8  b9082d8c00           mov ecx, 0x8c2d08
// 00579ead  c744240800000000     mov dword ptr [esp + 8], 0
// 00579eb5  e816feffff           call 0x579cd0
// 00579eba  6870a47700           push 0x77a470
// 00579ebf  e85f6e0b00           call 0x630d23
// 00579ec4  83c404               add esp, 4
// 00579ec7  8b0c24               mov ecx, dword ptr [esp]
// 00579eca  b8082d8c00           mov eax, 0x8c2d08
// 00579ecf  64890d00000000       mov dword ptr fs:[0], ecx
// 00579ed6  83c40c               add esp, 0xc
// 00579ed9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
