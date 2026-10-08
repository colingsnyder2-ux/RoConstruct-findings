// roc 2009-06 00810bf0  unit: CXTPScrollBase  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00810bf0
//
// 00810bf0  8b4108               mov eax, dword ptr [ecx + 8]
// 00810bf3  6a00                 push 0
// 00810bf5  6a00                 push 0
// 00810bf7  6863030000           push 0x363
// 00810bfc  50                   push eax
// 00810bfd  c7412401000000       mov dword ptr [ecx + 0x24], 1
// 00810c04  ff159cee8900         call dword ptr [0x89ee9c]
// 00810c0a  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007FrameHook.cpp (function ?DelayRecalcFrameLayout@CXTPOffice2007FrameHook@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007FrameHook.cpp
