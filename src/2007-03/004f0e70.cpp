// roc 2007-03 004f0e70  unit: seg_004f0000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f0e70
//
// 004f0e70  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004f0e74  8b01                 mov eax, dword ptr [ecx]
// 004f0e76  8b4904               mov ecx, dword ptr [ecx + 4]
// 004f0e79  8d0c88               lea ecx, [eax + ecx*4]
// 004f0e7c  8bd1                 mov edx, ecx
// 004f0e7e  2bd0                 sub edx, eax
// 004f0e80  6890074f00           push 0x4f0790
// 004f0e85  c1fa02               sar edx, 2
// 004f0e88  52                   push edx
// 004f0e89  51                   push ecx
// 004f0e8a  50                   push eax
// 004f0e8b  e8f0feffff           call 0x4f0d80
// 004f0e90  83c410               add esp, 0x10
// 004f0e93  c3                   ret 
// library rbxgs-render/RenderSurface.cpp (function ?sortByDepth@Render@RBX@@YAXAAV?$Array@PAVRenderSurface@Render@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderSurface.cpp
