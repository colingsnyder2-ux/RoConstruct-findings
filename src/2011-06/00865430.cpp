// roc 2011-06 00865430  unit: CXTPControlTabWorkspace  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00865430
//
// 00865430  8b442404             mov eax, dword ptr [esp + 4]
// 00865434  85c0                 test eax, eax
// 00865436  741e                 je 0x865456
// 00865438  8b4020               mov eax, dword ptr [eax + 0x20]
// 0086543b  8b8984000000         mov ecx, dword ptr [ecx + 0x84]
// 00865441  8b91e8000000         mov edx, dword ptr [ecx + 0xe8]
// 00865447  6a00                 push 0
// 00865449  50                   push eax
// 0086544a  6822020000           push 0x222
// 0086544f  52                   push edx
// 00865450  ff15c019a400         call dword ptr [0xa419c0]
// 00865456  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?MDIActivate@CXTPTabClientWnd@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
