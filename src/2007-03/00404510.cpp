// roc 2007-03 00404510  unit: seg_00400000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00404510
//
// 00404510  53                   push ebx
// 00404511  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00404515  55                   push ebp
// 00404516  8b2d44e97700         mov ebp, dword ptr [0x77e944]
// 0040451c  56                   push esi
// 0040451d  8b742420             mov esi, dword ptr [esp + 0x20]
// 00404521  57                   push edi
// 00404522  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00404526  8b442414             mov eax, dword ptr [esp + 0x14]
// 0040452a  85c0                 test eax, eax
// 0040452c  7404                 je 0x404532
// 0040452e  3bc7                 cmp eax, edi
// 00404530  7402                 je 0x404534
// 00404532  ffd5                 call ebp
// 00404534  395c2418             cmp dword ptr [esp + 0x18], ebx
// 00404538  740e                 je 0x404548
// 0040453a  830601               add dword ptr [esi], 1
// 0040453d  8d4c2414             lea ecx, [esp + 0x14]
// 00404541  e88a181b00           call 0x5b5dd0
// 00404546  ebde                 jmp 0x404526
// 00404548  5f                   pop edi
// 00404549  5e                   pop esi
// 0040454a  5d                   pop ebp
// 0040454b  5b                   pop ebx
// 0040454c  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ??$_Distance2@Viterator@?$_Tree@V?$_Tset_traits@PAVScript@RBX@@U?$less@PAVScript@RBX@@@std@@V?$allocator@PAVScript@RBX@@@4@$0A@@std@@@std@@I@std@@YAXViterator@?$_Tree@V?$_Tset_traits@PAVScript@RBX@@U?$less@PAVScript@RBX@@@std@@V?$allocator@PAVScript@RBX@@@4@$0A@@std@@@0@0AAIUbidirectional_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
