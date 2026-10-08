// roc 2007-03 004f07d0  unit: seg_004f0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f07d0
//
// 004f07d0  8b442404             mov eax, dword ptr [esp + 4]
// 004f07d4  8b08                 mov ecx, dword ptr [eax]
// 004f07d6  8b542408             mov edx, dword ptr [esp + 8]
// 004f07da  8b02                 mov eax, dword ptr [edx]
// 004f07dc  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 004f07df  3b4834               cmp ecx, dword ptr [eax + 0x34]
// 004f07e2  1bc0                 sbb eax, eax
// 004f07e4  f7d8                 neg eax
// 004f07e6  c3                   ret 
// library rbxgs-render/RenderSurface.cpp (function ?materialPtrSortProc@Render@RBX@@YA_NABQAVRenderSurface@12@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderSurface.cpp
