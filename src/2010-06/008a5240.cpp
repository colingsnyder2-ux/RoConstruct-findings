// roc 2010-06 008a5240  unit: CXTPRibbonControlTab  size: 263 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a5240
//
// 008a5240  83ec18               sub esp, 0x18
// 008a5243  56                   push esi
// 008a5244  57                   push edi
// 008a5245  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 008a5249  8bf1                 mov esi, ecx
// 008a524b  85ff                 test edi, edi
// 008a524d  750d                 jne 0x8a525c
// 008a524f  5f                   pop edi
// 008a5250  b857000780           mov eax, 0x80070057
// 008a5255  5e                   pop esi
// 008a5256  83c418               add esp, 0x18
// 008a5259  c20c00               ret 0xc
// 008a525c  33c0                 xor eax, eax
// 008a525e  668907               mov word ptr [edi], ax
// 008a5261  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 008a5267  85c0                 test eax, eax
// 008a5269  7406                 je 0x8a5271
// 008a526b  83782000             cmp dword ptr [eax + 0x20], 0
// 008a526f  750d                 jne 0x8a527e
// 008a5271  5f                   pop edi
// 008a5272  b801000000           mov eax, 1
// 008a5277  5e                   pop esi
// 008a5278  83c418               add esp, 0x18
// 008a527b  c20c00               ret 0xc
// 008a527e  53                   push ebx
// 008a527f  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 008a5283  55                   push ebp
// 008a5284  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 008a5288  50                   push eax
// 008a5289  8d4c241c             lea ecx, [esp + 0x1c]
// 008a528d  e81ea0f5ff           call 0x7ff2b0
// 008a5292  55                   push ebp
// 008a5293  53                   push ebx
// 008a5294  50                   push eax
// 008a5295  ff15e0bb9e00         call dword ptr [0x9ebbe0]
// 008a529b  85c0                 test eax, eax
// 008a529d  746d                 je 0x8a530c
// 008a529f  b903000000           mov ecx, 3
// 008a52a4  66890f               mov word ptr [edi], cx
// 008a52a7  c7470800000000       mov dword ptr [edi + 8], 0
// 008a52ae  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 008a52b4  8d542410             lea edx, [esp + 0x10]
// 008a52b8  895c2410             mov dword ptr [esp + 0x10], ebx
// 008a52bc  896c2414             mov dword ptr [esp + 0x14], ebp
// 008a52c0  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008a52c3  52                   push edx
// 008a52c4  51                   push ecx
// 008a52c5  ff1578bc9e00         call dword ptr [0x9ebc78]
// 008a52cb  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 008a52d1  8b96a0000000         mov edx, dword ptr [esi + 0xa0]
// 008a52d7  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 008a52dd  89542418             mov dword ptr [esp + 0x18], edx
// 008a52e1  8b96ac000000         mov edx, dword ptr [esi + 0xac]
// 008a52e7  8944241c             mov dword ptr [esp + 0x1c], eax
// 008a52eb  8b442414             mov eax, dword ptr [esp + 0x14]
// 008a52ef  894c2420             mov dword ptr [esp + 0x20], ecx
// 008a52f3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008a52f7  50                   push eax
// 008a52f8  89542428             mov dword ptr [esp + 0x28], edx
// 008a52fc  51                   push ecx
// 008a52fd  8d542420             lea edx, [esp + 0x20]
// 008a5301  52                   push edx
// 008a5302  ff15e0bb9e00         call dword ptr [0x9ebbe0]
// 008a5308  85c0                 test eax, eax
// 008a530a  750f                 jne 0x8a531b
// 008a530c  5d                   pop ebp
// 008a530d  5b                   pop ebx
// 008a530e  5f                   pop edi
// 008a530f  b801000000           mov eax, 1
// 008a5314  5e                   pop esi
// 008a5315  83c418               add esp, 0x18
// 008a5318  c20c00               ret 0xc
// 008a531b  8b442414             mov eax, dword ptr [esp + 0x14]
// 008a531f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008a5323  50                   push eax
// 008a5324  51                   push ecx
// 008a5325  8d8e64010000         lea ecx, [esi + 0x164]
// 008a532b  e840e5fdff           call 0x883870
// 008a5330  85c0                 test eax, eax
// 008a5332  7407                 je 0x8a533b
// 008a5334  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008a5337  42                   inc edx
// 008a5338  895708               mov dword ptr [edi + 8], edx
// 008a533b  5d                   pop ebp
// 008a533c  5b                   pop ebx
// 008a533d  5f                   pop edi
// 008a533e  33c0                 xor eax, eax
// 008a5340  5e                   pop esi
// 008a5341  83c418               add esp, 0x18
// 008a5344  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonControlTab.cpp (function ?AccessibleHitTest@CXTPRibbonControlTab@@MAEJJJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonControlTab.cpp
