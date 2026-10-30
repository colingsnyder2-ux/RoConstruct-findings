// roc 2011-06 008f85b0  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f85b0
//
// 008f85b0  8b4108               mov eax, dword ptr [ecx + 8]
// 008f85b3  6a00                 push 0
// 008f85b5  6a00                 push 0
// 008f85b7  6863030000           push 0x363
// 008f85bc  50                   push eax
// 008f85bd  c7412401000000       mov dword ptr [ecx + 0x24], 1
// 008f85c4  ff15b419a400         call dword ptr [0xa419b4]
// 008f85ca  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007FrameHook.cpp (function ?DelayRecalcFrameLayout@CXTPOffice2007FrameHook@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007FrameHook.cpp
