// from server: 100% by auto
// roc 2012-06 009dc820  unit: CXTPTabClientWnd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009dc820
//
// 009dc820  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009dc824  6a00                 push 0
// 009dc826  6a00                 push 0
// 009dc828  68b9280000           push 0x28b9
// 009dc82d  e87e7afdff           call 0x9b42b0
// 009dc832  50                   push eax
// 009dc833  ff15043cb200         call dword ptr [0xb23c04]
// 009dc839  85c0                 test eax, eax
// 009dc83b  7503                 jne 0x9dc840
// 009dc83d  83c8ff               or eax, 0xffffffff
// 009dc840  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPTabClientWnd.cpp (function ?GetItemColor@CXTPTabClientWnd@@MBEKPBVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPTabClientWnd.cpp
