// roc 2009-12 00864890  unit: CXTPPropertyGridItem  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00864890
//
// 00864890  8bc1                 mov eax, ecx
// 00864892  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00864896  8988e0000000         mov dword ptr [eax + 0xe0], ecx
// 0086489c  85c9                 test ecx, ecx
// 0086489e  740f                 je 0x8648af
// 008648a0  05a4000000           add eax, 0xa4
// 008648a5  89442404             mov dword ptr [esp + 4], eax
// 008648a9  ff2538d59800         jmp dword ptr [0x98d538]
// 008648af  c20400               ret 4
// copied from an identical function in another client (function ?BindToString@CXTPPropertyGridItem@@QAEXPAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp