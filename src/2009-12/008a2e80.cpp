// roc 2009-12 008a2e80  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a2e80
//
// 008a2e80  56                   push esi
// 008a2e81  57                   push edi
// 008a2e82  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008a2e86  8bf1                 mov esi, ecx
// 008a2e88  85ff                 test edi, edi
// 008a2e8a  7c1f                 jl 0x8a2eab
// 008a2e8c  8b06                 mov eax, dword ptr [esi]
// 008a2e8e  8b5058               mov edx, dword ptr [eax + 0x58]
// 008a2e91  ffd2                 call edx
// 008a2e93  3bf8                 cmp edi, eax
// 008a2e95  7d14                 jge 0x8a2eab
// 008a2e97  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008a2e9b  8b06                 mov eax, dword ptr [esi]
// 008a2e9d  8b5064               mov edx, dword ptr [eax + 0x64]
// 008a2ea0  51                   push ecx
// 008a2ea1  57                   push edi
// 008a2ea2  8bce                 mov ecx, esi
// 008a2ea4  ffd2                 call edx
// 008a2ea6  5f                   pop edi
// 008a2ea7  5e                   pop esi
// 008a2ea8  c20800               ret 8
// 008a2eab  680b000280           push 0x8002000b
// 008a2eb0  e8630cf5ff           call 0x7f3b18
// copied from an identical function in another client (function ?OleSetItem@?$CXTPArrayT@PAVCXTPReportHyperlink@@PAV1@PAUIDispatch@@@@MAEXJPAUIDispatch@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportHyperlink.cpp