// roc 2007-08 00776300  unit: seg_00770000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00776300
//
// 00776300  68e46d7c00           push 0x7c6de4
// 00776305  ff1500ec7700         call dword ptr [0x77ec00]
// 0077630b  66a3e8868c00         mov word ptr [0x8c86e8], ax
// 00776311  c3                   ret 
// library xtp-11.2.2-vc8/Source\Common\XTPImageManager.cpp (function ??__E?m_nAlphaClipFormat@CXTPImageManager@@2GA@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPImageManager.cpp
