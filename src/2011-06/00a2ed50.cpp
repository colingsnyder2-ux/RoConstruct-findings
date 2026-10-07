// roc 2011-06 00a2ed50  unit: seg_00a20000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2ed50
//
// 00a2ed50  680832ac00           push 0xac3208
// 00a2ed55  ff15641ba400         call dword ptr [0xa41b64]
// 00a2ed5b  66a3c881d100         mov word ptr [0xd181c8], ax
// 00a2ed61  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ??__E?m_nAlphaClipFormat@CXTPImageManager@@2GA@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
