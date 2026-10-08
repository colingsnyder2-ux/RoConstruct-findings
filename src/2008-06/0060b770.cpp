// from server: 100% by auto
// roc 2008-06 0060b770  unit: RBX::Feature::W4InOut::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060b770
//
// 0060b770  64a100000000         mov eax, dword ptr fs:[0]
// 0060b776  6aff                 push -1
// 0060b778  684e8a7d00           push 0x7d8a4e
// 0060b77d  50                   push eax
// 0060b77e  b801000000           mov eax, 1
// 0060b783  64892500000000       mov dword ptr fs:[0], esp
// 0060b78a  8405c0bb9700         test byte ptr [0x97bbc0], al
// 0060b790  7525                 jne 0x60b7b7
// 0060b792  0905c0bb9700         or dword ptr [0x97bbc0], eax
// 0060b798  b9d8ba9700           mov ecx, 0x97bad8
// 0060b79d  c744240800000000     mov dword ptr [esp + 8], 0
// 0060b7a5  e826faffff           call 0x60b1d0
// 0060b7aa  6800038000           push 0x800300
// 0060b7af  e8fb5f0900           call 0x6a17af
// 0060b7b4  83c404               add esp, 4
// 0060b7b7  8b0c24               mov ecx, dword ptr [esp]
// 0060b7ba  b8d8ba9700           mov eax, 0x97bad8
// 0060b7bf  64890d00000000       mov dword ptr fs:[0], ecx
// 0060b7c6  83c40c               add esp, 0xc
// 0060b7c9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
