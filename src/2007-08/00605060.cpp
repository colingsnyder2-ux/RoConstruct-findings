// roc 2007-08 00605060  unit: RBX::SleepStage  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00605060
//
// 00605060  53                   push ebx
// 00605061  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00605065  55                   push ebp
// 00605066  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 0060506c  56                   push esi
// 0060506d  8b742420             mov esi, dword ptr [esp + 0x20]
// 00605071  57                   push edi
// 00605072  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00605076  8b442414             mov eax, dword ptr [esp + 0x14]
// 0060507a  85c0                 test eax, eax
// 0060507c  7404                 je 0x605082
// 0060507e  3bc7                 cmp eax, edi
// 00605080  7402                 je 0x605084
// 00605082  ffd5                 call ebp
// 00605084  395c2418             cmp dword ptr [esp + 0x18], ebx
// 00605088  740e                 je 0x605098
// 0060508a  830601               add dword ptr [esi], 1
// 0060508d  8d4c2414             lea ecx, [esp + 0x14]
// 00605091  e82a2cf8ff           call 0x587cc0
// 00605096  ebde                 jmp 0x605076
// 00605098  5f                   pop edi
// 00605099  5e                   pop esi
// 0060509a  5d                   pop ebp
// 0060509b  5b                   pop ebx
// 0060509c  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ??$_Distance2@Viterator@?$_Tree@V?$_Tset_traits@PAVScript@RBX@@U?$less@PAVScript@RBX@@@std@@V?$allocator@PAVScript@RBX@@@4@$0A@@std@@@std@@I@std@@YAXViterator@?$_Tree@V?$_Tset_traits@PAVScript@RBX@@U?$less@PAVScript@RBX@@@std@@V?$allocator@PAVScript@RBX@@@4@$0A@@std@@@0@0AAIUbidirectional_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
