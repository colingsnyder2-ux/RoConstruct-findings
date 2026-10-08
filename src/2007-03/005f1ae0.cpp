// roc 2007-03 005f1ae0  unit: seg_005f0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f1ae0
//
// 005f1ae0  53                   push ebx
// 005f1ae1  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 005f1ae5  55                   push ebp
// 005f1ae6  8b2d44e97700         mov ebp, dword ptr [0x77e944]
// 005f1aec  56                   push esi
// 005f1aed  8b742420             mov esi, dword ptr [esp + 0x20]
// 005f1af1  57                   push edi
// 005f1af2  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005f1af6  8b442414             mov eax, dword ptr [esp + 0x14]
// 005f1afa  85c0                 test eax, eax
// 005f1afc  7404                 je 0x5f1b02
// 005f1afe  3bc7                 cmp eax, edi
// 005f1b00  7402                 je 0x5f1b04
// 005f1b02  ffd5                 call ebp
// 005f1b04  395c2418             cmp dword ptr [esp + 0x18], ebx
// 005f1b08  740e                 je 0x5f1b18
// 005f1b0a  830601               add dword ptr [esi], 1
// 005f1b0d  8d4c2414             lea ecx, [esp + 0x14]
// 005f1b11  e8eaf6ffff           call 0x5f1200
// 005f1b16  ebde                 jmp 0x5f1af6
// 005f1b18  5f                   pop edi
// 005f1b19  5e                   pop esi
// 005f1b1a  5d                   pop ebp
// 005f1b1b  5b                   pop ebx
// 005f1b1c  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ??$_Distance2@Viterator@?$_Tree@V?$_Tset_traits@PAVScript@RBX@@U?$less@PAVScript@RBX@@@std@@V?$allocator@PAVScript@RBX@@@4@$0A@@std@@@std@@I@std@@YAXViterator@?$_Tree@V?$_Tset_traits@PAVScript@RBX@@U?$less@PAVScript@RBX@@@std@@V?$allocator@PAVScript@RBX@@@4@$0A@@std@@@0@0AAIUbidirectional_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
