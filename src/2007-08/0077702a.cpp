// roc 2007-08 0077702a  unit: seg_00770000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077702a
//
// 0077702a  688c988c00           push 0x8c988c
// 0077702f  b998988c00           mov ecx, 0x8c9898
// 00777034  e859e1faff           call 0x725192
// 00777039  6868cd7700           push 0x77cd68
// 0077703e  e8e09cebff           call 0x630d23
// 00777043  59                   pop ecx
// 00777044  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTRegistryManager.cpp (function ??__E?m_strINIFileName@CXTRegistryManager@@1V?$CStringT@DV?$StrTraitMFC@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTRegistryManager.cpp
