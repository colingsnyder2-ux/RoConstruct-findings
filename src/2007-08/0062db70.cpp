// roc 2007-08 0062db70  unit: RBX::AdornG3D  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062db70
//
// 0062db70  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0062db74  8b4904               mov ecx, dword ptr [ecx + 4]
// 0062db77  8b542408             mov edx, dword ptr [esp + 8]
// 0062db7b  50                   push eax
// 0062db7c  8b442408             mov eax, dword ptr [esp + 8]
// 0062db80  51                   push ecx
// 0062db81  52                   push edx
// 0062db82  50                   push eax
// 0062db83  e8e81d0000           call 0x62f970
// 0062db88  83c410               add esp, 0x10
// 0062db8b  c20c00               ret 0xc
// library rbxgs-appdraw/AdornG3D.cpp (function ?line2d@AdornG3D@RBX@@UBEXABVVector2@G3D@@0ABVColor4@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
