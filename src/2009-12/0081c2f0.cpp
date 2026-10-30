// roc 2009-12 0081c2f0  unit: CXTPReportRecordItemEditOptions  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081c2f0
//
// 0081c2f0  56                   push esi
// 0081c2f1  8b742408             mov esi, dword ptr [esp + 8]
// 0081c2f5  57                   push edi
// 0081c2f6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0081c2fa  663b3e               cmp di, word ptr [esi]
// 0081c2fd  743a                 je 0x81c339
// 0081c2ff  e8ccffffff           call 0x81c2d0
// 0081c304  57                   push edi
// 0081c305  6a00                 push 0
// 0081c307  50                   push eax
// 0081c308  56                   push esi
// 0081c309  56                   push esi
// 0081c30a  ff157cba9800         call dword ptr [0x98ba7c]
// 0081c310  837c241400           cmp dword ptr [esp + 0x14], 0
// 0081c315  7416                 je 0x81c32d
// 0081c317  85c0                 test eax, eax
// 0081c319  7d12                 jge 0x81c32d
// 0081c31b  3d0e000780           cmp eax, 0x8007000e
// 0081c320  7505                 jne 0x81c327
// 0081c322  e8eb77fdff           call 0x7f3b12
// 0081c327  50                   push eax
// 0081c328  e8eb77fdff           call 0x7f3b18
// 0081c32d  33c9                 xor ecx, ecx
// 0081c32f  85c0                 test eax, eax
// 0081c331  0f9dc1               setge cl
// 0081c334  5f                   pop edi
// 0081c335  5e                   pop esi
// 0081c336  8bc1                 mov eax, ecx
// 0081c338  c3                   ret 
// 0081c339  5f                   pop edi
// 0081c33a  b801000000           mov eax, 1
// 0081c33f  5e                   pop esi
// 0081c340  c3                   ret 
// copied from an identical function in another client (function ?VariantChangeTypeEx@CXTPReportControlLocale@@SAHAAUtagVARIANT@@GH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp