// roc 2008-06 006765b0  unit: RBX::AdornG3D  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006765b0
//
// 006765b0  56                   push esi
// 006765b1  8bf1                 mov esi, ecx
// 006765b3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006765b7  8b06                 mov eax, dword ptr [esi]
// 006765b9  8b503c               mov edx, dword ptr [eax + 0x3c]
// 006765bc  51                   push ecx
// 006765bd  8bce                 mov ecx, esi
// 006765bf  ffd2                 call edx
// 006765c1  8b4604               mov eax, dword ptr [esi + 4]
// 006765c4  50                   push eax
// 006765c5  51                   push ecx
// 006765c6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006765ca  d94110               fld dword ptr [ecx + 0x10]
// 006765cd  d91c24               fstp dword ptr [esp]
// 006765d0  e80b180000           call 0x677de0
// 006765d5  83c408               add esp, 8
// 006765d8  5e                   pop esi
// 006765d9  c20c00               ret 0xc
// library rbxgs-appdraw/AdornG3D.cpp (function ?sphere@AdornG3D@RBX@@UAEXABVSphere@G3D@@ABVColor4@4@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
