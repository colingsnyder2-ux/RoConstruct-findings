// roc 2007-03 00484650  unit: seg_00480000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00484650
//
// 00484650  56                   push esi
// 00484651  6874800000           push 0x8074
// 00484656  8bf1                 mov esi, ecx
// 00484658  ff1570ec7700         call dword ptr [0x77ec70]
// 0048465e  8b4e04               mov ecx, dword ptr [esi + 4]
// 00484661  8b5608               mov edx, dword ptr [esi + 8]
// 00484664  8b4618               mov eax, dword ptr [esi + 0x18]
// 00484667  51                   push ecx
// 00484668  52                   push edx
// 00484669  50                   push eax
// 0048466a  50                   push eax
// 0048466b  e800a2ffff           call 0x47e870
// 00484670  8bc8                 mov ecx, eax
// 00484672  8b4608               mov eax, dword ptr [esi + 8]
// 00484675  33d2                 xor edx, edx
// 00484677  f7f1                 div ecx
// 00484679  83c404               add esp, 4
// 0048467c  50                   push eax
// 0048467d  ff156cec7700         call dword ptr [0x77ec6c]
// 00484683  5e                   pop esi
// 00484684  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\VAR.cpp (function ?vertexPointer@VAR@G3D@@ABEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/VAR.cpp
