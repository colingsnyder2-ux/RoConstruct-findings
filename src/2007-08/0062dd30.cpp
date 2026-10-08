// roc 2007-08 0062dd30  unit: RBX::AdornG3D  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062dd30
//
// 0062dd30  8b4904               mov ecx, dword ptr [ecx + 4]
// 0062dd33  8d81a8040000         lea eax, [ecx + 0x4a8]
// 0062dd39  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0062dd3d  d901                 fld dword ptr [ecx]
// 0062dd3f  89442404             mov dword ptr [esp + 4], eax
// 0062dd43  d918                 fstp dword ptr [eax]
// 0062dd45  d94104               fld dword ptr [ecx + 4]
// 0062dd48  d95804               fstp dword ptr [eax + 4]
// 0062dd4b  d94108               fld dword ptr [ecx + 8]
// 0062dd4e  d95808               fstp dword ptr [eax + 8]
// 0062dd51  d9410c               fld dword ptr [ecx + 0xc]
// 0062dd54  d9580c               fstp dword ptr [eax + 0xc]
// 0062dd57  ff250ceb7700         jmp dword ptr [0x77eb0c]
// library rbxgs-appdraw/AdornG3D.cpp (function ?setColor@AdornG3D@RBX@@UAEXABVColor4@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
