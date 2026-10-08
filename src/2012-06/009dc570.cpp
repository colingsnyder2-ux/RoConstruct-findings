// roc 2012-06 009dc570  unit: CXTPTabClientWnd::CSingleWorkspace  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009dc570
//
// 009dc570  8b91e8000000         mov edx, dword ptr [ecx + 0xe8]
// 009dc576  b801000000           mov eax, 1
// 009dc57b  89425c               mov dword ptr [edx + 0x5c], eax
// 009dc57e  8b91e8000000         mov edx, dword ptr [ecx + 0xe8]
// 009dc584  894258               mov dword ptr [edx + 0x58], eax
// 009dc587  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009dc58b  8b542408             mov edx, dword ptr [esp + 8]
// 009dc58f  6a00                 push 0
// 009dc591  50                   push eax
// 009dc592  8b4120               mov eax, dword ptr [ecx + 0x20]
// 009dc595  52                   push edx
// 009dc596  50                   push eax
// 009dc597  83c158               add ecx, 0x58
// 009dc59a  e8a1140700           call 0xa4da40
// 009dc59f  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnLButtonDown@CSingleWorkspace@CXTPTabClientWnd@@QAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
