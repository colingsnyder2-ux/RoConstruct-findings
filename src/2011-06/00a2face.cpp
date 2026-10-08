// from server: 100% by auto
// roc 2011-06 00a2face  unit: seg_00a20000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2face
//
// 00a2face  681093d100           push 0xd19310
// 00a2fad3  b91c93d100           mov ecx, 0xd1931c
// 00a2fad8  e82c3dedff           call 0x903809
// 00a2fadd  6884fda300           push 0xa3fd84
// 00a2fae2  e876b6ddff           call 0x80b15d
// 00a2fae7  59                   pop ecx
// 00a2fae8  c3                   ret 
// library xtp-15.2.1/Source\Controls\Util\XTPRegistryManager.cpp (function ??__E?m_strINIFileName@CXTPRegistryManager@@1V?$CStringT@DV?$StrTraitMFC@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Util/XTPRegistryManager.cpp
