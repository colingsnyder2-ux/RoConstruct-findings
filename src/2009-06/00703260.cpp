// roc 2009-06 00703260  unit: RBX::AdornG3D  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00703260
//
// 00703260  d944240c             fld dword ptr [esp + 0xc]
// 00703264  8b442408             mov eax, dword ptr [esp + 8]
// 00703268  8b542404             mov edx, dword ptr [esp + 4]
// 0070326c  51                   push ecx
// 0070326d  8b4904               mov ecx, dword ptr [ecx + 4]
// 00703270  d91c24               fstp dword ptr [esp]
// 00703273  50                   push eax
// 00703274  51                   push ecx
// 00703275  52                   push edx
// 00703276  e8e5db1300           call 0x840e60
// 0070327b  83c410               add esp, 0x10
// 0070327e  c20c00               ret 0xc
// library rbxgs-appdraw/AdornG3D.cpp (function ?ray@AdornG3D@RBX@@UAEXABVRay@G3D@@ABVColor4@4@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
