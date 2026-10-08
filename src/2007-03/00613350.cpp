// roc 2007-03 00613350  unit: seg_00610000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00613350
//
// 00613350  53                   push ebx
// 00613351  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00613355  55                   push ebp
// 00613356  8b2d44e97700         mov ebp, dword ptr [0x77e944]
// 0061335c  56                   push esi
// 0061335d  8b742420             mov esi, dword ptr [esp + 0x20]
// 00613361  57                   push edi
// 00613362  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00613366  8b442414             mov eax, dword ptr [esp + 0x14]
// 0061336a  85c0                 test eax, eax
// 0061336c  7404                 je 0x613372
// 0061336e  3bc7                 cmp eax, edi
// 00613370  7402                 je 0x613374
// 00613372  ffd5                 call ebp
// 00613374  395c2418             cmp dword ptr [esp + 0x18], ebx
// 00613378  740e                 je 0x613388
// 0061337a  830601               add dword ptr [esi], 1
// 0061337d  8d4c2414             lea ecx, [esp + 0x14]
// 00613381  e83a8be8ff           call 0x49bec0
// 00613386  ebde                 jmp 0x613366
// 00613388  5f                   pop edi
// 00613389  5e                   pop esi
// 0061338a  5d                   pop ebp
// 0061338b  5b                   pop ebx
// 0061338c  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ??$_Distance2@Viterator@?$_Tree@V?$_Tset_traits@PAVScript@RBX@@U?$less@PAVScript@RBX@@@std@@V?$allocator@PAVScript@RBX@@@4@$0A@@std@@@std@@I@std@@YAXViterator@?$_Tree@V?$_Tset_traits@PAVScript@RBX@@U?$less@PAVScript@RBX@@@std@@V?$allocator@PAVScript@RBX@@@4@$0A@@std@@@0@0AAIUbidirectional_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
