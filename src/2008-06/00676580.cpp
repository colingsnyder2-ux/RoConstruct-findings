// roc 2008-06 00676580  unit: RBX::AdornG3D  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00676580
//
// 00676580  56                   push esi
// 00676581  8bf1                 mov esi, ecx
// 00676583  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00676587  8b06                 mov eax, dword ptr [esi]
// 00676589  8b503c               mov edx, dword ptr [eax + 0x3c]
// 0067658c  51                   push ecx
// 0067658d  8bce                 mov ecx, esi
// 0067658f  ffd2                 call edx
// 00676591  8b4604               mov eax, dword ptr [esi + 4]
// 00676594  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00676598  50                   push eax
// 00676599  51                   push ecx
// 0067659a  e8c1190000           call 0x677f60
// 0067659f  83c408               add esp, 8
// 006765a2  5e                   pop esi
// 006765a3  c20c00               ret 0xc
// library rbxgs-appdraw/AdornG3D.cpp (function ?box@AdornG3D@RBX@@UAEXABVAABox@G3D@@ABVColor4@4@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
