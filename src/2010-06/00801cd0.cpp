// roc 2010-06 00801cd0  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00801cd0
//
// 00801cd0  8b442404             mov eax, dword ptr [esp + 4]
// 00801cd4  85c0                 test eax, eax
// 00801cd6  7c0e                 jl 0x801ce6
// 00801cd8  3b4128               cmp eax, dword ptr [ecx + 0x28]
// 00801cdb  7d09                 jge 0x801ce6
// 00801cdd  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 00801ce0  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00801ce3  c20400               ret 4
// 00801ce6  e8615ffaff           call 0x7a7c4c
// copied from an identical function in another client (function ?GetConstraintAt@CXTPPropertyGridItemConstraints@@QBEPAVCXTPPropertyGridItemConstraint@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp