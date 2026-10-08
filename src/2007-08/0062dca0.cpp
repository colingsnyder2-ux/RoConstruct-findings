// roc 2007-08 0062dca0  unit: RBX::AdornG3D  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062dca0
//
// 0062dca0  d9442410             fld dword ptr [esp + 0x10]
// 0062dca4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0062dca8  8b542408             mov edx, dword ptr [esp + 8]
// 0062dcac  51                   push ecx
// 0062dcad  8b4904               mov ecx, dword ptr [ecx + 4]
// 0062dcb0  d91c24               fstp dword ptr [esp]
// 0062dcb3  50                   push eax
// 0062dcb4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0062dcb8  52                   push edx
// 0062dcb9  50                   push eax
// 0062dcba  51                   push ecx
// 0062dcbb  e8a0281000           call 0x730560
// 0062dcc0  83c414               add esp, 0x14
// 0062dcc3  c21000               ret 0x10
// library rbxgs-appdraw/AdornG3D.cpp (function ?axes@AdornG3D@RBX@@UAEXABVColor4@G3D@@00M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
