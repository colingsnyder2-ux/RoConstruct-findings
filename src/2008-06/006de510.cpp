// from server: 100% by auto
// roc 2008-06 006de510  unit: CRobloxTreeCtrl  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006de510
//
// 006de510  51                   push ecx
// 006de511  8d442408             lea eax, [esp + 8]
// 006de515  50                   push eax
// 006de516  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006de51a  8d542404             lea edx, [esp + 4]
// 006de51e  52                   push edx
// 006de51f  50                   push eax
// 006de520  e80bf5ffff           call 0x6dda30
// 006de525  85c0                 test eax, eax
// 006de527  7504                 jne 0x6de52d
// 006de529  59                   pop ecx
// 006de52a  c20800               ret 8
// 006de52d  56                   push esi
// 006de52e  57                   push edi
// 006de52f  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006de533  8d7004               lea esi, [eax + 4]
// 006de536  b911000000           mov ecx, 0x11
// 006de53b  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 006de53d  5f                   pop edi
// 006de53e  b801000000           mov eax, 1
// 006de543  5e                   pop esi
// 006de544  59                   pop ecx
// 006de545  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?Lookup@?$CMap@PAXPAXUCLRFONT@CXTTreeBase@@AAU12@@@QBEHPAXAAUCLRFONT@CXTTreeBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
