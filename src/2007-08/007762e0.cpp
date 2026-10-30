// from server: 100% by auto
// roc 2007-08 007762e0  unit: seg_00770000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007762e0
//
// 007762e0  68cc6d7c00           push 0x7c6dcc
// 007762e5  ff1500ec7700         call dword ptr [0x77ec00]
// 007762eb  66a3e4868c00         mov word ptr [0x8c86e4], ax
// 007762f1  c3                   ret 
// library xtp-11.2.2-vc8/Source\Common\XTPImageManager.cpp (function ??__E?m_nImageClipFormat@CXTPImageManager@@2GA@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPImageManager.cpp
