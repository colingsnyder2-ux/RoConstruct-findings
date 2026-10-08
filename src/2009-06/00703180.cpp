// roc 2009-06 00703180  unit: RBX::AdornG3D  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00703180
//
// 00703180  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00703184  8b4904               mov ecx, dword ptr [ecx + 4]
// 00703187  8b542408             mov edx, dword ptr [esp + 8]
// 0070318b  50                   push eax
// 0070318c  8b442408             mov eax, dword ptr [esp + 8]
// 00703190  51                   push ecx
// 00703191  52                   push edx
// 00703192  50                   push eax
// 00703193  e8281d0000           call 0x704ec0
// 00703198  83c410               add esp, 0x10
// 0070319b  c20c00               ret 0xc
// library rbxgs-appdraw/AdornG3D.cpp (function ?line2d@AdornG3D@RBX@@UBEXABVVector2@G3D@@0ABVColor4@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
