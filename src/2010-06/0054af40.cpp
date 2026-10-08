// roc 2010-06 0054af40  unit: RBX::AggregateChunk  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054af40
//
// 0054af40  8b442404             mov eax, dword ptr [esp + 4]
// 0054af44  8b08                 mov ecx, dword ptr [eax]
// 0054af46  8b542408             mov edx, dword ptr [esp + 8]
// 0054af4a  8b02                 mov eax, dword ptr [edx]
// 0054af4c  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 0054af4f  3b4834               cmp ecx, dword ptr [eax + 0x34]
// 0054af52  1bc0                 sbb eax, eax
// 0054af54  f7d8                 neg eax
// 0054af56  c3                   ret 
// library rbxgs-render/RenderSurface.cpp (function ?materialPtrSortProc@Render@RBX@@YA_NABQAVRenderSurface@12@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderSurface.cpp
