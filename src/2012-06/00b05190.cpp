// roc 2012-06 00b05190  unit: seg_00b00000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b05190
//
// 00b05190  68e83bb400           push 0xb43be8
// 00b05195  b938e2e400           mov ecx, 0xe4e238
// 00b0519a  ff154826b200         call dword ptr [0xb22648]
// 00b051a0  68c0d0b100           push 0xb1d0c0
// 00b051a5  e84be0e7ff           call 0x9831f5
// 00b051aa  59                   pop ecx
// 00b051ab  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\Controls\Util\XTPRegistryManager.cpp (function ??__E?m_strINIFileName@CXTPRegistryManager@@1V?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Controls/Util/XTPRegistryManager.cpp
