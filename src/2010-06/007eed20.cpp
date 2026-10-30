// roc 2010-06 007eed20  unit: CXTPToolBar::CControlButtonExpand  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007eed20
//
// 007eed20  83b97801000000       cmp dword ptr [ecx + 0x178], 0
// 007eed27  7415                 je 0x7eed3e
// 007eed29  8b8180000000         mov eax, dword ptr [ecx + 0x80]
// 007eed2f  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 007eed35  6a01                 push 1
// 007eed37  50                   push eax
// 007eed38  e8d3b9fcff           call 0x7ba710
// 007eed3d  c3                   ret 
// 007eed3e  e95db5fbff           jmp 0x7aa2a0
// library xtp-11.2.2/Source\CommandBars\XTPControlPopup.cpp (function ?OnUnderlineActivate@CXTPControlPopup@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopup.cpp
