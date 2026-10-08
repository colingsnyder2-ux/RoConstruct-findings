// roc 2008-06 006765f0  unit: RBX::AdornG3D  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006765f0
//
// 006765f0  56                   push esi
// 006765f1  8bf1                 mov esi, ecx
// 006765f3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006765f7  8b06                 mov eax, dword ptr [esi]
// 006765f9  8b503c               mov edx, dword ptr [eax + 0x3c]
// 006765fc  51                   push ecx
// 006765fd  8bce                 mov ecx, esi
// 006765ff  ffd2                 call edx
// 00676601  d944240c             fld dword ptr [esp + 0xc]
// 00676605  8b4604               mov eax, dword ptr [esi + 4]
// 00676608  50                   push eax
// 00676609  83ec08               sub esp, 8
// 0067660c  d95c2404             fstp dword ptr [esp + 4]
// 00676610  d9442414             fld dword ptr [esp + 0x14]
// 00676614  d91c24               fstp dword ptr [esp]
// 00676617  e804180000           call 0x677e20
// 0067661c  83c40c               add esp, 0xc
// 0067661f  5e                   pop esi
// 00676620  c21000               ret 0x10
// library rbxgs-appdraw/AdornG3D.cpp (function ?cylinderAlongX@AdornG3D@RBX@@UAEXMMABVColor4@G3D@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
