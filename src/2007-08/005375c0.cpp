// roc 2007-08 005375c0  unit: RBX::Lua::ThreadRef::VNode::V?$shared_ptr::?$TItem  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005375c0
//
// 005375c0  53                   push ebx
// 005375c1  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 005375c5  55                   push ebp
// 005375c6  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 005375cc  56                   push esi
// 005375cd  8b742420             mov esi, dword ptr [esp + 0x20]
// 005375d1  57                   push edi
// 005375d2  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005375d6  8b442414             mov eax, dword ptr [esp + 0x14]
// 005375da  85c0                 test eax, eax
// 005375dc  7404                 je 0x5375e2
// 005375de  3bc7                 cmp eax, edi
// 005375e0  7402                 je 0x5375e4
// 005375e2  ffd5                 call ebp
// 005375e4  395c2418             cmp dword ptr [esp + 0x18], ebx
// 005375e8  740e                 je 0x5375f8
// 005375ea  830601               add dword ptr [esi], 1
// 005375ed  8d4c2414             lea ecx, [esp + 0x14]
// 005375f1  e84afc0e00           call 0x627240
// 005375f6  ebde                 jmp 0x5375d6
// 005375f8  5f                   pop edi
// 005375f9  5e                   pop esi
// 005375fa  5d                   pop ebp
// 005375fb  5b                   pop ebx
// 005375fc  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ??$_Distance2@Viterator@?$_Tree@V?$_Tset_traits@PAVScript@RBX@@U?$less@PAVScript@RBX@@@std@@V?$allocator@PAVScript@RBX@@@4@$0A@@std@@@std@@I@std@@YAXViterator@?$_Tree@V?$_Tset_traits@PAVScript@RBX@@U?$less@PAVScript@RBX@@@std@@V?$allocator@PAVScript@RBX@@@4@$0A@@std@@@0@0AAIUbidirectional_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
