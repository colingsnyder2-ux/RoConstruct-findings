// roc 2009-06 0077b1d0  unit: CRobloxWnd::PartDropTarget  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077b1d0
//
// 0077b1d0  8b442404             mov eax, dword ptr [esp + 4]
// 0077b1d4  85c0                 test eax, eax
// 0077b1d6  741e                 je 0x77b1f6
// 0077b1d8  8b4020               mov eax, dword ptr [eax + 0x20]
// 0077b1db  8b8984000000         mov ecx, dword ptr [ecx + 0x84]
// 0077b1e1  8b91e8000000         mov edx, dword ptr [ecx + 0xe8]
// 0077b1e7  6a00                 push 0
// 0077b1e9  50                   push eax
// 0077b1ea  6822020000           push 0x222
// 0077b1ef  52                   push edx
// 0077b1f0  ff1590ee8900         call dword ptr [0x89ee90]
// 0077b1f6  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?MDIActivate@CXTPTabClientWnd@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
