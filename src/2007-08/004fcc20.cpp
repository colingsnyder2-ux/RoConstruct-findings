// roc 2007-08 004fcc20  unit: RBX::Render::AggregateChunk  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fcc20
//
// 004fcc20  8b442404             mov eax, dword ptr [esp + 4]
// 004fcc24  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004fcc28  8b10                 mov edx, dword ptr [eax]
// 004fcc2a  8b4234               mov eax, dword ptr [edx + 0x34]
// 004fcc2d  56                   push esi
// 004fcc2e  8b31                 mov esi, dword ptr [ecx]
// 004fcc30  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 004fcc33  3bc1                 cmp eax, ecx
// 004fcc35  7215                 jb 0x4fcc4c
// 004fcc37  750f                 jne 0x4fcc48
// 004fcc39  d94230               fld dword ptr [edx + 0x30]
// 004fcc3c  d94630               fld dword ptr [esi + 0x30]
// 004fcc3f  ded9                 fcompp 
// 004fcc41  dfe0                 fnstsw ax
// 004fcc43  f6c405               test ah, 5
// 004fcc46  7b04                 jnp 0x4fcc4c
// 004fcc48  33c0                 xor eax, eax
// 004fcc4a  5e                   pop esi
// 004fcc4b  c3                   ret 
// 004fcc4c  b801000000           mov eax, 1
// 004fcc51  5e                   pop esi
// 004fcc52  c3                   ret 
// library rbxgs-render/RenderSurface.cpp (function ?materialDepthPtrSortProc@Render@RBX@@YA_NABQAVRenderSurface@12@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderSurface.cpp
