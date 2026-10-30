// roc 2011-06 008f9670  unit: CXTPDialogBar  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f9670
//
// 008f9670  83ec10               sub esp, 0x10
// 008f9673  56                   push esi
// 008f9674  8bf1                 mov esi, ecx
// 008f9676  83bee001000000       cmp dword ptr [esi + 0x1e0], 0
// 008f967d  7454                 je 0x8f96d3
// 008f967f  8d442404             lea eax, [esp + 4]
// 008f9683  50                   push eax
// 008f9684  e807f4ffff           call 0x8f8a90
// 008f9689  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008f968d  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 008f9691  8b442420             mov eax, dword ptr [esp + 0x20]
// 008f9695  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 008f9699  8b542408             mov edx, dword ptr [esp + 8]
// 008f969d  2b442418             sub eax, dword ptr [esp + 0x18]
// 008f96a1  6a14                 push 0x14
// 008f96a3  2b442410             sub eax, dword ptr [esp + 0x10]
// 008f96a7  2bca                 sub ecx, edx
// 008f96a9  51                   push ecx
// 008f96aa  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008f96ae  2bc1                 sub eax, ecx
// 008f96b0  50                   push eax
// 008f96b1  52                   push edx
// 008f96b2  51                   push ecx
// 008f96b3  8b8ee0010000         mov ecx, dword ptr [esi + 0x1e0]
// 008f96b9  6a00                 push 0
// 008f96bb  51                   push ecx
// 008f96bc  ff15d819a400         call dword ptr [0xa419d8]
// 008f96c2  8b96e0010000         mov edx, dword ptr [esi + 0x1e0]
// 008f96c8  6a00                 push 0
// 008f96ca  6a00                 push 0
// 008f96cc  52                   push edx
// 008f96cd  ff15ec19a400         call dword ptr [0xa419ec]
// 008f96d3  5e                   pop esi
// 008f96d4  83c410               add esp, 0x10
// 008f96d7  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?MoveChildWindow@CXTPDialogBar@@IAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
