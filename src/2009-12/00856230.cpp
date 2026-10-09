// roc 2009-12 00856230  unit: CXTPControlTabWorkspace  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00856230
//
// 00856230  8b442404             mov eax, dword ptr [esp + 4]
// 00856234  85c0                 test eax, eax
// 00856236  741e                 je 0x856256
// 00856238  8b4020               mov eax, dword ptr [eax + 0x20]
// 0085623b  8b8984000000         mov ecx, dword ptr [ecx + 0x84]
// 00856241  8b91e8000000         mov edx, dword ptr [ecx + 0xe8]
// 00856247  6a00                 push 0
// 00856249  50                   push eax
// 0085624a  6822020000           push 0x222
// 0085624f  52                   push edx
// 00856250  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00856256  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?MDIActivate@CXTPTabClientWnd@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
