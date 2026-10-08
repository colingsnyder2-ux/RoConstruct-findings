// roc 2007-08 004fcc80  unit: RBX::Render::AggregateChunk  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fcc80
//
// 004fcc80  8b442404             mov eax, dword ptr [esp + 4]
// 004fcc84  8b08                 mov ecx, dword ptr [eax]
// 004fcc86  8b542408             mov edx, dword ptr [esp + 8]
// 004fcc8a  d94130               fld dword ptr [ecx + 0x30]
// 004fcc8d  8b02                 mov eax, dword ptr [edx]
// 004fcc8f  d94030               fld dword ptr [eax + 0x30]
// 004fcc92  ded9                 fcompp 
// 004fcc94  dfe0                 fnstsw ax
// 004fcc96  f6c441               test ah, 0x41
// 004fcc99  7506                 jne 0x4fcca1
// 004fcc9b  b801000000           mov eax, 1
// 004fcca0  c3                   ret 
// 004fcca1  33c0                 xor eax, eax
// 004fcca3  c3                   ret 
// library rbxgs-render/RenderSurface.cpp (function ?depthPtrSortProc@Render@RBX@@YA_NABQAVRenderSurface@12@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderSurface.cpp
