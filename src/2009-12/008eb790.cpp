// roc 2009-12 008eb790  unit: CXTPScrollBase  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008eb790
//
// 008eb790  8b4108               mov eax, dword ptr [ecx + 8]
// 008eb793  6a00                 push 0
// 008eb795  6a00                 push 0
// 008eb797  6863030000           push 0x363
// 008eb79c  50                   push eax
// 008eb79d  c7412401000000       mov dword ptr [ecx + 0x24], 1
// 008eb7a4  ff15b8cb9800         call dword ptr [0x98cbb8]
// 008eb7aa  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007FrameHook.cpp (function ?DelayRecalcFrameLayout@CXTPOffice2007FrameHook@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007FrameHook.cpp
