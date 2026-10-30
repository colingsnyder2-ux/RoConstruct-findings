// roc 2009-12 008181d0  unit: CRobloxReportView  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008181d0
//
// 008181d0  53                   push ebx
// 008181d1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 008181d5  55                   push ebp
// 008181d6  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 008181da  56                   push esi
// 008181db  8bf1                 mov esi, ecx
// 008181dd  8b8664030000         mov eax, dword ptr [esi + 0x364]
// 008181e3  57                   push edi
// 008181e4  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 008181e8  85c0                 test eax, eax
// 008181ea  7419                 je 0x818205
// 008181ec  3be8                 cmp ebp, eax
// 008181ee  7515                 jne 0x818205
// 008181f0  8b06                 mov eax, dword ptr [esi]
// 008181f2  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 008181f8  6a00                 push 0
// 008181fa  57                   push edi
// 008181fb  53                   push ebx
// 008181fc  ffd2                 call edx
// 008181fe  8bc8                 mov ecx, eax
// 00818200  e80b590000           call 0x81db10
// 00818205  55                   push ebp
// 00818206  57                   push edi
// 00818207  53                   push ebx
// 00818208  8bce                 mov ecx, esi
// 0081820a  e8fbe31000           call 0x92660a
// 0081820f  5f                   pop edi
// 00818210  5e                   pop esi
// 00818211  5d                   pop ebp
// 00818212  5b                   pop ebx
// 00818213  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnVScroll@CXTPReportView@@IAEXIIPAVCScrollBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportView.cpp