// roc 2011-06 008fd500  unit: CXTPRibbonControlTab  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fd500
//
// 008fd500  8b442404             mov eax, dword ptr [esp + 4]
// 008fd504  57                   push edi
// 008fd505  8bf9                 mov edi, ecx
// 008fd507  398714020000         cmp dword ptr [edi + 0x214], eax
// 008fd50d  743f                 je 0x8fd54e
// 008fd50f  898714020000         mov dword ptr [edi + 0x214], eax
// 008fd515  85c0                 test eax, eax
// 008fd517  742c                 je 0x8fd545
// 008fd519  83bf8801000000       cmp dword ptr [edi + 0x188], 0
// 008fd520  7523                 jne 0x8fd545
// 008fd522  53                   push ebx
// 008fd523  8b9f84010000         mov ebx, dword ptr [edi + 0x184]
// 008fd529  56                   push esi
// 008fd52a  8db784010000         lea esi, [edi + 0x184]
// 008fd530  6a01                 push 1
// 008fd532  6aff                 push -1
// 008fd534  8bce                 mov ecx, esi
// 008fd536  e81573fdff           call 0x8d4850
// 008fd53b  50                   push eax
// 008fd53c  8b4320               mov eax, dword ptr [ebx + 0x20]
// 008fd53f  8bce                 mov ecx, esi
// 008fd541  ffd0                 call eax
// 008fd543  5e                   pop esi
// 008fd544  5b                   pop ebx
// 008fd545  6a01                 push 1
// 008fd547  8bcf                 mov ecx, edi
// 008fd549  e842f8f0ff           call 0x80cd90
// 008fd54e  5f                   pop edi
// 008fd54f  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonControlTab.cpp (function ?SetFocused@CXTPRibbonControlTab@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonControlTab.cpp
