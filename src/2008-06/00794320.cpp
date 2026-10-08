// from server: 100% by auto
// roc 2008-06 00794320  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00794320
//
// 00794320  8b4108               mov eax, dword ptr [ecx + 8]
// 00794323  6a00                 push 0
// 00794325  6a00                 push 0
// 00794327  6863030000           push 0x363
// 0079432c  50                   push eax
// 0079432d  c7412401000000       mov dword ptr [ecx + 0x24], 1
// 00794334  ff150c2e8000         call dword ptr [0x802e0c]
// 0079433a  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007FrameHook.cpp (function ?DelayRecalcFrameLayout@CXTPOffice2007FrameHook@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007FrameHook.cpp
