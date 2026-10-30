// from server: 100% by auto
// roc 2012-06 00b1129a  unit: seg_00b10000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b1129a
//
// 00b1129a  68f0a4e500           push 0xe5a4f0
// 00b1129f  b9fca4e500           mov ecx, 0xe5a4fc
// 00b112a4  e81cabf6ff           call 0xa7bdc5
// 00b112a9  687818b200           push 0xb21878
// 00b112ae  e8421fe7ff           call 0x9831f5
// 00b112b3  59                   pop ecx
// 00b112b4  c3                   ret 
// library xtp-15.2.1/Source\Controls\Util\XTPRegistryManager.cpp (function ??__E?m_strINIFileName@CXTPRegistryManager@@1V?$CStringT@DV?$StrTraitMFC@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Util/XTPRegistryManager.cpp
