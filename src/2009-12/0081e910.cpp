// roc 2009-12 0081e910  unit: CXTPReportControl  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081e910
//
// 0081e910  56                   push esi
// 0081e911  8b742408             mov esi, dword ptr [esp + 8]
// 0081e915  817e0400010000       cmp dword ptr [esi + 4], 0x100
// 0081e91c  57                   push edi
// 0081e91d  8bf9                 mov edi, ecx
// 0081e91f  7528                 jne 0x81e949
// 0081e921  0fb74e0e             movzx ecx, word ptr [esi + 0xe]
// 0081e925  0fb7560c             movzx edx, word ptr [esi + 0xc]
// 0081e929  8b07                 mov eax, dword ptr [edi]
// 0081e92b  51                   push ecx
// 0081e92c  52                   push edx
// 0081e92d  8b9004020000         mov edx, dword ptr [eax + 0x204]
// 0081e933  8d4e08               lea ecx, [esi + 8]
// 0081e936  51                   push ecx
// 0081e937  8bcf                 mov ecx, edi
// 0081e939  ffd2                 call edx
// 0081e93b  85c0                 test eax, eax
// 0081e93d  750a                 jne 0x81e949
// 0081e93f  5f                   pop edi
// 0081e940  b801000000           mov eax, 1
// 0081e945  5e                   pop esi
// 0081e946  c20400               ret 4
// 0081e949  56                   push esi
// 0081e94a  8bcf                 mov ecx, edi
// 0081e94c  e80f55fdff           call 0x7f3e60
// 0081e951  5f                   pop edi
// 0081e952  5e                   pop esi
// 0081e953  c20400               ret 4
// copied from an identical function in another client (function ?PreTranslateMessage@CXTPReportControl@@MAEHPAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp