// roc 2007-03 00607430  unit: seg_00600000  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00607430
//
// 00607430  83ec08               sub esp, 8
// 00607433  56                   push esi
// 00607434  8bf1                 mov esi, ecx
// 00607436  8b5604               mov edx, dword ptr [esi + 4]
// 00607439  85d2                 test edx, edx
// 0060743b  7504                 jne 0x607441
// 0060743d  33c9                 xor ecx, ecx
// 0060743f  eb08                 jmp 0x607449
// 00607441  8b4e08               mov ecx, dword ptr [esi + 8]
// 00607444  2bca                 sub ecx, edx
// 00607446  c1f902               sar ecx, 2
// 00607449  85d2                 test edx, edx
// 0060744b  7424                 je 0x607471
// 0060744d  8b460c               mov eax, dword ptr [esi + 0xc]
// 00607450  2bc2                 sub eax, edx
// 00607452  c1f802               sar eax, 2
// 00607455  3bc8                 cmp ecx, eax
// 00607457  7318                 jae 0x607471
// 00607459  8b4608               mov eax, dword ptr [esi + 8]
// 0060745c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00607460  8b11                 mov edx, dword ptr [ecx]
// 00607462  8910                 mov dword ptr [eax], edx
// 00607464  83c004               add eax, 4
// 00607467  894608               mov dword ptr [esi + 8], eax
// 0060746a  5e                   pop esi
// 0060746b  83c408               add esp, 8
// 0060746e  c20400               ret 4
// 00607471  57                   push edi
// 00607472  8b7e08               mov edi, dword ptr [esi + 8]
// 00607475  3bd7                 cmp edx, edi
// 00607477  7606                 jbe 0x60747f
// 00607479  ff1544e97700         call dword ptr [0x77e944]
// 0060747f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00607483  50                   push eax
// 00607484  57                   push edi
// 00607485  56                   push esi
// 00607486  8d4c2414             lea ecx, [esp + 0x14]
// 0060748a  51                   push ecx
// 0060748b  8bce                 mov ecx, esi
// 0060748d  e8de34e9ff           call 0x49a970
// 00607492  5f                   pop edi
// 00607493  5e                   pop esi
// 00607494  83c408               add esp, 8
// 00607497  c20400               ret 4
// library rbxgs/tool\DragUtilities.cpp (function ?push_back@?$vector@PBVPrimitive@RBX@@V?$allocator@PBVPrimitive@RBX@@@std@@@std@@QAEXABQBVPrimitive@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
