// roc 2012-06 00a75840  unit: CXTPRibbonControlTab  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a75840
//
// 00a75840  8b442404             mov eax, dword ptr [esp + 4]
// 00a75844  57                   push edi
// 00a75845  8bf9                 mov edi, ecx
// 00a75847  398714020000         cmp dword ptr [edi + 0x214], eax
// 00a7584d  743f                 je 0xa7588e
// 00a7584f  898714020000         mov dword ptr [edi + 0x214], eax
// 00a75855  85c0                 test eax, eax
// 00a75857  742c                 je 0xa75885
// 00a75859  83bf8801000000       cmp dword ptr [edi + 0x188], 0
// 00a75860  7523                 jne 0xa75885
// 00a75862  53                   push ebx
// 00a75863  8b9f84010000         mov ebx, dword ptr [edi + 0x184]
// 00a75869  56                   push esi
// 00a7586a  8db784010000         lea esi, [edi + 0x184]
// 00a75870  6a01                 push 1
// 00a75872  6aff                 push -1
// 00a75874  8bce                 mov ecx, esi
// 00a75876  e82573fdff           call 0xa4cba0
// 00a7587b  50                   push eax
// 00a7587c  8b4320               mov eax, dword ptr [ebx + 0x20]
// 00a7587f  8bce                 mov ecx, esi
// 00a75881  ffd0                 call eax
// 00a75883  5e                   pop esi
// 00a75884  5b                   pop ebx
// 00a75885  6a01                 push 1
// 00a75887  8bcf                 mov ecx, edi
// 00a75889  e8a2f7f0ff           call 0x985030
// 00a7588e  5f                   pop edi
// 00a7588f  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonControlTab.cpp (function ?SetFocused@CXTPRibbonControlTab@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonControlTab.cpp
