// from server: 100% by auto
// roc 2008-06 0060b7e0  unit: RBX::Feature::W4InOut::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060b7e0
//
// 0060b7e0  64a100000000         mov eax, dword ptr fs:[0]
// 0060b7e6  6aff                 push -1
// 0060b7e8  686e8a7d00           push 0x7d8a6e
// 0060b7ed  50                   push eax
// 0060b7ee  b801000000           mov eax, 1
// 0060b7f3  64892500000000       mov dword ptr fs:[0], esp
// 0060b7fa  8405b0bc9700         test byte ptr [0x97bcb0], al
// 0060b800  7525                 jne 0x60b827
// 0060b802  0905b0bc9700         or dword ptr [0x97bcb0], eax
// 0060b808  b9c8bb9700           mov ecx, 0x97bbc8
// 0060b80d  c744240800000000     mov dword ptr [esp + 8], 0
// 0060b815  e836fbffff           call 0x60b350
// 0060b81a  68f0028000           push 0x8002f0
// 0060b81f  e88b5f0900           call 0x6a17af
// 0060b824  83c404               add esp, 4
// 0060b827  8b0c24               mov ecx, dword ptr [esp]
// 0060b82a  b8c8bb9700           mov eax, 0x97bbc8
// 0060b82f  64890d00000000       mov dword ptr fs:[0], ecx
// 0060b836  83c40c               add esp, 0xc
// 0060b839  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
