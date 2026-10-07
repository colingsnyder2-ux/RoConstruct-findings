// roc 2008-06 007f9f34  unit: seg_007f0000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9f34
//
// 007f9f34  68e0f29700           push 0x97f2e0
// 007f9f39  b9ecf29700           mov ecx, 0x97f2ec
// 007f9f3e  e890befaff           call 0x7a5dd3
// 007f9f43  685e198000           push 0x80195e
// 007f9f48  e86278eaff           call 0x6a17af
// 007f9f4d  59                   pop ecx
// 007f9f4e  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTRegistryManager.cpp (function ??__E?m_strINIFileName@CXTRegistryManager@@1V?$CStringT@DV?$StrTraitMFC@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTRegistryManager.cpp
