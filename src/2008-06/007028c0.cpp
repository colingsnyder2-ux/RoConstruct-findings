// from server: 100% by auto
// roc 2008-06 007028c0  unit: CXTPControlTabWorkspace  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007028c0
//
// 007028c0  8b442404             mov eax, dword ptr [esp + 4]
// 007028c4  85c0                 test eax, eax
// 007028c6  741e                 je 0x7028e6
// 007028c8  8b4020               mov eax, dword ptr [eax + 0x20]
// 007028cb  8b8984000000         mov ecx, dword ptr [ecx + 0x84]
// 007028d1  8b91e8000000         mov edx, dword ptr [ecx + 0xe8]
// 007028d7  6a00                 push 0
// 007028d9  50                   push eax
// 007028da  6822020000           push 0x222
// 007028df  52                   push edx
// 007028e0  ff15142e8000         call dword ptr [0x802e14]
// 007028e6  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?MDIActivate@CXTPTabClientWnd@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
