// roc 2009-06 00703210  unit: RBX::AdornG3D  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00703210
//
// 00703210  8b01                 mov eax, dword ptr [ecx]
// 00703212  8b4044               mov eax, dword ptr [eax + 0x44]
// 00703215  ffe0                 jmp eax
// library rbxgs-appdraw/AdornG3D.cpp (function ?explosion@AdornG3D@RBX@@UAEXABVSphere@G3D@@ABVColor4@4@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
