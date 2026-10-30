// roc 2009-12 00854c10  unit: CXTPTabClientWnd::CSingleWorkspace  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00854c10
//
// 00854c10  8b91e8000000         mov edx, dword ptr [ecx + 0xe8]
// 00854c16  b801000000           mov eax, 1
// 00854c1b  89425c               mov dword ptr [edx + 0x5c], eax
// 00854c1e  8b91e8000000         mov edx, dword ptr [ecx + 0xe8]
// 00854c24  894258               mov dword ptr [edx + 0x58], eax
// 00854c27  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00854c2b  8b542408             mov edx, dword ptr [esp + 8]
// 00854c2f  6a00                 push 0
// 00854c31  50                   push eax
// 00854c32  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00854c35  52                   push edx
// 00854c36  50                   push eax
// 00854c37  83c158               add ecx, 0x58
// 00854c3a  e8e1b90700           call 0x8d0620
// 00854c3f  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnLButtonDown@CSingleWorkspace@CXTPTabClientWnd@@QAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
