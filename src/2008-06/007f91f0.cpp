// from server: 100% by auto
// roc 2008-06 007f91f0  unit: seg_007f0000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f91f0
//
// 007f91f0  68b0228500           push 0x8522b0
// 007f91f5  ff15f02d8000         call dword ptr [0x802df0]
// 007f91fb  66a370e09700         mov word ptr [0x97e070], ax
// 007f9201  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPImageManager.cpp (function ??__E?m_nAlphaClipFormat@CXTPImageManager@@2GA@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPImageManager.cpp
