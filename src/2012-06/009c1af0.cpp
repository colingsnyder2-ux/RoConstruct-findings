// from server: 100% by auto
// roc 2012-06 009c1af0  unit: CRobloxTreeCtrl  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c1af0
//
// 009c1af0  51                   push ecx
// 009c1af1  8d442408             lea eax, [esp + 8]
// 009c1af5  50                   push eax
// 009c1af6  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009c1afa  8d542404             lea edx, [esp + 4]
// 009c1afe  52                   push edx
// 009c1aff  50                   push eax
// 009c1b00  e80bf5ffff           call 0x9c1010
// 009c1b05  85c0                 test eax, eax
// 009c1b07  7504                 jne 0x9c1b0d
// 009c1b09  59                   pop ecx
// 009c1b0a  c20800               ret 8
// 009c1b0d  56                   push esi
// 009c1b0e  57                   push edi
// 009c1b0f  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 009c1b13  8d7004               lea esi, [eax + 4]
// 009c1b16  b911000000           mov ecx, 0x11
// 009c1b1b  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 009c1b1d  5f                   pop edi
// 009c1b1e  b801000000           mov eax, 1
// 009c1b23  5e                   pop esi
// 009c1b24  59                   pop ecx
// 009c1b25  c20800               ret 8
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?Lookup@?$CMap@PAXPAXUCLRFONT@CXTPTreeBase@@AAU12@@@QBEHPAXAAUCLRFONT@CXTPTreeBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
