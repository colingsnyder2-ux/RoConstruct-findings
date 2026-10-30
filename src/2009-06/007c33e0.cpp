// roc 2009-06 007c33e0  unit: CXTPReportPaintManager  size: 204 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007c33e0
//
// 007c33e0  83ec10               sub esp, 0x10
// 007c33e3  56                   push esi
// 007c33e4  57                   push edi
// 007c33e5  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 007c33e9  57                   push edi
// 007c33ea  8d4c240c             lea ecx, [esp + 0xc]
// 007c33ee  e8ddd0faff           call 0x7704d0
// 007c33f3  e82817f9ff           call 0x754b20
// 007c33f8  6a0f                 push 0xf
// 007c33fa  8bc8                 mov ecx, eax
// 007c33fc  e89f0ef9ff           call 0x7542a0
// 007c3401  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 007c3405  50                   push eax
// 007c3406  8d44240c             lea eax, [esp + 0xc]
// 007c340a  50                   push eax
// 007c340b  8bce                 mov ecx, esi
// 007c340d  e8be63f5ff           call 0x7197d0
// 007c3412  83bf8800000000       cmp dword ptr [edi + 0x88], 0
// 007c3419  7422                 je 0x7c343d
// 007c341b  83bf8c00000000       cmp dword ptr [edi + 0x8c], 0
// 007c3422  7419                 je 0x7c343d
// 007c3424  e8f716f9ff           call 0x754b20
// 007c3429  6a05                 push 5
// 007c342b  8bc8                 mov ecx, eax
// 007c342d  e86e0ef9ff           call 0x7542a0
// 007c3432  8bf8                 mov edi, eax
// 007c3434  e8e716f9ff           call 0x754b20
// 007c3439  6a15                 push 0x15
// 007c343b  eb52                 jmp 0x7c348f
// 007c343d  e8de16f9ff           call 0x754b20
// 007c3442  6a15                 push 0x15
// 007c3444  8bc8                 mov ecx, eax
// 007c3446  e8550ef9ff           call 0x7542a0
// 007c344b  8bf8                 mov edi, eax
// 007c344d  e8ce16f9ff           call 0x754b20
// 007c3452  6a0f                 push 0xf
// 007c3454  8bc8                 mov ecx, eax
// 007c3456  e8450ef9ff           call 0x7542a0
// 007c345b  57                   push edi
// 007c345c  50                   push eax
// 007c345d  8d542410             lea edx, [esp + 0x10]
// 007c3461  52                   push edx
// 007c3462  8bce                 mov ecx, esi
// 007c3464  e86163f5ff           call 0x7197ca
// 007c3469  6aff                 push -1
// 007c346b  6aff                 push -1
// 007c346d  8d442410             lea eax, [esp + 0x10]
// 007c3471  50                   push eax
// 007c3472  ff15bced8900         call dword ptr [0x89edbc]
// 007c3478  e8a316f9ff           call 0x754b20
// 007c347d  6a10                 push 0x10
// 007c347f  8bc8                 mov ecx, eax
// 007c3481  e81a0ef9ff           call 0x7542a0
// 007c3486  8bf8                 mov edi, eax
// 007c3488  e89316f9ff           call 0x754b20
// 007c348d  6a05                 push 5
// 007c348f  8bc8                 mov ecx, eax
// 007c3491  e80a0ef9ff           call 0x7542a0
// 007c3496  57                   push edi
// 007c3497  50                   push eax
// 007c3498  8d4c2410             lea ecx, [esp + 0x10]
// 007c349c  51                   push ecx
// 007c349d  8bce                 mov ecx, esi
// 007c349f  e82663f5ff           call 0x7197ca
// 007c34a4  5f                   pop edi
// 007c34a5  5e                   pop esi
// 007c34a6  83c410               add esp, 0x10
// 007c34a9  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportPaintManager.cpp (function ?DrawInplaceButtonFrame@CXTPReportPaintManager@@MAEXPAVCDC@@PAVCXTPReportInplaceButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportPaintManager.cpp
