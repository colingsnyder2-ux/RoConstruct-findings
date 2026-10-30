// roc 2009-12 008182f0  unit: CRobloxReportView  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008182f0
//
// 008182f0  8b01                 mov eax, dword ptr [ecx]
// 008182f2  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 008182f8  56                   push esi
// 008182f9  57                   push edi
// 008182fa  ffd2                 call edx
// 008182fc  8b10                 mov edx, dword ptr [eax]
// 008182fe  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00818302  8b3e                 mov edi, dword ptr [esi]
// 00818304  8bc8                 mov ecx, eax
// 00818306  8b827c010000         mov eax, dword ptr [edx + 0x17c]
// 0081830c  ffd0                 call eax
// 0081830e  8b17                 mov edx, dword ptr [edi]
// 00818310  50                   push eax
// 00818311  8bce                 mov ecx, esi
// 00818313  ffd2                 call edx
// 00818315  5f                   pop edi
// 00818316  5e                   pop esi
// 00818317  c20400               ret 4
// copied from an identical function in another client (function ?OnUpdateEditCopy@CXTPReportView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportView.cpp