// roc 2011-06 00864180  unit: CXTPTabClientWnd::CSingleWorkspace  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00864180
//
// 00864180  8b91e8000000         mov edx, dword ptr [ecx + 0xe8]
// 00864186  b801000000           mov eax, 1
// 0086418b  89425c               mov dword ptr [edx + 0x5c], eax
// 0086418e  8b91e8000000         mov edx, dword ptr [ecx + 0xe8]
// 00864194  894258               mov dword ptr [edx + 0x58], eax
// 00864197  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0086419b  8b542408             mov edx, dword ptr [esp + 8]
// 0086419f  6a00                 push 0
// 008641a1  50                   push eax
// 008641a2  8b4120               mov eax, dword ptr [ecx + 0x20]
// 008641a5  52                   push edx
// 008641a6  50                   push eax
// 008641a7  83c158               add ecx, 0x58
// 008641aa  e841150700           call 0x8d56f0
// 008641af  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnLButtonDown@CSingleWorkspace@CXTPTabClientWnd@@QAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
