// roc 2011-06 00864430  unit: CXTPTabClientWnd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00864430
//
// 00864430  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00864434  6a00                 push 0
// 00864436  6a00                 push 0
// 00864438  68b9280000           push 0x28b9
// 0086443d  e87e7a0000           call 0x86bec0
// 00864442  50                   push eax
// 00864443  ff15c019a400         call dword ptr [0xa419c0]
// 00864449  85c0                 test eax, eax
// 0086444b  7503                 jne 0x864450
// 0086444d  83c8ff               or eax, 0xffffffff
// 00864450  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPTabClientWnd.cpp (function ?GetItemColor@CXTPTabClientWnd@@MBEKPBVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPTabClientWnd.cpp
