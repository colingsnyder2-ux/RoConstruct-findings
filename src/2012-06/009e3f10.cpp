// roc 2012-06 009e3f10  unit: CXTPDockingPane  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e3f10
//
// 009e3f10  33c0                 xor eax, eax
// 009e3f12  394130               cmp dword ptr [ecx + 0x30], eax
// 009e3f15  0f94c0               sete al
// 009e3f18  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPStatusBar.cpp (function ?IsVisible@CXTPStatusBarPane@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPStatusBar.cpp
