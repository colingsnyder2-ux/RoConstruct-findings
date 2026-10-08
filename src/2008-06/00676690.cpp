// roc 2008-06 00676690  unit: RBX::AdornG3D  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00676690
//
// 00676690  d9442410             fld dword ptr [esp + 0x10]
// 00676694  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00676698  8b542408             mov edx, dword ptr [esp + 8]
// 0067669c  51                   push ecx
// 0067669d  8b4904               mov ecx, dword ptr [ecx + 4]
// 006766a0  d91c24               fstp dword ptr [esp]
// 006766a3  50                   push eax
// 006766a4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006766a8  52                   push edx
// 006766a9  50                   push eax
// 006766aa  51                   push ecx
// 006766ab  e8e0ad1300           call 0x7b1490
// 006766b0  83c414               add esp, 0x14
// 006766b3  c21000               ret 0x10
// library rbxgs-appdraw/AdornG3D.cpp (function ?axes@AdornG3D@RBX@@UAEXABVColor4@G3D@@00M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
