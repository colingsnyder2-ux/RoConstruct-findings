// roc 2009-12 005e7970  unit: RBX::VBeveledBlockMesh::?$CustomizableMesh  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e7970
//
// 005e7970  8b442404             mov eax, dword ptr [esp + 4]
// 005e7974  8b08                 mov ecx, dword ptr [eax]
// 005e7976  8b542408             mov edx, dword ptr [esp + 8]
// 005e797a  8b02                 mov eax, dword ptr [edx]
// 005e797c  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 005e797f  3b4834               cmp ecx, dword ptr [eax + 0x34]
// 005e7982  1bc0                 sbb eax, eax
// 005e7984  f7d8                 neg eax
// 005e7986  c3                   ret 
// library rbxgs-render/RenderSurface.cpp (function ?materialPtrSortProc@Render@RBX@@YA_NABQAVRenderSurface@12@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderSurface.cpp
