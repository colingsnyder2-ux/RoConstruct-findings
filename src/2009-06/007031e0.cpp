// roc 2009-06 007031e0  unit: RBX::AdornG3D  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007031e0
//
// 007031e0  56                   push esi
// 007031e1  8bf1                 mov esi, ecx
// 007031e3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007031e7  8b06                 mov eax, dword ptr [esi]
// 007031e9  8b503c               mov edx, dword ptr [eax + 0x3c]
// 007031ec  51                   push ecx
// 007031ed  8bce                 mov ecx, esi
// 007031ef  ffd2                 call edx
// 007031f1  8b4604               mov eax, dword ptr [esi + 4]
// 007031f4  50                   push eax
// 007031f5  51                   push ecx
// 007031f6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007031fa  d94110               fld dword ptr [ecx + 0x10]
// 007031fd  d91c24               fstp dword ptr [esp]
// 00703200  e86b180000           call 0x704a70
// 00703205  83c408               add esp, 8
// 00703208  5e                   pop esi
// 00703209  c20c00               ret 0xc
// library rbxgs-appdraw/AdornG3D.cpp (function ?sphere@AdornG3D@RBX@@UAEXABVSphere@G3D@@ABVColor4@4@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
