// roc 2007-08 0062dc70  unit: RBX::AdornG3D  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062dc70
//
// 0062dc70  d944240c             fld dword ptr [esp + 0xc]
// 0062dc74  8b442408             mov eax, dword ptr [esp + 8]
// 0062dc78  8b542404             mov edx, dword ptr [esp + 4]
// 0062dc7c  51                   push ecx
// 0062dc7d  8b4904               mov ecx, dword ptr [ecx + 4]
// 0062dc80  d91c24               fstp dword ptr [esp]
// 0062dc83  50                   push eax
// 0062dc84  51                   push ecx
// 0062dc85  52                   push edx
// 0062dc86  e8c5111000           call 0x72ee50
// 0062dc8b  83c410               add esp, 0x10
// 0062dc8e  c20c00               ret 0xc
// library rbxgs-appdraw/AdornG3D.cpp (function ?ray@AdornG3D@RBX@@UAEXABVRay@G3D@@ABVColor4@4@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
