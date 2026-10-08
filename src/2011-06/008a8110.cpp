// from server: 100% by auto
// roc 2011-06 008a8110  unit: CXTPRibbonBar  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a8110
//
// 008a8110  83ec08               sub esp, 8
// 008a8113  56                   push esi
// 008a8114  57                   push edi
// 008a8115  8d442408             lea eax, [esp + 8]
// 008a8119  50                   push eax
// 008a811a  8bf1                 mov esi, ecx
// 008a811c  ff15c819a400         call dword ptr [0xa419c8]
// 008a8122  8b5620               mov edx, dword ptr [esi + 0x20]
// 008a8125  8d4c2408             lea ecx, [esp + 8]
// 008a8129  51                   push ecx
// 008a812a  52                   push edx
// 008a812b  ff15f419a400         call dword ptr [0xa419f4]
// 008a8131  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008a8135  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008a8139  50                   push eax
// 008a813a  51                   push ecx
// 008a813b  8bce                 mov ecx, esi
// 008a813d  e8bee2ffff           call 0x8a6400
// 008a8142  8bf8                 mov edi, eax
// 008a8144  8d57f6               lea edx, [edi - 0xa]
// 008a8147  83fa07               cmp edx, 7
// 008a814a  772f                 ja 0x8a817b
// 008a814c  8bce                 mov ecx, esi
// 008a814e  e81d55f7ff           call 0x81d670
// 008a8153  0fb74c241c           movzx ecx, word ptr [esp + 0x1c]
// 008a8158  8b4020               mov eax, dword ptr [eax + 0x20]
// 008a815b  0fb7d7               movzx edx, di
// 008a815e  c1e110               shl ecx, 0x10
// 008a8161  0bca                 or ecx, edx
// 008a8163  51                   push ecx
// 008a8164  50                   push eax
// 008a8165  6a20                 push 0x20
// 008a8167  50                   push eax
// 008a8168  ff15c019a400         call dword ptr [0xa419c0]
// 008a816e  5f                   pop edi
// 008a816f  b801000000           mov eax, 1
// 008a8174  5e                   pop esi
// 008a8175  83c408               add esp, 8
// 008a8178  c20c00               ret 0xc
// 008a817b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008a817f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008a8183  8b542414             mov edx, dword ptr [esp + 0x14]
// 008a8187  50                   push eax
// 008a8188  51                   push ecx
// 008a8189  52                   push edx
// 008a818a  8bce                 mov ecx, esi
// 008a818c  e87ff8f7ff           call 0x827a10
// 008a8191  5f                   pop edi
// 008a8192  5e                   pop esi
// 008a8193  83c408               add esp, 8
// 008a8196  c20c00               ret 0xc
// library xtp-15.2.1/Source\Ribbon\XTPRibbonBar.cpp (function ?OnSetCursor@CXTPRibbonBar@@IAEHPAVCWnd@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonBar.cpp
