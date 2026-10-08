// roc 2009-06 00703350  unit: RBX::AdornG3D  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00703350
//
// 00703350  8b4904               mov ecx, dword ptr [ecx + 4]
// 00703353  8d81a8040000         lea eax, [ecx + 0x4a8]
// 00703359  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0070335d  d901                 fld dword ptr [ecx]
// 0070335f  89442404             mov dword ptr [esp + 4], eax
// 00703363  d918                 fstp dword ptr [eax]
// 00703365  d94104               fld dword ptr [ecx + 4]
// 00703368  d95804               fstp dword ptr [eax + 4]
// 0070336b  d94108               fld dword ptr [ecx + 8]
// 0070336e  d95808               fstp dword ptr [eax + 8]
// 00703371  d9410c               fld dword ptr [ecx + 0xc]
// 00703374  d9580c               fstp dword ptr [eax + 0xc]
// 00703377  ff2594eb8900         jmp dword ptr [0x89eb94]
// library rbxgs-appdraw/AdornG3D.cpp (function ?setColor@AdornG3D@RBX@@UAEXABVColor4@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
