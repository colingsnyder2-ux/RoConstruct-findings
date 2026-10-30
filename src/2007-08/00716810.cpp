// from server: 100% by auto
// roc 2007-08 00716810  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00716810
//
// 00716810  8b4108               mov eax, dword ptr [ecx + 8]
// 00716813  6a00                 push 0
// 00716815  6a00                 push 0
// 00716817  6863030000           push 0x363
// 0071681c  50                   push eax
// 0071681d  c7412401000000       mov dword ptr [ecx + 0x24], 1
// 00716824  ff15d0ec7700         call dword ptr [0x77ecd0]
// 0071682a  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPOffice2007FrameHook.cpp (function ?DelayRecalcFrameLayout@CXTPOffice2007FrameHook@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPOffice2007FrameHook.cpp
