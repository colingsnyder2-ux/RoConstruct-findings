// roc 2009-06 00711590  unit: W4_D3DFORMAT::?$EnumDesc  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00711590
//
// 00711590  6aff                 push -1
// 00711592  68ee408700           push 0x8740ee
// 00711597  64a100000000         mov eax, dword ptr fs:[0]
// 0071159d  50                   push eax
// 0071159e  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007115a3  33c4                 xor eax, esp
// 007115a5  50                   push eax
// 007115a6  8d442404             lea eax, [esp + 4]
// 007115aa  64a300000000         mov dword ptr fs:[0], eax
// 007115b0  b801000000           mov eax, 1
// 007115b5  84054c08a500         test byte ptr [0xa5084c], al
// 007115bb  7525                 jne 0x7115e2
// 007115bd  09054c08a500         or dword ptr [0xa5084c], eax
// 007115c3  b96007a500           mov ecx, 0xa50760
// 007115c8  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 007115d0  e85b1a0000           call 0x713030
// 007115d5  68d0d28900           push 0x89d2d0
// 007115da  e81c850000           call 0x719afb
// 007115df  83c404               add esp, 4
// 007115e2  b86007a500           mov eax, 0xa50760
// 007115e7  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007115eb  64890d00000000       mov dword ptr fs:[0], ecx
// 007115f2  59                   pop ecx
// 007115f3  83c40c               add esp, 0xc
// 007115f6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
