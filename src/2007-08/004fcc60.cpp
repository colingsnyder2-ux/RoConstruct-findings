// roc 2007-08 004fcc60  unit: RBX::Render::AggregateChunk  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fcc60
//
// 004fcc60  8b442404             mov eax, dword ptr [esp + 4]
// 004fcc64  8b08                 mov ecx, dword ptr [eax]
// 004fcc66  8b542408             mov edx, dword ptr [esp + 8]
// 004fcc6a  8b02                 mov eax, dword ptr [edx]
// 004fcc6c  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 004fcc6f  3b4834               cmp ecx, dword ptr [eax + 0x34]
// 004fcc72  1bc0                 sbb eax, eax
// 004fcc74  f7d8                 neg eax
// 004fcc76  c3                   ret 
// library rbxgs-render/RenderSurface.cpp (function ?materialPtrSortProc@Render@RBX@@YA_NABQAVRenderSurface@12@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderSurface.cpp
