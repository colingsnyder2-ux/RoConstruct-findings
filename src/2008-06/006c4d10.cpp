// roc 2008-06 006c4d10  unit: CRobloxReportView  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c4d10
//
// 006c4d10  53                   push ebx
// 006c4d11  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006c4d15  55                   push ebp
// 006c4d16  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006c4d1a  56                   push esi
// 006c4d1b  8bf1                 mov esi, ecx
// 006c4d1d  8b8664030000         mov eax, dword ptr [esi + 0x364]
// 006c4d23  57                   push edi
// 006c4d24  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006c4d28  85c0                 test eax, eax
// 006c4d2a  7419                 je 0x6c4d45
// 006c4d2c  3be8                 cmp ebp, eax
// 006c4d2e  7515                 jne 0x6c4d45
// 006c4d30  8b06                 mov eax, dword ptr [esi]
// 006c4d32  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 006c4d38  6a00                 push 0
// 006c4d3a  57                   push edi
// 006c4d3b  53                   push ebx
// 006c4d3c  ffd2                 call edx
// 006c4d3e  8bc8                 mov ecx, eax
// 006c4d40  e80b590000           call 0x6ca650
// 006c4d45  55                   push ebp
// 006c4d46  57                   push edi
// 006c4d47  53                   push ebx
// 006c4d48  8bce                 mov ecx, esi
// 006c4d4a  e841740f00           call 0x7bc190
// 006c4d4f  5f                   pop edi
// 006c4d50  5e                   pop esi
// 006c4d51  5d                   pop ebp
// 006c4d52  5b                   pop ebx
// 006c4d53  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportView.cpp (function ?OnVScroll@CXTPReportView@@IAEXIIPAVCScrollBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportView.cpp
