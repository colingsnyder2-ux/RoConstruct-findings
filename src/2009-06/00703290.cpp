// roc 2009-06 00703290  unit: RBX::AdornG3D  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00703290
//
// 00703290  d944240c             fld dword ptr [esp + 0xc]
// 00703294  8b442408             mov eax, dword ptr [esp + 8]
// 00703298  8b542404             mov edx, dword ptr [esp + 4]
// 0070329c  51                   push ecx
// 0070329d  8b4904               mov ecx, dword ptr [ecx + 4]
// 007032a0  d91c24               fstp dword ptr [esp]
// 007032a3  50                   push eax
// 007032a4  51                   push ecx
// 007032a5  52                   push edx
// 007032a6  e855d81300           call 0x840b00
// 007032ab  83c410               add esp, 0x10
// 007032ae  c20c00               ret 0xc
// library rbxgs-appdraw/AdornG3D.cpp (function ?ray@AdornG3D@RBX@@UAEXABVRay@G3D@@ABVColor4@4@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
