// roc 2008-06 007015e0  unit: CXTPTabClientWnd::CSingleWorkspace  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007015e0
//
// 007015e0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007015e4  8b542408             mov edx, dword ptr [esp + 8]
// 007015e8  50                   push eax
// 007015e9  8b4120               mov eax, dword ptr [ecx + 0x20]
// 007015ec  52                   push edx
// 007015ed  50                   push eax
// 007015ee  83c158               add ecx, 0x58
// 007015f1  e8dab10700           call 0x77c7d0
// 007015f6  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnMouseMove@CSingleWorkspace@CXTPTabClientWnd@@QAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
