// roc 2009-06 007031b0  unit: RBX::AdornG3D  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007031b0
//
// 007031b0  56                   push esi
// 007031b1  8bf1                 mov esi, ecx
// 007031b3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007031b7  8b06                 mov eax, dword ptr [esi]
// 007031b9  8b503c               mov edx, dword ptr [eax + 0x3c]
// 007031bc  51                   push ecx
// 007031bd  8bce                 mov ecx, esi
// 007031bf  ffd2                 call edx
// 007031c1  8b4604               mov eax, dword ptr [esi + 4]
// 007031c4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007031c8  50                   push eax
// 007031c9  51                   push ecx
// 007031ca  e8611a0000           call 0x704c30
// 007031cf  83c408               add esp, 8
// 007031d2  5e                   pop esi
// 007031d3  c20c00               ret 0xc
// library rbxgs-appdraw/AdornG3D.cpp (function ?box@AdornG3D@RBX@@UAEXABVAABox@G3D@@ABVColor4@4@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
