// roc 2011-06 00849670  unit: CRobloxTreeCtrl  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00849670
//
// 00849670  51                   push ecx
// 00849671  8d442408             lea eax, [esp + 8]
// 00849675  50                   push eax
// 00849676  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0084967a  8d542404             lea edx, [esp + 4]
// 0084967e  52                   push edx
// 0084967f  50                   push eax
// 00849680  e80bf5ffff           call 0x848b90
// 00849685  85c0                 test eax, eax
// 00849687  7504                 jne 0x84968d
// 00849689  59                   pop ecx
// 0084968a  c20800               ret 8
// 0084968d  56                   push esi
// 0084968e  57                   push edi
// 0084968f  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00849693  8d7004               lea esi, [eax + 4]
// 00849696  b911000000           mov ecx, 0x11
// 0084969b  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0084969d  5f                   pop edi
// 0084969e  b801000000           mov eax, 1
// 008496a3  5e                   pop esi
// 008496a4  59                   pop ecx
// 008496a5  c20800               ret 8
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?Lookup@?$CMap@PAXPAXUCLRFONT@CXTPTreeBase@@AAU12@@@QBEHPAXAAUCLRFONT@CXTPTreeBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
