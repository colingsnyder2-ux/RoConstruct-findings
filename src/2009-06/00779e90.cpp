// roc 2009-06 00779e90  unit: CXTPTabClientWnd::CSingleWorkspace  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00779e90
//
// 00779e90  8b91e8000000         mov edx, dword ptr [ecx + 0xe8]
// 00779e96  b801000000           mov eax, 1
// 00779e9b  89425c               mov dword ptr [edx + 0x5c], eax
// 00779e9e  8b91e8000000         mov edx, dword ptr [ecx + 0xe8]
// 00779ea4  894258               mov dword ptr [edx + 0x58], eax
// 00779ea7  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00779eab  8b542408             mov edx, dword ptr [esp + 8]
// 00779eaf  6a00                 push 0
// 00779eb1  50                   push eax
// 00779eb2  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00779eb5  52                   push edx
// 00779eb6  50                   push eax
// 00779eb7  83c158               add ecx, 0x58
// 00779eba  e891bb0700           call 0x7f5a50
// 00779ebf  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnLButtonDown@CSingleWorkspace@CXTPTabClientWnd@@QAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
