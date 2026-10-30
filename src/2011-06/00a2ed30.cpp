// from server: 100% by auto
// roc 2011-06 00a2ed30  unit: seg_00a20000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2ed30
//
// 00a2ed30  68f031ac00           push 0xac31f0
// 00a2ed35  ff15641ba400         call dword ptr [0xa41b64]
// 00a2ed3b  66a3c481d100         mov word ptr [0xd181c4], ax
// 00a2ed41  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ??__E?m_nImageClipFormat@CXTPImageManager@@2GA@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
