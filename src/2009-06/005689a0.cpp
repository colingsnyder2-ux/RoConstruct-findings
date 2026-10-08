// roc 2009-06 005689a0  unit: RBX::RbxG3D::RenderScene  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005689a0
//
// 005689a0  8b442404             mov eax, dword ptr [esp + 4]
// 005689a4  8b08                 mov ecx, dword ptr [eax]
// 005689a6  8b542408             mov edx, dword ptr [esp + 8]
// 005689aa  8b02                 mov eax, dword ptr [edx]
// 005689ac  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 005689af  3b4834               cmp ecx, dword ptr [eax + 0x34]
// 005689b2  1bc0                 sbb eax, eax
// 005689b4  f7d8                 neg eax
// 005689b6  c3                   ret 
// library rbxgs-render/RenderSurface.cpp (function ?materialPtrSortProc@Render@RBX@@YA_NABQAVRenderSurface@12@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderSurface.cpp
