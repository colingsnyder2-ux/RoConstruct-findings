// roc 2010-06 007e1710  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e1710
//
// 007e1710  8b4128               mov eax, dword ptr [ecx + 0x28]
// 007e1713  56                   push esi
// 007e1714  33f6                 xor esi, esi
// 007e1716  57                   push edi
// 007e1717  85c0                 test eax, eax
// 007e1719  7e1a                 jle 0x7e1735
// 007e171b  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007e171f  90                   nop 
// 007e1720  85f6                 test esi, esi
// 007e1722  7c28                 jl 0x7e174c
// 007e1724  3bf0                 cmp esi, eax
// 007e1726  7d24                 jge 0x7e174c
// 007e1728  8b7924               mov edi, dword ptr [ecx + 0x24]
// 007e172b  3914b7               cmp dword ptr [edi + esi*4], edx
// 007e172e  740d                 je 0x7e173d
// 007e1730  46                   inc esi
// 007e1731  3bf0                 cmp esi, eax
// 007e1733  7ceb                 jl 0x7e1720
// 007e1735  5f                   pop edi
// 007e1736  83c8ff               or eax, 0xffffffff
// 007e1739  5e                   pop esi
// 007e173a  c20400               ret 4
// 007e173d  8b01                 mov eax, dword ptr [ecx]
// 007e173f  8b5064               mov edx, dword ptr [eax + 0x64]
// 007e1742  56                   push esi
// 007e1743  ffd2                 call edx
// 007e1745  5f                   pop edi
// 007e1746  8bc6                 mov eax, esi
// 007e1748  5e                   pop esi
// 007e1749  c20400               ret 4
// 007e174c  e8fb64fcff           call 0x7a7c4c
// copied from an identical function in another client (function ?RemoveRow@CXTPReportRows@@UAEHPAVCXTPReportRow@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRows.cpp