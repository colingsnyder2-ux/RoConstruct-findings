// roc 2008-06 006a5110  unit: CXTPCommandBar  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a5110
//
// 006a5110  53                   push ebx
// 006a5111  55                   push ebp
// 006a5112  56                   push esi
// 006a5113  57                   push edi
// 006a5114  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 006a5118  57                   push edi
// 006a5119  e8b2900400           call 0x6ee1d0
// 006a511e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006a5122  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 006a5126  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 006a512a  8bf0                 mov esi, eax
// 006a512c  8b06                 mov eax, dword ptr [esi]
// 006a512e  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 006a5134  83c404               add esp, 4
// 006a5137  6a01                 push 1
// 006a5139  51                   push ecx
// 006a513a  8bce                 mov ecx, esi
// 006a513c  899ee4000000         mov dword ptr [esi + 0xe4], ebx
// 006a5142  89ae08010000         mov dword ptr [esi + 0x108], ebp
// 006a5148  89be04010000         mov dword ptr [esi + 0x104], edi
// 006a514e  ffd2                 call edx
// 006a5150  85c0                 test eax, eax
// 006a5152  750e                 jne 0x6a5162
// 006a5154  8bce                 mov ecx, esi
// 006a5156  e889baffff           call 0x6a0be4
// 006a515b  5f                   pop edi
// 006a515c  5e                   pop esi
// 006a515d  5d                   pop ebp
// 006a515e  33c0                 xor eax, eax
// 006a5160  5b                   pop ebx
// 006a5161  c3                   ret 
// 006a5162  85ff                 test edi, edi
// 006a5164  741d                 je 0x6a5183
// 006a5166  e8756e1100           call 0x7bbfe0
// 006a516b  83c058               add eax, 0x58
// 006a516e  8378047b             cmp dword ptr [eax + 4], 0x7b
// 006a5172  750f                 jne 0x6a5183
// 006a5174  83780cff             cmp dword ptr [eax + 0xc], -1
// 006a5178  7509                 jne 0x6a5183
// 006a517a  6a01                 push 1
// 006a517c  8bcf                 mov ecx, edi
// 006a517e  e82df4ffff           call 0x6a45b0
// 006a5183  8b442428             mov eax, dword ptr [esp + 0x28]
// 006a5187  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006a518b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006a518f  55                   push ebp
// 006a5190  50                   push eax
// 006a5191  8b442420             mov eax, dword ptr [esp + 0x20]
// 006a5195  53                   push ebx
// 006a5196  51                   push ecx
// 006a5197  52                   push edx
// 006a5198  50                   push eax
// 006a5199  56                   push esi
// 006a519a  e811feffff           call 0x6a4fb0
// 006a519f  83c41c               add esp, 0x1c
// 006a51a2  8bce                 mov ecx, esi
// 006a51a4  8bf8                 mov edi, eax
// 006a51a6  e839baffff           call 0x6a0be4
// 006a51ab  8bc7                 mov eax, edi
// 006a51ad  5f                   pop edi
// 006a51ae  5e                   pop esi
// 006a51af  5d                   pop ebp
// 006a51b0  5b                   pop ebx
// 006a51b1  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPCommandBars.cpp (function ?TrackPopupMenu@CXTPCommandBars@@SAHPAVCMenu@@IHHPAVCWnd@@PBUtagRECT@@1PAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPCommandBars.cpp
