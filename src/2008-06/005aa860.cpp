// roc 2008-06 005aa860  unit: RBX::VScriptContext::?$FactoryProduct  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005aa860
//
// 005aa860  a1bcb19500           mov eax, dword ptr [0x95b1bc]
// 005aa865  56                   push esi
// 005aa866  8b742408             mov esi, dword ptr [esp + 8]
// 005aa86a  50                   push eax
// 005aa86b  56                   push esi
// 005aa86c  e81f640600           call 0x610c90
// 005aa871  6884438300           push 0x834384
// 005aa876  56                   push esi
// 005aa877  e8047a0600           call 0x612280
// 005aa87c  6a00                 push 0
// 005aa87e  6810995a00           push 0x5a9910
// 005aa883  56                   push esi
// 005aa884  e8c77a0600           call 0x612350
// 005aa889  6afd                 push -3
// 005aa88b  56                   push esi
// 005aa88c  e8ef7d0600           call 0x612680
// 005aa891  68d0448300           push 0x8344d0
// 005aa896  56                   push esi
// 005aa897  e8e4790600           call 0x612280
// 005aa89c  6a00                 push 0
// 005aa89e  68e0985a00           push 0x5a98e0
// 005aa8a3  56                   push esi
// 005aa8a4  e8a77a0600           call 0x612350
// 005aa8a9  6afd                 push -3
// 005aa8ab  56                   push esi
// 005aa8ac  e8cf7d0600           call 0x612680
// 005aa8b1  83c440               add esp, 0x40
// 005aa8b4  68c8448300           push 0x8344c8
// 005aa8b9  56                   push esi
// 005aa8ba  e8c1790600           call 0x612280
// 005aa8bf  6a00                 push 0
// 005aa8c1  68a0985a00           push 0x5a98a0
// 005aa8c6  56                   push esi
// 005aa8c7  e8847a0600           call 0x612350
// 005aa8cc  6afd                 push -3
// 005aa8ce  56                   push esi
// 005aa8cf  e8ac7d0600           call 0x612680
// 005aa8d4  68c0448300           push 0x8344c0
// 005aa8d9  56                   push esi
// 005aa8da  e8a1790600           call 0x612280
// 005aa8df  6a00                 push 0
// 005aa8e1  6840995a00           push 0x5a9940
// 005aa8e6  56                   push esi
// 005aa8e7  e8647a0600           call 0x612350
// 005aa8ec  6afd                 push -3
// 005aa8ee  56                   push esi
// 005aa8ef  e88c7d0600           call 0x612680
// 005aa8f4  68b4448300           push 0x8344b4
// 005aa8f9  56                   push esi
// 005aa8fa  e881790600           call 0x612280
// 005aa8ff  83c440               add esp, 0x40
// 005aa902  6a00                 push 0
// 005aa904  68c0985a00           push 0x5a98c0
// 005aa909  56                   push esi
// 005aa90a  e8417a0600           call 0x612350
// 005aa90f  6afd                 push -3
// 005aa911  56                   push esi
// 005aa912  e8697d0600           call 0x612680
// 005aa917  6afe                 push -2
// 005aa919  56                   push esi
// 005aa91a  e801730600           call 0x611c20
// 005aa91f  83c41c               add esp, 0x1c
// 005aa922  5e                   pop esi
// 005aa923  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?registerClass@?$Bridge@V?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@$00@Lua@RBX@@SAXPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
