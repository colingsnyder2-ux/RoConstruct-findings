// roc 2007-03 004f0790  unit: seg_004f0000  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f0790
//
// 004f0790  8b442404             mov eax, dword ptr [esp + 4]
// 004f0794  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004f0798  8b10                 mov edx, dword ptr [eax]
// 004f079a  8b4234               mov eax, dword ptr [edx + 0x34]
// 004f079d  56                   push esi
// 004f079e  8b31                 mov esi, dword ptr [ecx]
// 004f07a0  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 004f07a3  3bc1                 cmp eax, ecx
// 004f07a5  7215                 jb 0x4f07bc
// 004f07a7  750f                 jne 0x4f07b8
// 004f07a9  d94230               fld dword ptr [edx + 0x30]
// 004f07ac  d94630               fld dword ptr [esi + 0x30]
// 004f07af  ded9                 fcompp 
// 004f07b1  dfe0                 fnstsw ax
// 004f07b3  f6c405               test ah, 5
// 004f07b6  7b04                 jnp 0x4f07bc
// 004f07b8  33c0                 xor eax, eax
// 004f07ba  5e                   pop esi
// 004f07bb  c3                   ret 
// 004f07bc  b801000000           mov eax, 1
// 004f07c1  5e                   pop esi
// 004f07c2  c3                   ret 
// library rbxgs-render/RenderSurface.cpp (function ?materialDepthPtrSortProc@Render@RBX@@YA_NABQAVRenderSurface@12@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderSurface.cpp
