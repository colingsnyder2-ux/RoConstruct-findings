// from server: 100% by auto
// roc 2011-06 0064f180  unit: RBX::GameBasicSettings  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0064f180
//
// 0064f180  64a100000000         mov eax, dword ptr fs:[0]
// 0064f186  6aff                 push -1
// 0064f188  684ec59e00           push 0x9ec54e
// 0064f18d  50                   push eax
// 0064f18e  b801000000           mov eax, 1
// 0064f193  64892500000000       mov dword ptr fs:[0], esp
// 0064f19a  84055cd2cc00         test byte ptr [0xccd25c], al
// 0064f1a0  7525                 jne 0x64f1c7
// 0064f1a2  09055cd2cc00         or dword ptr [0xccd25c], eax
// 0064f1a8  b9f0d1cc00           mov ecx, 0xccd1f0
// 0064f1ad  c744240800000000     mov dword ptr [esp + 8], 0
// 0064f1b5  e8a6e1ffff           call 0x64d360
// 0064f1ba  6810aaa300           push 0xa3aa10
// 0064f1bf  e899bf1b00           call 0x80b15d
// 0064f1c4  83c404               add esp, 4
// 0064f1c7  8b0c24               mov ecx, dword ptr [esp]
// 0064f1ca  b8f0d1cc00           mov eax, 0xccd1f0
// 0064f1cf  64890d00000000       mov dword ptr fs:[0], ecx
// 0064f1d6  83c40c               add esp, 0xc
// 0064f1d9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
