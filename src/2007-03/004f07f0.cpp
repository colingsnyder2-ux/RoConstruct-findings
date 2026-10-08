// roc 2007-03 004f07f0  unit: seg_004f0000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f07f0
//
// 004f07f0  8b442404             mov eax, dword ptr [esp + 4]
// 004f07f4  8b08                 mov ecx, dword ptr [eax]
// 004f07f6  8b542408             mov edx, dword ptr [esp + 8]
// 004f07fa  d94130               fld dword ptr [ecx + 0x30]
// 004f07fd  8b02                 mov eax, dword ptr [edx]
// 004f07ff  d94030               fld dword ptr [eax + 0x30]
// 004f0802  ded9                 fcompp 
// 004f0804  dfe0                 fnstsw ax
// 004f0806  f6c441               test ah, 0x41
// 004f0809  7506                 jne 0x4f0811
// 004f080b  b801000000           mov eax, 1
// 004f0810  c3                   ret 
// 004f0811  33c0                 xor eax, eax
// 004f0813  c3                   ret 
// library rbxgs-render/RenderSurface.cpp (function ?depthPtrSortProc@Render@RBX@@YA_NABQAVRenderSurface@12@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderSurface.cpp
