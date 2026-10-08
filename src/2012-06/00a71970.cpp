// roc 2012-06 00a71970  unit: CXTPDialogBar  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a71970
//
// 00a71970  83ec10               sub esp, 0x10
// 00a71973  56                   push esi
// 00a71974  8bf1                 mov esi, ecx
// 00a71976  83bee001000000       cmp dword ptr [esi + 0x1e0], 0
// 00a7197d  7454                 je 0xa719d3
// 00a7197f  8d442404             lea eax, [esp + 4]
// 00a71983  50                   push eax
// 00a71984  e817f4ffff           call 0xa70da0
// 00a71989  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a7198d  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 00a71991  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a71995  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 00a71999  8b542408             mov edx, dword ptr [esp + 8]
// 00a7199d  2b442418             sub eax, dword ptr [esp + 0x18]
// 00a719a1  6a14                 push 0x14
// 00a719a3  2b442410             sub eax, dword ptr [esp + 0x10]
// 00a719a7  2bca                 sub ecx, edx
// 00a719a9  51                   push ecx
// 00a719aa  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a719ae  2bc1                 sub eax, ecx
// 00a719b0  50                   push eax
// 00a719b1  52                   push edx
// 00a719b2  51                   push ecx
// 00a719b3  8b8ee0010000         mov ecx, dword ptr [esi + 0x1e0]
// 00a719b9  6a00                 push 0
// 00a719bb  51                   push ecx
// 00a719bc  ff15443bb200         call dword ptr [0xb23b44]
// 00a719c2  8b96e0010000         mov edx, dword ptr [esi + 0x1e0]
// 00a719c8  6a00                 push 0
// 00a719ca  6a00                 push 0
// 00a719cc  52                   push edx
// 00a719cd  ff15ec3bb200         call dword ptr [0xb23bec]
// 00a719d3  5e                   pop esi
// 00a719d4  83c410               add esp, 0x10
// 00a719d7  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?MoveChildWindow@CXTPDialogBar@@IAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
