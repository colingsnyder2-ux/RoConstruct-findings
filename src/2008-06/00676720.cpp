// roc 2008-06 00676720  unit: RBX::AdornG3D  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00676720
//
// 00676720  8b4904               mov ecx, dword ptr [ecx + 4]
// 00676723  8d81a8040000         lea eax, [ecx + 0x4a8]
// 00676729  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0067672d  d901                 fld dword ptr [ecx]
// 0067672f  89442404             mov dword ptr [esp + 4], eax
// 00676733  d918                 fstp dword ptr [eax]
// 00676735  d94104               fld dword ptr [ecx + 4]
// 00676738  d95804               fstp dword ptr [eax + 4]
// 0067673b  d94108               fld dword ptr [ecx + 8]
// 0067673e  d95808               fstp dword ptr [eax + 8]
// 00676741  d9410c               fld dword ptr [ecx + 0xc]
// 00676744  d9580c               fstp dword ptr [eax + 0xc]
// 00676747  ff25f4298000         jmp dword ptr [0x8029f4]
// library rbxgs-appdraw/AdornG3D.cpp (function ?setColor@AdornG3D@RBX@@UAEXABVColor4@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
