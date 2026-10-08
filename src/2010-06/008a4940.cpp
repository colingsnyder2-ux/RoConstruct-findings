// roc 2010-06 008a4940  unit: CXTPRibbonControlTab  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a4940
//
// 008a4940  8b442404             mov eax, dword ptr [esp + 4]
// 008a4944  57                   push edi
// 008a4945  8bf9                 mov edi, ecx
// 008a4947  398714020000         cmp dword ptr [edi + 0x214], eax
// 008a494d  743f                 je 0x8a498e
// 008a494f  898714020000         mov dword ptr [edi + 0x214], eax
// 008a4955  85c0                 test eax, eax
// 008a4957  742c                 je 0x8a4985
// 008a4959  83bf8801000000       cmp dword ptr [edi + 0x188], 0
// 008a4960  7523                 jne 0x8a4985
// 008a4962  53                   push ebx
// 008a4963  8b9f84010000         mov ebx, dword ptr [edi + 0x184]
// 008a4969  56                   push esi
// 008a496a  8db784010000         lea esi, [edi + 0x184]
// 008a4970  6a01                 push 1
// 008a4972  6aff                 push -1
// 008a4974  8bce                 mov ecx, esi
// 008a4976  e8e5effdff           call 0x883960
// 008a497b  50                   push eax
// 008a497c  8b4320               mov eax, dword ptr [ebx + 0x20]
// 008a497f  8bce                 mov ecx, esi
// 008a4981  ffd0                 call eax
// 008a4983  5e                   pop esi
// 008a4984  5b                   pop ebx
// 008a4985  6a01                 push 1
// 008a4987  8bcf                 mov ecx, edi
// 008a4989  e8125ef0ff           call 0x7aa7a0
// 008a498e  5f                   pop edi
// 008a498f  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonControlTab.cpp (function ?SetFocused@CXTPRibbonControlTab@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonControlTab.cpp
