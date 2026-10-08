// roc 2008-06 005aa660  unit: RBX::VScriptContext::?$FactoryProduct  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005aa660
//
// 005aa660  a1e8b19500           mov eax, dword ptr [0x95b1e8]
// 005aa665  56                   push esi
// 005aa666  8b742408             mov esi, dword ptr [esp + 8]
// 005aa66a  50                   push eax
// 005aa66b  56                   push esi
// 005aa66c  e81f660600           call 0x610c90
// 005aa671  6884438300           push 0x834384
// 005aa676  56                   push esi
// 005aa677  e8047c0600           call 0x612280
// 005aa67c  6a00                 push 0
// 005aa67e  6890975a00           push 0x5a9790
// 005aa683  56                   push esi
// 005aa684  e8c77c0600           call 0x612350
// 005aa689  6afd                 push -3
// 005aa68b  56                   push esi
// 005aa68c  e8ef7f0600           call 0x612680
// 005aa691  68d0448300           push 0x8344d0
// 005aa696  56                   push esi
// 005aa697  e8e47b0600           call 0x612280
// 005aa69c  6a00                 push 0
// 005aa69e  6860975a00           push 0x5a9760
// 005aa6a3  56                   push esi
// 005aa6a4  e8a77c0600           call 0x612350
// 005aa6a9  6afd                 push -3
// 005aa6ab  56                   push esi
// 005aa6ac  e8cf7f0600           call 0x612680
// 005aa6b1  83c440               add esp, 0x40
// 005aa6b4  68c8448300           push 0x8344c8
// 005aa6b9  56                   push esi
// 005aa6ba  e8c17b0600           call 0x612280
// 005aa6bf  6a00                 push 0
// 005aa6c1  6810975a00           push 0x5a9710
// 005aa6c6  56                   push esi
// 005aa6c7  e8847c0600           call 0x612350
// 005aa6cc  6afd                 push -3
// 005aa6ce  56                   push esi
// 005aa6cf  e8ac7f0600           call 0x612680
// 005aa6d4  68c0448300           push 0x8344c0
// 005aa6d9  56                   push esi
// 005aa6da  e8a17b0600           call 0x612280
// 005aa6df  6a00                 push 0
// 005aa6e1  68c0975a00           push 0x5a97c0
// 005aa6e6  56                   push esi
// 005aa6e7  e8647c0600           call 0x612350
// 005aa6ec  6afd                 push -3
// 005aa6ee  56                   push esi
// 005aa6ef  e88c7f0600           call 0x612680
// 005aa6f4  68b4448300           push 0x8344b4
// 005aa6f9  56                   push esi
// 005aa6fa  e8817b0600           call 0x612280
// 005aa6ff  83c440               add esp, 0x40
// 005aa702  6a00                 push 0
// 005aa704  6830975a00           push 0x5a9730
// 005aa709  56                   push esi
// 005aa70a  e8417c0600           call 0x612350
// 005aa70f  6afd                 push -3
// 005aa711  56                   push esi
// 005aa712  e8697f0600           call 0x612680
// 005aa717  6afe                 push -2
// 005aa719  56                   push esi
// 005aa71a  e801750600           call 0x611c20
// 005aa71f  83c41c               add esp, 0x1c
// 005aa722  5e                   pop esi
// 005aa723  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?registerClass@?$Bridge@V?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@$00@Lua@RBX@@SAXPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
