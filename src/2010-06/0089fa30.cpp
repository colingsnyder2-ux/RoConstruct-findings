// roc 2010-06 0089fa30  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089fa30
//
// 0089fa30  8b4108               mov eax, dword ptr [ecx + 8]
// 0089fa33  6a00                 push 0
// 0089fa35  6a00                 push 0
// 0089fa37  6863030000           push 0x363
// 0089fa3c  50                   push eax
// 0089fa3d  c7412401000000       mov dword ptr [ecx + 0x24], 1
// 0089fa44  ff1548ba9e00         call dword ptr [0x9eba48]
// 0089fa4a  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007FrameHook.cpp (function ?DelayRecalcFrameLayout@CXTPOffice2007FrameHook@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007FrameHook.cpp
