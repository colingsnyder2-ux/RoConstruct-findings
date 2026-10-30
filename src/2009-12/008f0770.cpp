// roc 2009-12 008f0770  unit: CXTPRibbonControlTab  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f0770
//
// 008f0770  8b442404             mov eax, dword ptr [esp + 4]
// 008f0774  57                   push edi
// 008f0775  8bf9                 mov edi, ecx
// 008f0777  398714020000         cmp dword ptr [edi + 0x214], eax
// 008f077d  743f                 je 0x8f07be
// 008f077f  898714020000         mov dword ptr [edi + 0x214], eax
// 008f0785  85c0                 test eax, eax
// 008f0787  742c                 je 0x8f07b5
// 008f0789  83bf8801000000       cmp dword ptr [edi + 0x188], 0
// 008f0790  7523                 jne 0x8f07b5
// 008f0792  53                   push ebx
// 008f0793  8b9f84010000         mov ebx, dword ptr [edi + 0x184]
// 008f0799  56                   push esi
// 008f079a  8db784010000         lea esi, [edi + 0x184]
// 008f07a0  6a01                 push 1
// 008f07a2  6aff                 push -1
// 008f07a4  8bce                 mov ecx, esi
// 008f07a6  e8d5effdff           call 0x8cf780
// 008f07ab  50                   push eax
// 008f07ac  8b4320               mov eax, dword ptr [ebx + 0x20]
// 008f07af  8bce                 mov ecx, esi
// 008f07b1  ffd0                 call eax
// 008f07b3  5e                   pop esi
// 008f07b4  5b                   pop ebx
// 008f07b5  6a01                 push 1
// 008f07b7  8bcf                 mov ecx, edi
// 008f07b9  e8025ff0ff           call 0x7f66c0
// 008f07be  5f                   pop edi
// 008f07bf  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonControlTab.cpp (function ?SetFocused@CXTPRibbonControlTab@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonControlTab.cpp
