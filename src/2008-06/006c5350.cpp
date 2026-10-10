// roc 2008-06 006c5350  unit: CRobloxReportView  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c5350
//
// 006c5350  56                   push esi
// 006c5351  8bf1                 mov esi, ecx
// 006c5353  8b06                 mov eax, dword ptr [esi]
// 006c5355  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 006c535b  57                   push edi
// 006c535c  ffd2                 call edx
// 006c535e  8b8828010000         mov ecx, dword ptr [eax + 0x128]
// 006c5364  e8a7610100           call 0x6db510
// 006c5369  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006c536d  85c0                 test eax, eax
// 006c536f  7e09                 jle 0x6c537a
// 006c5371  8b07                 mov eax, dword ptr [edi]
// 006c5373  8b4074               mov eax, dword ptr [eax + 0x74]
// 006c5376  836014fb             and dword ptr [eax + 0x14], 0xfffffffb
// 006c537a  8b8e70030000         mov ecx, dword ptr [esi + 0x370]
// 006c5380  894f0c               mov dword ptr [edi + 0xc], ecx
// 006c5383  57                   push edi
// 006c5384  8bce                 mov ecx, esi
// 006c5386  e833c0fdff           call 0x6a13be
// 006c538b  85c0                 test eax, eax
// 006c538d  7505                 jne 0x6c5394
// 006c538f  5f                   pop edi
// 006c5390  5e                   pop esi
// 006c5391  c20400               ret 4
// 006c5394  8b17                 mov edx, dword ptr [edi]
// 006c5396  8b4274               mov eax, dword ptr [edx + 0x74]
// 006c5399  8b4814               mov ecx, dword ptr [eax + 0x14]
// 006c539c  83e101               and ecx, 1
// 006c539f  5f                   pop edi
// 006c53a0  898e5c030000         mov dword ptr [esi + 0x35c], ecx
// 006c53a6  b801000000           mov eax, 1
// 006c53ab  5e                   pop esi
// 006c53ac  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportView.cpp (function ?OnPreparePrinting@CXTPReportView@@MAEHPAUCPrintInfo@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportView.cpp
