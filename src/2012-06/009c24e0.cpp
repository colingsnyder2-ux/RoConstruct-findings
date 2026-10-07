// roc 2012-06 009c24e0  unit: CRobloxTreeCtrl  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c24e0
//
// 009c24e0  51                   push ecx
// 009c24e1  56                   push esi
// 009c24e2  57                   push edi
// 009c24e3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 009c24e7  8bf1                 mov esi, ecx
// 009c24e9  8d442410             lea eax, [esp + 0x10]
// 009c24ed  50                   push eax
// 009c24ee  8d4c240c             lea ecx, [esp + 0xc]
// 009c24f2  51                   push ecx
// 009c24f3  57                   push edi
// 009c24f4  8bce                 mov ecx, esi
// 009c24f6  e815ebffff           call 0x9c1010
// 009c24fb  85c0                 test eax, eax
// 009c24fd  753f                 jne 0x9c253e
// 009c24ff  394604               cmp dword ptr [esi + 4], eax
// 009c2502  7518                 jne 0x9c251c
// 009c2504  8b5608               mov edx, dword ptr [esi + 8]
// 009c2507  6a01                 push 1
// 009c2509  52                   push edx
// 009c250a  8bce                 mov ecx, esi
// 009c250c  e89f5efdff           call 0x9983b0
// 009c2511  837e0400             cmp dword ptr [esi + 4], 0
// 009c2515  7505                 jne 0x9c251c
// 009c2517  e8a4fefbff           call 0x9823c0
// 009c251c  57                   push edi
// 009c251d  8bce                 mov ecx, esi
// 009c251f  e80cf6ffff           call 0x9c1b30
// 009c2524  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009c2528  89484c               mov dword ptr [eax + 0x4c], ecx
// 009c252b  8b5604               mov edx, dword ptr [esi + 4]
// 009c252e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 009c2532  8b148a               mov edx, dword ptr [edx + ecx*4]
// 009c2535  895048               mov dword ptr [eax + 0x48], edx
// 009c2538  8b5604               mov edx, dword ptr [esi + 4]
// 009c253b  89048a               mov dword ptr [edx + ecx*4], eax
// 009c253e  5f                   pop edi
// 009c253f  83c004               add eax, 4
// 009c2542  5e                   pop esi
// 009c2543  59                   pop ecx
// 009c2544  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ??A?$CMap@PAXPAXUCLRFONT@CXTPTreeBase@@AAU12@@@QAEAAUCLRFONT@CXTPTreeBase@@PAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
