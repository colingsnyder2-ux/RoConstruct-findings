// roc 2009-06 00754b20  unit: CXTPColorManager  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00754b20
//
// 00754b20  6aff                 push -1
// 00754b22  680e7b8700           push 0x877b0e
// 00754b27  64a100000000         mov eax, dword ptr fs:[0]
// 00754b2d  50                   push eax
// 00754b2e  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00754b33  33c4                 xor eax, esp
// 00754b35  50                   push eax
// 00754b36  8d442404             lea eax, [esp + 4]
// 00754b3a  64a300000000         mov dword ptr fs:[0], eax
// 00754b40  b801000000           mov eax, 1
// 00754b45  84050c1fa500         test byte ptr [0xa51f0c], al
// 00754b4b  7525                 jne 0x754b72
// 00754b4d  09050c1fa500         or dword ptr [0xa51f0c], eax
// 00754b53  b9a01aa500           mov ecx, 0xa51aa0
// 00754b58  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00754b60  e8ebf4ffff           call 0x754050
// 00754b65  68b0d48900           push 0x89d4b0
// 00754b6a  e88c4ffcff           call 0x719afb
// 00754b6f  83c404               add esp, 4
// 00754b72  b8a01aa500           mov eax, 0xa51aa0
// 00754b77  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00754b7b  64890d00000000       mov dword ptr fs:[0], ecx
// 00754b82  59                   pop ecx
// 00754b83  83c40c               add esp, 0xc
// 00754b86  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
