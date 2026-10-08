// roc 2009-06 00814c10  unit: CXTPRibbonControlTab  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00814c10
//
// 00814c10  8b442404             mov eax, dword ptr [esp + 4]
// 00814c14  57                   push edi
// 00814c15  8bf9                 mov edi, ecx
// 00814c17  398714020000         cmp dword ptr [edi + 0x214], eax
// 00814c1d  743f                 je 0x814c5e
// 00814c1f  898714020000         mov dword ptr [edi + 0x214], eax
// 00814c25  85c0                 test eax, eax
// 00814c27  742c                 je 0x814c55
// 00814c29  83bf8801000000       cmp dword ptr [edi + 0x188], 0
// 00814c30  7523                 jne 0x814c55
// 00814c32  53                   push ebx
// 00814c33  8b9f84010000         mov ebx, dword ptr [edi + 0x184]
// 00814c39  56                   push esi
// 00814c3a  8db784010000         lea esi, [edi + 0x184]
// 00814c40  6a01                 push 1
// 00814c42  6aff                 push -1
// 00814c44  8bce                 mov ecx, esi
// 00814c46  e885fffdff           call 0x7f4bd0
// 00814c4b  50                   push eax
// 00814c4c  8b4320               mov eax, dword ptr [ebx + 0x20]
// 00814c4f  8bce                 mov ecx, esi
// 00814c51  ffd0                 call eax
// 00814c53  5e                   pop esi
// 00814c54  5b                   pop ebx
// 00814c55  6a01                 push 1
// 00814c57  8bcf                 mov ecx, edi
// 00814c59  e852b3f0ff           call 0x71ffb0
// 00814c5e  5f                   pop edi
// 00814c5f  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonControlTab.cpp (function ?SetFocused@CXTPRibbonControlTab@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonControlTab.cpp
