// roc 2009-06 007032c0  unit: RBX::AdornG3D  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007032c0
//
// 007032c0  d9442410             fld dword ptr [esp + 0x10]
// 007032c4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007032c8  8b542408             mov edx, dword ptr [esp + 8]
// 007032cc  51                   push ecx
// 007032cd  8b4904               mov ecx, dword ptr [ecx + 4]
// 007032d0  d91c24               fstp dword ptr [esp]
// 007032d3  50                   push eax
// 007032d4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007032d8  52                   push edx
// 007032d9  50                   push eax
// 007032da  51                   push ecx
// 007032db  e860ea1300           call 0x841d40
// 007032e0  83c414               add esp, 0x14
// 007032e3  c21000               ret 0x10
// library rbxgs-appdraw/AdornG3D.cpp (function ?axes@AdornG3D@RBX@@UAEXABVColor4@G3D@@00M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
