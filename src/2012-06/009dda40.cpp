// roc 2012-06 009dda40  unit: CXTPControlTabWorkspace  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009dda40
//
// 009dda40  8b442404             mov eax, dword ptr [esp + 4]
// 009dda44  85c0                 test eax, eax
// 009dda46  741e                 je 0x9dda66
// 009dda48  8b4020               mov eax, dword ptr [eax + 0x20]
// 009dda4b  8b8984000000         mov ecx, dword ptr [ecx + 0x84]
// 009dda51  8b91e8000000         mov edx, dword ptr [ecx + 0xe8]
// 009dda57  6a00                 push 0
// 009dda59  50                   push eax
// 009dda5a  6822020000           push 0x222
// 009dda5f  52                   push edx
// 009dda60  ff15043cb200         call dword ptr [0xb23c04]
// 009dda66  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?MDIActivate@CXTPTabClientWnd@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
