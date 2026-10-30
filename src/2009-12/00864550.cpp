// roc 2009-12 00864550  unit: CXTAuxData  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00864550
//
// 00864550  51                   push ecx
// 00864551  56                   push esi
// 00864552  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00864556  81c1b0000000         add ecx, 0xb0
// 0086455c  51                   push ecx
// 0086455d  8bce                 mov ecx, esi
// 0086455f  c744240800000000     mov dword ptr [esp + 8], 0
// 00864567  ff1594de9800         call dword ptr [0x98de94]
// 0086456d  8bc6                 mov eax, esi
// 0086456f  5e                   pop esi
// 00864570  59                   pop ecx
// 00864571  c20400               ret 4
// copied from an identical function in another client (function ?GetDescription@CXTPPropertyGridItem@@QBE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp