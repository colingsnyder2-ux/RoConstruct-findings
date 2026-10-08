// roc 2007-03 004f0ed0  unit: seg_004f0000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f0ed0
//
// 004f0ed0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004f0ed4  8b01                 mov eax, dword ptr [ecx]
// 004f0ed6  8b4904               mov ecx, dword ptr [ecx + 4]
// 004f0ed9  8d0c88               lea ecx, [eax + ecx*4]
// 004f0edc  8bd1                 mov edx, ecx
// 004f0ede  2bd0                 sub edx, eax
// 004f0ee0  68f0074f00           push 0x4f07f0
// 004f0ee5  c1fa02               sar edx, 2
// 004f0ee8  52                   push edx
// 004f0ee9  51                   push ecx
// 004f0eea  50                   push eax
// 004f0eeb  e890feffff           call 0x4f0d80
// 004f0ef0  83c410               add esp, 0x10
// 004f0ef3  c3                   ret 
// library rbxgs-render/RenderSurface.cpp (function ?sortByDepth@Render@RBX@@YAXAAV?$Array@PAVRenderSurface@Render@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderSurface.cpp
