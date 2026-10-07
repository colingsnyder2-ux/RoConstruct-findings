// roc 2008-06 00799460  unit: CXTPRibbonControlTab  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00799460
//
// 00799460  8b442404             mov eax, dword ptr [esp + 4]
// 00799464  57                   push edi
// 00799465  8bf9                 mov edi, ecx
// 00799467  398714020000         cmp dword ptr [edi + 0x214], eax
// 0079946d  743f                 je 0x7994ae
// 0079946f  898714020000         mov dword ptr [edi + 0x214], eax
// 00799475  85c0                 test eax, eax
// 00799477  742c                 je 0x7994a5
// 00799479  83bf8801000000       cmp dword ptr [edi + 0x188], 0
// 00799480  7523                 jne 0x7994a5
// 00799482  53                   push ebx
// 00799483  8b9f84010000         mov ebx, dword ptr [edi + 0x184]
// 00799489  56                   push esi
// 0079948a  8db784010000         lea esi, [edi + 0x184]
// 00799490  6a01                 push 1
// 00799492  6aff                 push -1
// 00799494  8bce                 mov ecx, esi
// 00799496  e87530feff           call 0x77c510
// 0079949b  50                   push eax
// 0079949c  8b4320               mov eax, dword ptr [ebx + 0x20]
// 0079949f  8bce                 mov ecx, esi
// 007994a1  ffd0                 call eax
// 007994a3  5e                   pop esi
// 007994a4  5b                   pop ebx
// 007994a5  6a01                 push 1
// 007994a7  8bcf                 mov ecx, edi
// 007994a9  e82224f1ff           call 0x6ab8d0
// 007994ae  5f                   pop edi
// 007994af  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonControlTab.cpp (function ?SetFocused@CXTPRibbonControlTab@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonControlTab.cpp
