// roc 2007-08 00689920  unit: CXTPTabClientWnd::CSingleWorkspace  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00689920
//
// 00689920  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00689924  8b542408             mov edx, dword ptr [esp + 8]
// 00689928  50                   push eax
// 00689929  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0068992c  52                   push edx
// 0068992d  50                   push eax
// 0068992e  83c158               add ecx, 0x58
// 00689931  e8ba520700           call 0x6febf0
// 00689936  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnMouseMove@CSingleWorkspace@CXTPTabClientWnd@@QAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPTabClientWnd.cpp
