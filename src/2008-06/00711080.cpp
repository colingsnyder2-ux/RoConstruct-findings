// roc 2008-06 00711080  unit: CXTPPropertyGridItem  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00711080
//
// 00711080  8bc1                 mov eax, ecx
// 00711082  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00711086  8988e0000000         mov dword ptr [eax + 0xe0], ecx
// 0071108c  85c9                 test ecx, ecx
// 0071108e  740f                 je 0x71109f
// 00711090  05a4000000           add eax, 0xa4
// 00711095  89442404             mov dword ptr [esp + 4], eax
// 00711099  ff2544318000         jmp dword ptr [0x803144]
// 0071109f  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?BindToString@CXTPPropertyGridItem@@QAEXPAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp
