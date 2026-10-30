// roc 2012-06 00a708c0  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a708c0
//
// 00a708c0  8b4108               mov eax, dword ptr [ecx + 8]
// 00a708c3  6a00                 push 0
// 00a708c5  6a00                 push 0
// 00a708c7  6863030000           push 0x363
// 00a708cc  50                   push eax
// 00a708cd  c7412401000000       mov dword ptr [ecx + 0x24], 1
// 00a708d4  ff15243cb200         call dword ptr [0xb23c24]
// 00a708da  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007FrameHook.cpp (function ?DelayRecalcFrameLayout@CXTPOffice2007FrameHook@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007FrameHook.cpp
