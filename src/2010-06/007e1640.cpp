// roc 2010-06 007e1640  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e1640
//
// 007e1640  53                   push ebx
// 007e1641  56                   push esi
// 007e1642  57                   push edi
// 007e1643  8bf9                 mov edi, ecx
// 007e1645  8b7728               mov esi, dword ptr [edi + 0x28]
// 007e1648  83ee01               sub esi, 1
// 007e164b  782f                 js 0x7e167c
// 007e164d  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007e1651  85f6                 test esi, esi
// 007e1653  7c4c                 jl 0x7e16a1
// 007e1655  3b7728               cmp esi, dword ptr [edi + 0x28]
// 007e1658  7d47                 jge 0x7e16a1
// 007e165a  8b4724               mov eax, dword ptr [edi + 0x24]
// 007e165d  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 007e1660  85db                 test ebx, ebx
// 007e1662  740e                 je 0x7e1672
// 007e1664  c7415c00000000       mov dword ptr [ecx + 0x5c], 0
// 007e166b  c74128ffffffff       mov dword ptr [ecx + 0x28], 0xffffffff
// 007e1672  e8a568fcff           call 0x7a7f1c
// 007e1677  83ee01               sub esi, 1
// 007e167a  79d5                 jns 0x7e1651
// 007e167c  6aff                 push -1
// 007e167e  6a00                 push 0
// 007e1680  8d4f20               lea ecx, [edi + 0x20]
// 007e1683  e878fcffff           call 0x7e1300
// 007e1688  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 007e168b  85c9                 test ecx, ecx
// 007e168d  740c                 je 0x7e169b
// 007e168f  e88868fcff           call 0x7a7f1c
// 007e1694  c7473400000000       mov dword ptr [edi + 0x34], 0
// 007e169b  5f                   pop edi
// 007e169c  5e                   pop esi
// 007e169d  5b                   pop ebx
// 007e169e  c20400               ret 4
// 007e16a1  e8a665fcff           call 0x7a7c4c
// copied from an identical function in another client (function ?Clear@CXTPReportRows@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRows.cpp