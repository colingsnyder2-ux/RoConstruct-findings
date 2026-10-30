// roc 2009-12 008a2e40  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a2e40
//
// 008a2e40  56                   push esi
// 008a2e41  57                   push edi
// 008a2e42  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008a2e46  8bf1                 mov esi, ecx
// 008a2e48  85ff                 test edi, edi
// 008a2e4a  7c1a                 jl 0x8a2e66
// 008a2e4c  8b06                 mov eax, dword ptr [esi]
// 008a2e4e  8b5058               mov edx, dword ptr [eax + 0x58]
// 008a2e51  ffd2                 call edx
// 008a2e53  3bf8                 cmp edi, eax
// 008a2e55  7d0f                 jge 0x8a2e66
// 008a2e57  8b06                 mov eax, dword ptr [esi]
// 008a2e59  8b5060               mov edx, dword ptr [eax + 0x60]
// 008a2e5c  57                   push edi
// 008a2e5d  8bce                 mov ecx, esi
// 008a2e5f  ffd2                 call edx
// 008a2e61  5f                   pop edi
// 008a2e62  5e                   pop esi
// 008a2e63  c20400               ret 4
// 008a2e66  680b000280           push 0x8002000b
// 008a2e6b  e8a80cf5ff           call 0x7f3b18
// copied from an identical function in another client (function ?OleGetItem@?$CXTPArrayT@PAVCXTPReportHyperlink@@PAV1@PAUIDispatch@@@@MAEPAUIDispatch@@J@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportHyperlink.cpp