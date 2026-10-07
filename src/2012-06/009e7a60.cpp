// roc 2012-06 009e7a60  unit: CXTPStatusBar  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e7a60
//
// 009e7a60  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009e7a64  8b542408             mov edx, dword ptr [esp + 8]
// 009e7a68  50                   push eax
// 009e7a69  8b442408             mov eax, dword ptr [esp + 8]
// 009e7a6d  52                   push edx
// 009e7a6e  6a00                 push 0
// 009e7a70  50                   push eax
// 009e7a71  e81afaffff           call 0x9e7490
// 009e7a76  c20c00               ret 0xc
// library xtp-15.2.1/Source\CommandBars\XTPStatusBar.cpp (function ?Create@CXTPStatusBar@@QAEHPAVCWnd@@KI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPStatusBar.cpp
