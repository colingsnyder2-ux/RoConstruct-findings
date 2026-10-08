// roc 2008-06 00505220  unit: RBX::Render::RenderScene  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00505220
//
// 00505220  8b442404             mov eax, dword ptr [esp + 4]
// 00505224  8b08                 mov ecx, dword ptr [eax]
// 00505226  8b542408             mov edx, dword ptr [esp + 8]
// 0050522a  8b02                 mov eax, dword ptr [edx]
// 0050522c  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 0050522f  3b4834               cmp ecx, dword ptr [eax + 0x34]
// 00505232  1bc0                 sbb eax, eax
// 00505234  f7d8                 neg eax
// 00505236  c3                   ret 
// library rbxgs-render/RenderSurface.cpp (function ?materialPtrSortProc@Render@RBX@@YA_NABQAVRenderSurface@12@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderSurface.cpp
