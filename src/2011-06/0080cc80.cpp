// roc 2011-06 0080cc80  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080cc80
//
// 0080cc80  8b442404             mov eax, dword ptr [esp + 4]
// 0080cc84  85c0                 test eax, eax
// 0080cc86  7c0e                 jl 0x80cc96
// 0080cc88  3b4128               cmp eax, dword ptr [ecx + 0x28]
// 0080cc8b  7d09                 jge 0x80cc96
// 0080cc8d  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 0080cc90  8b0481               mov eax, dword ptr [ecx + eax*4]
// 0080cc93  c20400               ret 4
// 0080cc96  e86fd6ffff           call 0x80a30a
// copied from an identical function in another client (function ?GetConstraintAt@CXTPPropertyGridItemConstraints@@QBEPAVCXTPPropertyGridItemConstraint@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp