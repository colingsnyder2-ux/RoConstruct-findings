// roc 2007-03 0070f200  unit: seg_00700000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0070f200
//
// 0070f200  8b4108               mov eax, dword ptr [ecx + 8]
// 0070f203  6a00                 push 0
// 0070f205  6a00                 push 0
// 0070f207  6863030000           push 0x363
// 0070f20c  50                   push eax
// 0070f20d  c7412401000000       mov dword ptr [ecx + 0x24], 1
// 0070f214  ff1548ee7700         call dword ptr [0x77ee48]
// 0070f21a  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007FrameHook.cpp (function ?DelayRecalcFrameLayout@CXTPOffice2007FrameHook@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007FrameHook.cpp
