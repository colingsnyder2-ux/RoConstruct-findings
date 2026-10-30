// roc 2009-12 008a13e0  unit: CXTPReportInplaceEdit  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a13e0
//
// 008a13e0  56                   push esi
// 008a13e1  8b742408             mov esi, dword ptr [esp + 8]
// 008a13e5  817e0400010000       cmp dword ptr [esi + 4], 0x100
// 008a13ec  57                   push edi
// 008a13ed  8bf9                 mov edi, ecx
// 008a13ef  7544                 jne 0x8a1435
// 008a13f1  837f5800             cmp dword ptr [edi + 0x58], 0
// 008a13f5  7429                 je 0x8a1420
// 008a13f7  0fb7560e             movzx edx, word ptr [esi + 0xe]
// 008a13fb  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 008a13fe  8b01                 mov eax, dword ptr [ecx]
// 008a1400  8b8004020000         mov eax, dword ptr [eax + 0x204]
// 008a1406  52                   push edx
// 008a1407  0fb7560c             movzx edx, word ptr [esi + 0xc]
// 008a140b  52                   push edx
// 008a140c  8d5608               lea edx, [esi + 8]
// 008a140f  52                   push edx
// 008a1410  ffd0                 call eax
// 008a1412  85c0                 test eax, eax
// 008a1414  750a                 jne 0x8a1420
// 008a1416  5f                   pop edi
// 008a1417  b801000000           mov eax, 1
// 008a141c  5e                   pop esi
// 008a141d  c20400               ret 4
// 008a1420  817e0400010000       cmp dword ptr [esi + 4], 0x100
// 008a1427  750c                 jne 0x8a1435
// 008a1429  56                   push esi
// 008a142a  8bcf                 mov ecx, edi
// 008a142c  e829500800           call 0x92645a
// 008a1431  85c0                 test eax, eax
// 008a1433  75e1                 jne 0x8a1416
// 008a1435  56                   push esi
// 008a1436  8bcf                 mov ecx, edi
// 008a1438  e8232af5ff           call 0x7f3e60
// 008a143d  5f                   pop edi
// 008a143e  5e                   pop esi
// 008a143f  c20400               ret 4
// copied from an identical function in another client (function ?PreTranslateMessage@CXTPReportInplaceEdit@@MAEHPAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportInplaceControls.cpp