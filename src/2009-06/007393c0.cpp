// roc 2009-06 007393c0  unit: CXTPImageManager  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007393c0
//
// 007393c0  6aff                 push -1
// 007393c2  689e618700           push 0x87619e
// 007393c7  64a100000000         mov eax, dword ptr fs:[0]
// 007393cd  50                   push eax
// 007393ce  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007393d3  33c4                 xor eax, esp
// 007393d5  50                   push eax
// 007393d6  8d442404             lea eax, [esp + 4]
// 007393da  64a300000000         mov dword ptr fs:[0], eax
// 007393e0  b801000000           mov eax, 1
// 007393e5  8405ec19a500         test byte ptr [0xa519ec], al
// 007393eb  7525                 jne 0x739412
// 007393ed  0905ec19a500         or dword ptr [0xa519ec], eax
// 007393f3  b97019a500           mov ecx, 0xa51970
// 007393f8  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00739400  e86bc3ffff           call 0x735770
// 00739405  6850d38900           push 0x89d350
// 0073940a  e8ec06feff           call 0x719afb
// 0073940f  83c404               add esp, 4
// 00739412  b87019a500           mov eax, 0xa51970
// 00739417  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0073941b  64890d00000000       mov dword ptr fs:[0], ecx
// 00739422  59                   pop ecx
// 00739423  83c40c               add esp, 0xc
// 00739426  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
