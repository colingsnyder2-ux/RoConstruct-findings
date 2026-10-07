// roc 2012-06 00b104d0  unit: seg_00b10000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b104d0
//
// 00b104d0  68cce8c000           push 0xc0e8cc
// 00b104d5  ff155c3ab200         call dword ptr [0xb23a5c]
// 00b104db  66a33493e500         mov word ptr [0xe59334], ax
// 00b104e1  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ??__E?m_nImageClipFormat@CXTPImageManager@@2GA@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
