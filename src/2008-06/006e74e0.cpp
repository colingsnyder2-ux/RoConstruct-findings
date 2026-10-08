// from server: 100% by auto
// roc 2008-06 006e74e0  unit: CXTPToolBar::CControlButtonExpand  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e74e0
//
// 006e74e0  83b97801000000       cmp dword ptr [ecx + 0x178], 0
// 006e74e7  7415                 je 0x6e74fe
// 006e74e9  8b8180000000         mov eax, dword ptr [ecx + 0x80]
// 006e74ef  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 006e74f5  6a01                 push 1
// 006e74f7  50                   push eax
// 006e74f8  e8d3f9fcff           call 0x6b6ed0
// 006e74fd  c3                   ret 
// 006e74fe  e96d3ffcff           jmp 0x6ab470
// library xtp-11.2.2/Source\CommandBars\XTPControlPopup.cpp (function ?OnUnderlineActivate@CXTPControlPopup@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopup.cpp
