// roc 2008-06 00676630  unit: RBX::AdornG3D  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00676630
//
// 00676630  d944240c             fld dword ptr [esp + 0xc]
// 00676634  8b442408             mov eax, dword ptr [esp + 8]
// 00676638  8b542404             mov edx, dword ptr [esp + 4]
// 0067663c  51                   push ecx
// 0067663d  8b4904               mov ecx, dword ptr [ecx + 4]
// 00676640  d91c24               fstp dword ptr [esp]
// 00676643  50                   push eax
// 00676644  51                   push ecx
// 00676645  52                   push edx
// 00676646  e8659f1300           call 0x7b05b0
// 0067664b  83c410               add esp, 0x10
// 0067664e  c20c00               ret 0xc
// library rbxgs-appdraw/AdornG3D.cpp (function ?ray@AdornG3D@RBX@@UAEXABVRay@G3D@@ABVColor4@4@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
