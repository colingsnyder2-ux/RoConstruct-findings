// roc 2010-06 0080a160  unit: CXTPControlTabWorkspace  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0080a160
//
// 0080a160  8b442404             mov eax, dword ptr [esp + 4]
// 0080a164  85c0                 test eax, eax
// 0080a166  741e                 je 0x80a186
// 0080a168  8b4020               mov eax, dword ptr [eax + 0x20]
// 0080a16b  8b8984000000         mov ecx, dword ptr [ecx + 0x84]
// 0080a171  8b91e8000000         mov edx, dword ptr [ecx + 0xe8]
// 0080a177  6a00                 push 0
// 0080a179  50                   push eax
// 0080a17a  6822020000           push 0x222
// 0080a17f  52                   push edx
// 0080a180  ff1554ba9e00         call dword ptr [0x9eba54]
// 0080a186  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?MDIActivate@CXTPTabClientWnd@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
