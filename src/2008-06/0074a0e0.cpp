// roc 2008-06 0074a0e0  unit: CXTPReportPaintManager  size: 204 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074a0e0
//
// 0074a0e0  83ec10               sub esp, 0x10
// 0074a0e3  56                   push esi
// 0074a0e4  57                   push edi
// 0074a0e5  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0074a0e9  57                   push edi
// 0074a0ea  8d4c240c             lea ecx, [esp + 0xc]
// 0074a0ee  e83ddafaff           call 0x6f7b30
// 0074a0f3  e8485cf9ff           call 0x6dfd40
// 0074a0f8  6a0f                 push 0xf
// 0074a0fa  8bc8                 mov ecx, eax
// 0074a0fc  e81f54f9ff           call 0x6df520
// 0074a101  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0074a105  50                   push eax
// 0074a106  8d44240c             lea eax, [esp + 0xc]
// 0074a10a  50                   push eax
// 0074a10b  8bce                 mov ecx, esi
// 0074a10d  e84c72f5ff           call 0x6a135e
// 0074a112  83bf8800000000       cmp dword ptr [edi + 0x88], 0
// 0074a119  7422                 je 0x74a13d
// 0074a11b  83bf8c00000000       cmp dword ptr [edi + 0x8c], 0
// 0074a122  7419                 je 0x74a13d
// 0074a124  e8175cf9ff           call 0x6dfd40
// 0074a129  6a05                 push 5
// 0074a12b  8bc8                 mov ecx, eax
// 0074a12d  e8ee53f9ff           call 0x6df520
// 0074a132  8bf8                 mov edi, eax
// 0074a134  e8075cf9ff           call 0x6dfd40
// 0074a139  6a15                 push 0x15
// 0074a13b  eb52                 jmp 0x74a18f
// 0074a13d  e8fe5bf9ff           call 0x6dfd40
// 0074a142  6a15                 push 0x15
// 0074a144  8bc8                 mov ecx, eax
// 0074a146  e8d553f9ff           call 0x6df520
// 0074a14b  8bf8                 mov edi, eax
// 0074a14d  e8ee5bf9ff           call 0x6dfd40
// 0074a152  6a0f                 push 0xf
// 0074a154  8bc8                 mov ecx, eax
// 0074a156  e8c553f9ff           call 0x6df520
// 0074a15b  57                   push edi
// 0074a15c  50                   push eax
// 0074a15d  8d542410             lea edx, [esp + 0x10]
// 0074a161  52                   push edx
// 0074a162  8bce                 mov ecx, esi
// 0074a164  e8ef71f5ff           call 0x6a1358
// 0074a169  6aff                 push -1
// 0074a16b  6aff                 push -1
// 0074a16d  8d442410             lea eax, [esp + 0x10]
// 0074a171  50                   push eax
// 0074a172  ff15282d8000         call dword ptr [0x802d28]
// 0074a178  e8c35bf9ff           call 0x6dfd40
// 0074a17d  6a10                 push 0x10
// 0074a17f  8bc8                 mov ecx, eax
// 0074a181  e89a53f9ff           call 0x6df520
// 0074a186  8bf8                 mov edi, eax
// 0074a188  e8b35bf9ff           call 0x6dfd40
// 0074a18d  6a05                 push 5
// 0074a18f  8bc8                 mov ecx, eax
// 0074a191  e88a53f9ff           call 0x6df520
// 0074a196  57                   push edi
// 0074a197  50                   push eax
// 0074a198  8d4c2410             lea ecx, [esp + 0x10]
// 0074a19c  51                   push ecx
// 0074a19d  8bce                 mov ecx, esi
// 0074a19f  e8b471f5ff           call 0x6a1358
// 0074a1a4  5f                   pop edi
// 0074a1a5  5e                   pop esi
// 0074a1a6  83c410               add esp, 0x10
// 0074a1a9  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportPaintManager.cpp (function ?DrawInplaceButtonFrame@CXTPReportPaintManager@@MAEXPAVCDC@@PAVCXTPReportInplaceButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportPaintManager.cpp
