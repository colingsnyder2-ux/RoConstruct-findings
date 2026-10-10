// roc 2008-06 00752150  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00752150
//
// 00752150  51                   push ecx
// 00752151  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00752155  56                   push esi
// 00752156  8bf1                 mov esi, ecx
// 00752158  8b06                 mov eax, dword ptr [esi]
// 0075215a  57                   push edi
// 0075215b  8d4c2408             lea ecx, [esp + 8]
// 0075215f  51                   push ecx
// 00752160  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00752164  6a00                 push 0
// 00752166  52                   push edx
// 00752167  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 0075216d  51                   push ecx
// 0075216e  8bce                 mov ecx, esi
// 00752170  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00752178  ffd2                 call edx
// 0075217a  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0075217d  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00752180  8bf8                 mov edi, eax
// 00752182  8d442410             lea eax, [esp + 0x10]
// 00752186  50                   push eax
// 00752187  52                   push edx
// 00752188  ff15802d8000         call dword ptr [0x802d80]
// 0075218e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00752192  6aff                 push -1
// 00752194  8d442414             lea eax, [esp + 0x14]
// 00752198  50                   push eax
// 00752199  6afb                 push -5
// 0075219b  51                   push ecx
// 0075219c  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0075219f  57                   push edi
// 007521a0  56                   push esi
// 007521a1  e80adcf7ff           call 0x6cfdb0
// 007521a6  5f                   pop edi
// 007521a7  5e                   pop esi
// 007521a8  59                   pop ecx
// 007521a9  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportRow.cpp (function ?OnContextMenu@CXTPReportRow@@UAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRow.cpp
