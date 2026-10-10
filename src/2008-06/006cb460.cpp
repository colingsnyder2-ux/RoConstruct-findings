// roc 2008-06 006cb460  unit: CXTPReportControl  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cb460
//
// 006cb460  56                   push esi
// 006cb461  8b742408             mov esi, dword ptr [esp + 8]
// 006cb465  817e0400010000       cmp dword ptr [esi + 4], 0x100
// 006cb46c  57                   push edi
// 006cb46d  8bf9                 mov edi, ecx
// 006cb46f  7528                 jne 0x6cb499
// 006cb471  0fb74e0e             movzx ecx, word ptr [esi + 0xe]
// 006cb475  0fb7560c             movzx edx, word ptr [esi + 0xc]
// 006cb479  8b07                 mov eax, dword ptr [edi]
// 006cb47b  51                   push ecx
// 006cb47c  52                   push edx
// 006cb47d  8b9004020000         mov edx, dword ptr [eax + 0x204]
// 006cb483  8d4e08               lea ecx, [esi + 8]
// 006cb486  51                   push ecx
// 006cb487  8bcf                 mov ecx, edi
// 006cb489  ffd2                 call edx
// 006cb48b  85c0                 test eax, eax
// 006cb48d  750a                 jne 0x6cb499
// 006cb48f  5f                   pop edi
// 006cb490  b801000000           mov eax, 1
// 006cb495  5e                   pop esi
// 006cb496  c20400               ret 4
// 006cb499  56                   push esi
// 006cb49a  8bcf                 mov ecx, edi
// 006cb49c  e8f757fdff           call 0x6a0c98
// 006cb4a1  5f                   pop edi
// 006cb4a2  5e                   pop esi
// 006cb4a3  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportControl.cpp (function ?PreTranslateMessage@CXTPReportControl@@MAEHPAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp
