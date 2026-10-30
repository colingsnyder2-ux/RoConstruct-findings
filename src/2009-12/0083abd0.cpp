// roc 2009-12 0083abd0  unit: CXTPToolBar::CControlButtonExpand  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083abd0
//
// 0083abd0  83b97801000000       cmp dword ptr [ecx + 0x178], 0
// 0083abd7  7415                 je 0x83abee
// 0083abd9  8b8180000000         mov eax, dword ptr [ecx + 0x80]
// 0083abdf  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 0083abe5  6a01                 push 1
// 0083abe7  50                   push eax
// 0083abe8  e8b3b9fcff           call 0x8065a0
// 0083abed  c3                   ret 
// 0083abee  e96db5fbff           jmp 0x7f6160
// library xtp-11.2.2/Source\CommandBars\XTPControlPopup.cpp (function ?OnUnderlineActivate@CXTPControlPopup@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopup.cpp
