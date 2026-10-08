// from server: 100% by auto
// roc 2007-08 00667770  unit: CRobloxTreeCtrl  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00667770
//
// 00667770  51                   push ecx
// 00667771  8d442408             lea eax, [esp + 8]
// 00667775  50                   push eax
// 00667776  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0066777a  8d542404             lea edx, [esp + 4]
// 0066777e  52                   push edx
// 0066777f  50                   push eax
// 00667780  e80bf5ffff           call 0x666c90
// 00667785  85c0                 test eax, eax
// 00667787  7504                 jne 0x66778d
// 00667789  59                   pop ecx
// 0066778a  c20800               ret 8
// 0066778d  56                   push esi
// 0066778e  57                   push edi
// 0066778f  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00667793  8d7004               lea esi, [eax + 4]
// 00667796  b911000000           mov ecx, 0x11
// 0066779b  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0066779d  5f                   pop edi
// 0066779e  b801000000           mov eax, 1
// 006677a3  5e                   pop esi
// 006677a4  59                   pop ecx
// 006677a5  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?Lookup@?$CMap@PAXPAXUCLRFONT@CXTTreeBase@@AAU12@@@QBEHPAXAAUCLRFONT@CXTTreeBase@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
