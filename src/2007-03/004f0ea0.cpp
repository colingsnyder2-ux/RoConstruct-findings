// roc 2007-03 004f0ea0  unit: seg_004f0000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f0ea0
//
// 004f0ea0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004f0ea4  8b01                 mov eax, dword ptr [ecx]
// 004f0ea6  8b4904               mov ecx, dword ptr [ecx + 4]
// 004f0ea9  8d0c88               lea ecx, [eax + ecx*4]
// 004f0eac  8bd1                 mov edx, ecx
// 004f0eae  2bd0                 sub edx, eax
// 004f0eb0  68d0074f00           push 0x4f07d0
// 004f0eb5  c1fa02               sar edx, 2
// 004f0eb8  52                   push edx
// 004f0eb9  51                   push ecx
// 004f0eba  50                   push eax
// 004f0ebb  e8c0feffff           call 0x4f0d80
// 004f0ec0  83c410               add esp, 0x10
// 004f0ec3  c3                   ret 
// library rbxgs-render/RenderSurface.cpp (function ?sortByDepth@Render@RBX@@YAXAAV?$Array@PAVRenderSurface@Render@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderSurface.cpp
