// from server: 100% by auto
// roc 2007-08 0068af50  unit: CXTPTabClientWnd  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068af50
//
// 0068af50  8b442404             mov eax, dword ptr [esp + 4]
// 0068af54  85c0                 test eax, eax
// 0068af56  741e                 je 0x68af76
// 0068af58  8b4020               mov eax, dword ptr [eax + 0x20]
// 0068af5b  8b8984000000         mov ecx, dword ptr [ecx + 0x84]
// 0068af61  8b91d4000000         mov edx, dword ptr [ecx + 0xd4]
// 0068af67  6a00                 push 0
// 0068af69  50                   push eax
// 0068af6a  6822020000           push 0x222
// 0068af6f  52                   push edx
// 0068af70  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0068af76  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPTabClientWnd.cpp (function ?MDIActivate@CXTPTabClientWnd@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPTabClientWnd.cpp
