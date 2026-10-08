// roc 2007-03 00585240  unit: seg_00580000  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00585240
//
// 00585240  83ec08               sub esp, 8
// 00585243  56                   push esi
// 00585244  8bf1                 mov esi, ecx
// 00585246  8b5604               mov edx, dword ptr [esi + 4]
// 00585249  85d2                 test edx, edx
// 0058524b  7504                 jne 0x585251
// 0058524d  33c9                 xor ecx, ecx
// 0058524f  eb08                 jmp 0x585259
// 00585251  8b4e08               mov ecx, dword ptr [esi + 8]
// 00585254  2bca                 sub ecx, edx
// 00585256  c1f902               sar ecx, 2
// 00585259  85d2                 test edx, edx
// 0058525b  7424                 je 0x585281
// 0058525d  8b460c               mov eax, dword ptr [esi + 0xc]
// 00585260  2bc2                 sub eax, edx
// 00585262  c1f802               sar eax, 2
// 00585265  3bc8                 cmp ecx, eax
// 00585267  7318                 jae 0x585281
// 00585269  8b4608               mov eax, dword ptr [esi + 8]
// 0058526c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00585270  8b11                 mov edx, dword ptr [ecx]
// 00585272  8910                 mov dword ptr [eax], edx
// 00585274  83c004               add eax, 4
// 00585277  894608               mov dword ptr [esi + 8], eax
// 0058527a  5e                   pop esi
// 0058527b  83c408               add esp, 8
// 0058527e  c20400               ret 4
// 00585281  57                   push edi
// 00585282  8b7e08               mov edi, dword ptr [esi + 8]
// 00585285  3bd7                 cmp edx, edi
// 00585287  7606                 jbe 0x58528f
// 00585289  ff1544e97700         call dword ptr [0x77e944]
// 0058528f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00585293  50                   push eax
// 00585294  57                   push edi
// 00585295  56                   push esi
// 00585296  8d4c2414             lea ecx, [esp + 0x14]
// 0058529a  51                   push ecx
// 0058529b  8bce                 mov ecx, esi
// 0058529d  e8ceb6feff           call 0x570970
// 005852a2  5f                   pop edi
// 005852a3  5e                   pop esi
// 005852a4  83c408               add esp, 8
// 005852a7  c20400               ret 4
// library rbxgs/tool\DragUtilities.cpp (function ?push_back@?$vector@PBVPrimitive@RBX@@V?$allocator@PBVPrimitive@RBX@@@std@@@std@@QAEXABQBVPrimitive@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
