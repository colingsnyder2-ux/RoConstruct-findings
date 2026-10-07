// roc 2008-06 00701580  unit: CXTPTabClientWnd::CSingleWorkspace  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00701580
//
// 00701580  8b91e8000000         mov edx, dword ptr [ecx + 0xe8]
// 00701586  b801000000           mov eax, 1
// 0070158b  89425c               mov dword ptr [edx + 0x5c], eax
// 0070158e  8b91e8000000         mov edx, dword ptr [ecx + 0xe8]
// 00701594  894258               mov dword ptr [edx + 0x58], eax
// 00701597  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0070159b  8b542408             mov edx, dword ptr [esp + 8]
// 0070159f  6a00                 push 0
// 007015a1  50                   push eax
// 007015a2  8b4120               mov eax, dword ptr [ecx + 0x20]
// 007015a5  52                   push edx
// 007015a6  50                   push eax
// 007015a7  83c158               add ecx, 0x58
// 007015aa  e801be0700           call 0x77d3b0
// 007015af  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnLButtonDown@CSingleWorkspace@CXTPTabClientWnd@@QAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
