// roc 2012-06 009c8a40  unit: CXTPToolBar::CControlButtonExpand  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c8a40
//
// 009c8a40  83b97801000000       cmp dword ptr [ecx + 0x178], 0
// 009c8a47  7415                 je 0x9c8a5e
// 009c8a49  8b8180000000         mov eax, dword ptr [ecx + 0x80]
// 009c8a4f  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 009c8a55  6a01                 push 1
// 009c8a57  50                   push eax
// 009c8a58  e8f3c3fcff           call 0x994e50
// 009c8a5d  c3                   ret 
// 009c8a5e  e95dc1fbff           jmp 0x984bc0
// library xtp-11.2.2/Source\CommandBars\XTPControlPopup.cpp (function ?OnUnderlineActivate@CXTPControlPopup@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopup.cpp
