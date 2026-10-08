// roc 2009-12 007ecc50  unit: W4_D3DFORMAT::?$EnumDesc  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007ecc50
//
// 007ecc50  6aff                 push -1
// 007ecc52  68ee829500           push 0x9582ee
// 007ecc57  64a100000000         mov eax, dword ptr fs:[0]
// 007ecc5d  50                   push eax
// 007ecc5e  a10052b600           mov eax, dword ptr [0xb65200]
// 007ecc63  33c4                 xor eax, esp
// 007ecc65  50                   push eax
// 007ecc66  8d442404             lea eax, [esp + 4]
// 007ecc6a  64a300000000         mov dword ptr fs:[0], eax
// 007ecc70  b801000000           mov eax, 1
// 007ecc75  84058c9db900         test byte ptr [0xb99d8c], al
// 007ecc7b  7525                 jne 0x7ecca2
// 007ecc7d  09058c9db900         or dword ptr [0xb99d8c], eax
// 007ecc83  b9a09cb900           mov ecx, 0xb99ca0
// 007ecc88  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 007ecc90  e8fb160000           call 0x7ee390
// 007ecc95  6860a49800           push 0x98a460
// 007ecc9a  e88a7c0000           call 0x7f4929
// 007ecc9f  83c404               add esp, 4
// 007ecca2  b8a09cb900           mov eax, 0xb99ca0
// 007ecca7  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007eccab  64890d00000000       mov dword ptr fs:[0], ecx
// 007eccb2  59                   pop ecx
// 007eccb3  83c40c               add esp, 0xc
// 007eccb6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
