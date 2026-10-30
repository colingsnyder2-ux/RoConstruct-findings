// from server: 100% by auto
// roc 2012-06 00b104f0  unit: seg_00b10000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b104f0
//
// 00b104f0  68e4e8c000           push 0xc0e8e4
// 00b104f5  ff155c3ab200         call dword ptr [0xb23a5c]
// 00b104fb  66a33893e500         mov word ptr [0xe59338], ax
// 00b10501  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ??__E?m_nAlphaClipFormat@CXTPImageManager@@2GA@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
