// roc 2009-06 0075fe00  unit: CXTPToolBar::CControlButtonExpand  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0075fe00
//
// 0075fe00  83b97801000000       cmp dword ptr [ecx + 0x178], 0
// 0075fe07  7415                 je 0x75fe1e
// 0075fe09  8b8180000000         mov eax, dword ptr [ecx + 0x80]
// 0075fe0f  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 0075fe15  6a01                 push 1
// 0075fe17  50                   push eax
// 0075fe18  e823f6fcff           call 0x72f440
// 0075fe1d  c3                   ret 
// 0075fe1e  e91dfdfbff           jmp 0x71fb40
// library xtp-11.2.2/Source\CommandBars\XTPControlPopup.cpp (function ?OnUnderlineActivate@CXTPControlPopup@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopup.cpp
