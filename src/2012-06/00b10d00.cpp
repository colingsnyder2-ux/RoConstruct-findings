// roc 2012-06 00b10d00  unit: seg_00b10000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b10d00
//
// 00b10d00  68e83bb400           push 0xb43be8
// 00b10d05  b9a8a0e500           mov ecx, 0xe5a0a8
// 00b10d0a  ff15c847b200         call dword ptr [0xb247c8]
// 00b10d10  68f017b200           push 0xb217f0
// 00b10d15  e8db24e7ff           call 0x9831f5
// 00b10d1a  59                   pop ecx
// 00b10d1b  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\Controls\Util\XTPRegistryManager.cpp (function ??__E?m_strINIFileName@CXTPRegistryManager@@1V?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Controls/Util/XTPRegistryManager.cpp
