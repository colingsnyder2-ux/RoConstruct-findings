// roc 2008-06 005aa930  unit: RBX::VScriptContext::?$FactoryProduct  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005aa930
//
// 005aa930  a1c4b19500           mov eax, dword ptr [0x95b1c4]
// 005aa935  56                   push esi
// 005aa936  8b742408             mov esi, dword ptr [esp + 8]
// 005aa93a  50                   push eax
// 005aa93b  56                   push esi
// 005aa93c  e84f630600           call 0x610c90
// 005aa941  6884438300           push 0x834384
// 005aa946  56                   push esi
// 005aa947  e834790600           call 0x612280
// 005aa94c  6a00                 push 0
// 005aa94e  68209a5a00           push 0x5a9a20
// 005aa953  56                   push esi
// 005aa954  e8f7790600           call 0x612350
// 005aa959  6afd                 push -3
// 005aa95b  56                   push esi
// 005aa95c  e81f7d0600           call 0x612680
// 005aa961  68d0448300           push 0x8344d0
// 005aa966  56                   push esi
// 005aa967  e814790600           call 0x612280
// 005aa96c  6a00                 push 0
// 005aa96e  68f0995a00           push 0x5a99f0
// 005aa973  56                   push esi
// 005aa974  e8d7790600           call 0x612350
// 005aa979  6afd                 push -3
// 005aa97b  56                   push esi
// 005aa97c  e8ff7c0600           call 0x612680
// 005aa981  83c440               add esp, 0x40
// 005aa984  68c8448300           push 0x8344c8
// 005aa989  56                   push esi
// 005aa98a  e8f1780600           call 0x612280
// 005aa98f  6a00                 push 0
// 005aa991  68b0995a00           push 0x5a99b0
// 005aa996  56                   push esi
// 005aa997  e8b4790600           call 0x612350
// 005aa99c  6afd                 push -3
// 005aa99e  56                   push esi
// 005aa99f  e8dc7c0600           call 0x612680
// 005aa9a4  68c0448300           push 0x8344c0
// 005aa9a9  56                   push esi
// 005aa9aa  e8d1780600           call 0x612280
// 005aa9af  6a00                 push 0
// 005aa9b1  68509a5a00           push 0x5a9a50
// 005aa9b6  56                   push esi
// 005aa9b7  e894790600           call 0x612350
// 005aa9bc  6afd                 push -3
// 005aa9be  56                   push esi
// 005aa9bf  e8bc7c0600           call 0x612680
// 005aa9c4  68b4448300           push 0x8344b4
// 005aa9c9  56                   push esi
// 005aa9ca  e8b1780600           call 0x612280
// 005aa9cf  83c440               add esp, 0x40
// 005aa9d2  6a00                 push 0
// 005aa9d4  68d0995a00           push 0x5a99d0
// 005aa9d9  56                   push esi
// 005aa9da  e871790600           call 0x612350
// 005aa9df  6afd                 push -3
// 005aa9e1  56                   push esi
// 005aa9e2  e8997c0600           call 0x612680
// 005aa9e7  6afe                 push -2
// 005aa9e9  56                   push esi
// 005aa9ea  e831720600           call 0x611c20
// 005aa9ef  83c41c               add esp, 0x1c
// 005aa9f2  5e                   pop esi
// 005aa9f3  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?registerClass@?$Bridge@V?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@$00@Lua@RBX@@SAXPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
