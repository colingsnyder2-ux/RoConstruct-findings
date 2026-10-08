// roc 2008-06 00676660  unit: RBX::AdornG3D  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00676660
//
// 00676660  d944240c             fld dword ptr [esp + 0xc]
// 00676664  8b442408             mov eax, dword ptr [esp + 8]
// 00676668  8b542404             mov edx, dword ptr [esp + 4]
// 0067666c  51                   push ecx
// 0067666d  8b4904               mov ecx, dword ptr [ecx + 4]
// 00676670  d91c24               fstp dword ptr [esp]
// 00676673  50                   push eax
// 00676674  51                   push ecx
// 00676675  52                   push edx
// 00676676  e8d59b1300           call 0x7b0250
// 0067667b  83c410               add esp, 0x10
// 0067667e  c20c00               ret 0xc
// library rbxgs-appdraw/AdornG3D.cpp (function ?ray@AdornG3D@RBX@@UAEXABVRay@G3D@@ABVColor4@4@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
