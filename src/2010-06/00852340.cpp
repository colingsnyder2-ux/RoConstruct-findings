// roc 2010-06 00852340  unit: CXTPReportPaintManager  size: 204 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00852340
//
// 00852340  83ec10               sub esp, 0x10
// 00852343  56                   push esi
// 00852344  57                   push edi
// 00852345  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00852349  57                   push edi
// 0085234a  8d4c240c             lea ecx, [esp + 0xc]
// 0085234e  e8bdcffaff           call 0x7ff310
// 00852353  e8c817f9ff           call 0x7e3b20
// 00852358  6a0f                 push 0xf
// 0085235a  8bc8                 mov ecx, eax
// 0085235c  e84f0ff9ff           call 0x7e32b0
// 00852361  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00852365  50                   push eax
// 00852366  8d44240c             lea eax, [esp + 0xc]
// 0085236a  50                   push eax
// 0085236b  8bce                 mov ecx, esi
// 0085236d  e8cc63f5ff           call 0x7a873e
// 00852372  83bf8800000000       cmp dword ptr [edi + 0x88], 0
// 00852379  7422                 je 0x85239d
// 0085237b  83bf8c00000000       cmp dword ptr [edi + 0x8c], 0
// 00852382  7419                 je 0x85239d
// 00852384  e89717f9ff           call 0x7e3b20
// 00852389  6a05                 push 5
// 0085238b  8bc8                 mov ecx, eax
// 0085238d  e81e0ff9ff           call 0x7e32b0
// 00852392  8bf8                 mov edi, eax
// 00852394  e88717f9ff           call 0x7e3b20
// 00852399  6a15                 push 0x15
// 0085239b  eb52                 jmp 0x8523ef
// 0085239d  e87e17f9ff           call 0x7e3b20
// 008523a2  6a15                 push 0x15
// 008523a4  8bc8                 mov ecx, eax
// 008523a6  e8050ff9ff           call 0x7e32b0
// 008523ab  8bf8                 mov edi, eax
// 008523ad  e86e17f9ff           call 0x7e3b20
// 008523b2  6a0f                 push 0xf
// 008523b4  8bc8                 mov ecx, eax
// 008523b6  e8f50ef9ff           call 0x7e32b0
// 008523bb  57                   push edi
// 008523bc  50                   push eax
// 008523bd  8d542410             lea edx, [esp + 0x10]
// 008523c1  52                   push edx
// 008523c2  8bce                 mov ecx, esi
// 008523c4  e86f63f5ff           call 0x7a8738
// 008523c9  6aff                 push -1
// 008523cb  6aff                 push -1
// 008523cd  8d442410             lea eax, [esp + 0x10]
// 008523d1  50                   push eax
// 008523d2  ff15dcbb9e00         call dword ptr [0x9ebbdc]
// 008523d8  e84317f9ff           call 0x7e3b20
// 008523dd  6a10                 push 0x10
// 008523df  8bc8                 mov ecx, eax
// 008523e1  e8ca0ef9ff           call 0x7e32b0
// 008523e6  8bf8                 mov edi, eax
// 008523e8  e83317f9ff           call 0x7e3b20
// 008523ed  6a05                 push 5
// 008523ef  8bc8                 mov ecx, eax
// 008523f1  e8ba0ef9ff           call 0x7e32b0
// 008523f6  57                   push edi
// 008523f7  50                   push eax
// 008523f8  8d4c2410             lea ecx, [esp + 0x10]
// 008523fc  51                   push ecx
// 008523fd  8bce                 mov ecx, esi
// 008523ff  e83463f5ff           call 0x7a8738
// 00852404  5f                   pop edi
// 00852405  5e                   pop esi
// 00852406  83c410               add esp, 0x10
// 00852409  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportPaintManager.cpp (function ?DrawInplaceButtonFrame@CXTPReportPaintManager@@MAEXPAVCDC@@PAVCXTPReportInplaceButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportPaintManager.cpp
