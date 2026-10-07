// roc 2011-06 008641e0  unit: CXTPTabClientWnd::CSingleWorkspace  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008641e0
//
// 008641e0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008641e4  8b542408             mov edx, dword ptr [esp + 8]
// 008641e8  50                   push eax
// 008641e9  8b4120               mov eax, dword ptr [ecx + 0x20]
// 008641ec  52                   push edx
// 008641ed  50                   push eax
// 008641ee  83c158               add ecx, 0x58
// 008641f1  e81a090700           call 0x8d4b10
// 008641f6  c20c00               ret 0xc
// library xtp-15.2.1/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnMouseMove@CSingleWorkspace@CXTPTabClientWnd@@QAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPTabClientWnd.cpp
