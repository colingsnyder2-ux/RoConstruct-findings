// roc 2008-06 00676550  unit: RBX::AdornG3D  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00676550
//
// 00676550  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00676554  8b4904               mov ecx, dword ptr [ecx + 4]
// 00676557  8b542408             mov edx, dword ptr [esp + 8]
// 0067655b  50                   push eax
// 0067655c  8b442408             mov eax, dword ptr [esp + 8]
// 00676560  51                   push ecx
// 00676561  52                   push edx
// 00676562  50                   push eax
// 00676563  e8881c0000           call 0x6781f0
// 00676568  83c410               add esp, 0x10
// 0067656b  c20c00               ret 0xc
// library rbxgs-appdraw/AdornG3D.cpp (function ?line2d@AdornG3D@RBX@@UBEXABVVector2@G3D@@0ABVColor4@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
