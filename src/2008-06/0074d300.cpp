// roc 2008-06 0074d300  unit: CXTPReportInplaceEdit  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074d300
//
// 0074d300  56                   push esi
// 0074d301  8b742408             mov esi, dword ptr [esp + 8]
// 0074d305  817e0400010000       cmp dword ptr [esi + 4], 0x100
// 0074d30c  57                   push edi
// 0074d30d  8bf9                 mov edi, ecx
// 0074d30f  7544                 jne 0x74d355
// 0074d311  837f5800             cmp dword ptr [edi + 0x58], 0
// 0074d315  7429                 je 0x74d340
// 0074d317  0fb7560e             movzx edx, word ptr [esi + 0xe]
// 0074d31b  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 0074d31e  8b01                 mov eax, dword ptr [ecx]
// 0074d320  8b8004020000         mov eax, dword ptr [eax + 0x204]
// 0074d326  52                   push edx
// 0074d327  0fb7560c             movzx edx, word ptr [esi + 0xc]
// 0074d32b  52                   push edx
// 0074d32c  8d5608               lea edx, [esi + 8]
// 0074d32f  52                   push edx
// 0074d330  ffd0                 call eax
// 0074d332  85c0                 test eax, eax
// 0074d334  750a                 jne 0x74d340
// 0074d336  5f                   pop edi
// 0074d337  b801000000           mov eax, 1
// 0074d33c  5e                   pop esi
// 0074d33d  c20400               ret 4
// 0074d340  817e0400010000       cmp dword ptr [esi + 4], 0x100
// 0074d347  750c                 jne 0x74d355
// 0074d349  56                   push esi
// 0074d34a  8bcf                 mov ecx, edi
// 0074d34c  e8a1ec0600           call 0x7bbff2
// 0074d351  85c0                 test eax, eax
// 0074d353  75e1                 jne 0x74d336
// 0074d355  56                   push esi
// 0074d356  8bcf                 mov ecx, edi
// 0074d358  e83b39f5ff           call 0x6a0c98
// 0074d35d  5f                   pop edi
// 0074d35e  5e                   pop esi
// 0074d35f  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportInplaceControls.cpp (function ?PreTranslateMessage@CXTPReportInplaceEdit@@MAEHPAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportInplaceControls.cpp
