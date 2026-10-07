// roc 2010-06 005c9bb0  unit: RBX::Reflection::EnumDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005c9bb0
//
// 005c9bb0  64a100000000         mov eax, dword ptr fs:[0]
// 005c9bb6  6aff                 push -1
// 005c9bb8  683e609900           push 0x99603e
// 005c9bbd  50                   push eax
// 005c9bbe  b801000000           mov eax, 1
// 005c9bc3  64892500000000       mov dword ptr fs:[0], esp
// 005c9bca  84058c88c100         test byte ptr [0xc1888c], al
// 005c9bd0  7525                 jne 0x5c9bf7
// 005c9bd2  09058c88c100         or dword ptr [0xc1888c], eax
// 005c9bd8  b97488c100           mov ecx, 0xc18874
// 005c9bdd  c744240800000000     mov dword ptr [esp + 8], 0
// 005c9be5  e806f2ffff           call 0x5c8df0
// 005c9bea  6890209e00           push 0x9e2090
// 005c9bef  e86fee1d00           call 0x7a8a63
// 005c9bf4  83c404               add esp, 4
// 005c9bf7  8b0c24               mov ecx, dword ptr [esp]
// 005c9bfa  b87488c100           mov eax, 0xc18874
// 005c9bff  64890d00000000       mov dword ptr fs:[0], ecx
// 005c9c06  83c40c               add esp, 0xc
// 005c9c09  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
