// roc 2007-08 0062dc40  unit: RBX::AdornG3D  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062dc40
//
// 0062dc40  d944240c             fld dword ptr [esp + 0xc]
// 0062dc44  8b442408             mov eax, dword ptr [esp + 8]
// 0062dc48  8b542404             mov edx, dword ptr [esp + 4]
// 0062dc4c  51                   push ecx
// 0062dc4d  8b4904               mov ecx, dword ptr [ecx + 4]
// 0062dc50  d91c24               fstp dword ptr [esp]
// 0062dc53  50                   push eax
// 0062dc54  51                   push ecx
// 0062dc55  52                   push edx
// 0062dc56  e805161000           call 0x72f260
// 0062dc5b  83c410               add esp, 0x10
// 0062dc5e  c20c00               ret 0xc
// library rbxgs-appdraw/AdornG3D.cpp (function ?ray@AdornG3D@RBX@@UAEXABVRay@G3D@@ABVColor4@4@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
