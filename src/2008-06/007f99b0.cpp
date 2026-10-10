// roc 2008-06 007f99b0  unit: seg_007f0000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f99b0
//
// 007f99b0  6816b78000           push 0x80b716
// 007f99b5  b9cced9700           mov ecx, 0x97edcc
// 007f99ba  ff15103f8000         call dword ptr [0x803f10]
// 007f99c0  68e0188000           push 0x8018e0
// 007f99c5  e8e57deaff           call 0x6a17af
// 007f99ca  59                   pop ecx
// 007f99cb  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\Controls\XTRegistryManager.cpp (function ??__E?m_strINIFileName@CXTRegistryManager@@1V?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTRegistryManager.cpp
