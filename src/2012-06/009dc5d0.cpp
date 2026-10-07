// roc 2012-06 009dc5d0  unit: CXTPTabClientWnd::CSingleWorkspace  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009dc5d0
//
// 009dc5d0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009dc5d4  8b542408             mov edx, dword ptr [esp + 8]
// 009dc5d8  50                   push eax
// 009dc5d9  8b4120               mov eax, dword ptr [ecx + 0x20]
// 009dc5dc  52                   push edx
// 009dc5dd  50                   push eax
// 009dc5de  83c158               add ecx, 0x58
// 009dc5e1  e87a080700           call 0xa4ce60
// 009dc5e6  c20c00               ret 0xc
// library xtp-15.2.1/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnMouseMove@CSingleWorkspace@CXTPTabClientWnd@@QAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPTabClientWnd.cpp
