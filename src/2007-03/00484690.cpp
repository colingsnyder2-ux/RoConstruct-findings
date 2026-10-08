// roc 2007-03 00484690  unit: seg_00480000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00484690
//
// 00484690  56                   push esi
// 00484691  6875800000           push 0x8075
// 00484696  8bf1                 mov esi, ecx
// 00484698  ff1570ec7700         call dword ptr [0x77ec70]
// 0048469e  8b4604               mov eax, dword ptr [esi + 4]
// 004846a1  8b4e08               mov ecx, dword ptr [esi + 8]
// 004846a4  8b5618               mov edx, dword ptr [esi + 0x18]
// 004846a7  50                   push eax
// 004846a8  51                   push ecx
// 004846a9  52                   push edx
// 004846aa  ff1574ec7700         call dword ptr [0x77ec74]
// 004846b0  5e                   pop esi
// 004846b1  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\VAR.cpp (function ?normalPointer@VAR@G3D@@ABEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/VAR.cpp
