// roc 2011-06 00850570  unit: CXTPToolBar::CControlButtonExpand  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00850570
//
// 00850570  83b97801000000       cmp dword ptr [ecx + 0x178], 0
// 00850577  7415                 je 0x85058e
// 00850579  8b8180000000         mov eax, dword ptr [ecx + 0x80]
// 0085057f  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 00850585  6a01                 push 1
// 00850587  50                   push eax
// 00850588  e8f3c5fcff           call 0x81cb80
// 0085058d  c3                   ret 
// 0085058e  e98dc3fbff           jmp 0x80c920
// library xtp-11.2.2/Source\CommandBars\XTPControlPopup.cpp (function ?OnUnderlineActivate@CXTPControlPopup@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopup.cpp
