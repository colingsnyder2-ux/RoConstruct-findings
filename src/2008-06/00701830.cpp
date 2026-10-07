// roc 2008-06 00701830  unit: CXTPTabClientWnd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00701830
//
// 00701830  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00701834  6a00                 push 0
// 00701836  6a00                 push 0
// 00701838  68b9280000           push 0x28b9
// 0070183d  e83ebdf0ff           call 0x60d580
// 00701842  50                   push eax
// 00701843  ff15142e8000         call dword ptr [0x802e14]
// 00701849  85c0                 test eax, eax
// 0070184b  7503                 jne 0x701850
// 0070184d  83c8ff               or eax, 0xffffffff
// 00701850  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?GetItemColor@CXTPTabClientWnd@@MBEKPBVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
