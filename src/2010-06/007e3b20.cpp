// roc 2010-06 007e3b20  unit: CXTPColorManager  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e3b20
//
// 007e3b20  6aff                 push -1
// 007e3b22  688e1b9b00           push 0x9b1b8e
// 007e3b27  64a100000000         mov eax, dword ptr fs:[0]
// 007e3b2d  50                   push eax
// 007e3b2e  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007e3b33  33c4                 xor eax, esp
// 007e3b35  50                   push eax
// 007e3b36  8d442404             lea eax, [esp + 4]
// 007e3b3a  64a300000000         mov dword ptr fs:[0], eax
// 007e3b40  b801000000           mov eax, 1
// 007e3b45  8405945ac200         test byte ptr [0xc25a94], al
// 007e3b4b  7525                 jne 0x7e3b72
// 007e3b4d  0905945ac200         or dword ptr [0xc25a94], eax
// 007e3b53  b92856c200           mov ecx, 0xc25628
// 007e3b58  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 007e3b60  e8fbf4ffff           call 0x7e3060
// 007e3b65  6870909e00           push 0x9e9070
// 007e3b6a  e8f44efcff           call 0x7a8a63
// 007e3b6f  83c404               add esp, 4
// 007e3b72  b82856c200           mov eax, 0xc25628
// 007e3b77  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007e3b7b  64890d00000000       mov dword ptr fs:[0], ecx
// 007e3b82  59                   pop ecx
// 007e3b83  83c40c               add esp, 0xc
// 007e3b86  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
