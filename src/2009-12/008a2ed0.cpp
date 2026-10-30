// roc 2009-12 008a2ed0  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a2ed0
//
// 008a2ed0  56                   push esi
// 008a2ed1  57                   push edi
// 008a2ed2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008a2ed6  8bf1                 mov esi, ecx
// 008a2ed8  85ff                 test edi, edi
// 008a2eda  7c1f                 jl 0x8a2efb
// 008a2edc  8b06                 mov eax, dword ptr [esi]
// 008a2ede  8b5058               mov edx, dword ptr [eax + 0x58]
// 008a2ee1  ffd2                 call edx
// 008a2ee3  3bf8                 cmp edi, eax
// 008a2ee5  7d14                 jge 0x8a2efb
// 008a2ee7  8b06                 mov eax, dword ptr [esi]
// 008a2ee9  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 008a2eef  6a01                 push 1
// 008a2ef1  57                   push edi
// 008a2ef2  8bce                 mov ecx, esi
// 008a2ef4  ffd2                 call edx
// 008a2ef6  5f                   pop edi
// 008a2ef7  5e                   pop esi
// 008a2ef8  c20400               ret 4
// 008a2efb  680b000280           push 0x8002000b
// 008a2f00  e8130cf5ff           call 0x7f3b18
// copied from an identical function in another client (function ?OleRemove@?$CXTPArrayT@PAVCXTPReportHyperlink@@PAV1@PAUIDispatch@@@@MAEXJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportHyperlink.cpp