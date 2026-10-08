// roc 2008-06 005aacc0  unit: RBX::VScriptContext::?$FactoryProduct  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005aacc0
//
// 005aacc0  a1d8b19500           mov eax, dword ptr [0x95b1d8]
// 005aacc5  56                   push esi
// 005aacc6  8b742408             mov esi, dword ptr [esp + 8]
// 005aacca  50                   push eax
// 005aaccb  56                   push esi
// 005aaccc  e8bf5f0600           call 0x610c90
// 005aacd1  6884438300           push 0x834384
// 005aacd6  56                   push esi
// 005aacd7  e8a4750600           call 0x612280
// 005aacdc  6a00                 push 0
// 005aacde  68709f5a00           push 0x5a9f70
// 005aace3  56                   push esi
// 005aace4  e867760600           call 0x612350
// 005aace9  6afd                 push -3
// 005aaceb  56                   push esi
// 005aacec  e88f790600           call 0x612680
// 005aacf1  68d0448300           push 0x8344d0
// 005aacf6  56                   push esi
// 005aacf7  e884750600           call 0x612280
// 005aacfc  6a00                 push 0
// 005aacfe  68409f5a00           push 0x5a9f40
// 005aad03  56                   push esi
// 005aad04  e847760600           call 0x612350
// 005aad09  6afd                 push -3
// 005aad0b  56                   push esi
// 005aad0c  e86f790600           call 0x612680
// 005aad11  83c440               add esp, 0x40
// 005aad14  68c8448300           push 0x8344c8
// 005aad19  56                   push esi
// 005aad1a  e861750600           call 0x612280
// 005aad1f  6a00                 push 0
// 005aad21  68d09e5a00           push 0x5a9ed0
// 005aad26  56                   push esi
// 005aad27  e824760600           call 0x612350
// 005aad2c  6afd                 push -3
// 005aad2e  56                   push esi
// 005aad2f  e84c790600           call 0x612680
// 005aad34  68c0448300           push 0x8344c0
// 005aad39  56                   push esi
// 005aad3a  e841750600           call 0x612280
// 005aad3f  6a00                 push 0
// 005aad41  68a09f5a00           push 0x5a9fa0
// 005aad46  56                   push esi
// 005aad47  e804760600           call 0x612350
// 005aad4c  6afd                 push -3
// 005aad4e  56                   push esi
// 005aad4f  e82c790600           call 0x612680
// 005aad54  68b4448300           push 0x8344b4
// 005aad59  56                   push esi
// 005aad5a  e821750600           call 0x612280
// 005aad5f  83c440               add esp, 0x40
// 005aad62  6a00                 push 0
// 005aad64  68f09e5a00           push 0x5a9ef0
// 005aad69  56                   push esi
// 005aad6a  e8e1750600           call 0x612350
// 005aad6f  6afd                 push -3
// 005aad71  56                   push esi
// 005aad72  e809790600           call 0x612680
// 005aad77  6afe                 push -2
// 005aad79  56                   push esi
// 005aad7a  e8a16e0600           call 0x611c20
// 005aad7f  83c41c               add esp, 0x1c
// 005aad82  5e                   pop esi
// 005aad83  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?registerClass@?$Bridge@V?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@$00@Lua@RBX@@SAXPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
