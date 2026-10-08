// roc 2007-08 004a1230  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a1230
//
// 004a1230  53                   push ebx
// 004a1231  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 004a1235  55                   push ebp
// 004a1236  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 004a123c  56                   push esi
// 004a123d  8b742420             mov esi, dword ptr [esp + 0x20]
// 004a1241  57                   push edi
// 004a1242  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004a1246  8b442414             mov eax, dword ptr [esp + 0x14]
// 004a124a  85c0                 test eax, eax
// 004a124c  7404                 je 0x4a1252
// 004a124e  3bc7                 cmp eax, edi
// 004a1250  7402                 je 0x4a1254
// 004a1252  ffd5                 call ebp
// 004a1254  395c2418             cmp dword ptr [esp + 0x18], ebx
// 004a1258  740e                 je 0x4a1268
// 004a125a  830601               add dword ptr [esi], 1
// 004a125d  8d4c2414             lea ecx, [esp + 0x14]
// 004a1261  e8ba8c1300           call 0x5d9f20
// 004a1266  ebde                 jmp 0x4a1246
// 004a1268  5f                   pop edi
// 004a1269  5e                   pop esi
// 004a126a  5d                   pop ebp
// 004a126b  5b                   pop ebx
// 004a126c  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ??$_Distance2@Viterator@?$_Tree@V?$_Tset_traits@PAVScript@RBX@@U?$less@PAVScript@RBX@@@std@@V?$allocator@PAVScript@RBX@@@4@$0A@@std@@@std@@I@std@@YAXViterator@?$_Tree@V?$_Tset_traits@PAVScript@RBX@@U?$less@PAVScript@RBX@@@std@@V?$allocator@PAVScript@RBX@@@4@$0A@@std@@@0@0AAIUbidirectional_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
