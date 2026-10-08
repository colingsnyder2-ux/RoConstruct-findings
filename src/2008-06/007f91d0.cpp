// from server: 100% by auto
// roc 2008-06 007f91d0  unit: seg_007f0000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f91d0
//
// 007f91d0  6898228500           push 0x852298
// 007f91d5  ff15f02d8000         call dword ptr [0x802df0]
// 007f91db  66a36ce09700         mov word ptr [0x97e06c], ax
// 007f91e1  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPImageManager.cpp (function ??__E?m_nImageClipFormat@CXTPImageManager@@2GA@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPImageManager.cpp
