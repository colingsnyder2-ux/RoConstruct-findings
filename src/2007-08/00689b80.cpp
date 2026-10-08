// from server: 100% by auto
// roc 2007-08 00689b80  unit: CXTPTabClientWnd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00689b80
//
// 00689b80  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00689b84  6a00                 push 0
// 00689b86  6a00                 push 0
// 00689b88  68b9280000           push 0x28b9
// 00689b8d  e8de350700           call 0x6fd170
// 00689b92  50                   push eax
// 00689b93  ff15d8ec7700         call dword ptr [0x77ecd8]
// 00689b99  85c0                 test eax, eax
// 00689b9b  7503                 jne 0x689ba0
// 00689b9d  83c8ff               or eax, 0xffffffff
// 00689ba0  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPTabClientWnd.cpp (function ?GetItemColor@CXTPTabClientWnd@@MBEKPBVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPTabClientWnd.cpp
