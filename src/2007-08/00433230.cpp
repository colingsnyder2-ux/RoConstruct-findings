// roc 2007-08 00433230  unit: RBX::VHat::?$FactoryProduct::Creator  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00433230
//
// 00433230  53                   push ebx
// 00433231  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00433235  55                   push ebp
// 00433236  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 0043323c  56                   push esi
// 0043323d  8b742420             mov esi, dword ptr [esp + 0x20]
// 00433241  57                   push edi
// 00433242  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00433246  8b442414             mov eax, dword ptr [esp + 0x14]
// 0043324a  85c0                 test eax, eax
// 0043324c  7404                 je 0x433252
// 0043324e  3bc7                 cmp eax, edi
// 00433250  7402                 je 0x433254
// 00433252  ffd5                 call ebp
// 00433254  395c2418             cmp dword ptr [esp + 0x18], ebx
// 00433258  740e                 je 0x433268
// 0043325a  830601               add dword ptr [esi], 1
// 0043325d  8d4c2414             lea ecx, [esp + 0x14]
// 00433261  e84a5c0000           call 0x438eb0
// 00433266  ebde                 jmp 0x433246
// 00433268  5f                   pop edi
// 00433269  5e                   pop esi
// 0043326a  5d                   pop ebp
// 0043326b  5b                   pop ebx
// 0043326c  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ??$_Distance2@Viterator@?$_Tree@V?$_Tset_traits@PAVScript@RBX@@U?$less@PAVScript@RBX@@@std@@V?$allocator@PAVScript@RBX@@@4@$0A@@std@@@std@@I@std@@YAXViterator@?$_Tree@V?$_Tset_traits@PAVScript@RBX@@U?$less@PAVScript@RBX@@@std@@V?$allocator@PAVScript@RBX@@@4@$0A@@std@@@0@0AAIUbidirectional_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
