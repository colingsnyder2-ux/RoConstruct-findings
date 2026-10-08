// roc 2008-06 005aabf0  unit: RBX::VScriptContext::?$FactoryProduct  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005aabf0
//
// 005aabf0  a1d4b19500           mov eax, dword ptr [0x95b1d4]
// 005aabf5  56                   push esi
// 005aabf6  8b742408             mov esi, dword ptr [esp + 8]
// 005aabfa  50                   push eax
// 005aabfb  56                   push esi
// 005aabfc  e88f600600           call 0x610c90
// 005aac01  6884438300           push 0x834384
// 005aac06  56                   push esi
// 005aac07  e874760600           call 0x612280
// 005aac0c  6a00                 push 0
// 005aac0e  68609e5a00           push 0x5a9e60
// 005aac13  56                   push esi
// 005aac14  e837770600           call 0x612350
// 005aac19  6afd                 push -3
// 005aac1b  56                   push esi
// 005aac1c  e85f7a0600           call 0x612680
// 005aac21  68d0448300           push 0x8344d0
// 005aac26  56                   push esi
// 005aac27  e854760600           call 0x612280
// 005aac2c  6a00                 push 0
// 005aac2e  68309e5a00           push 0x5a9e30
// 005aac33  56                   push esi
// 005aac34  e817770600           call 0x612350
// 005aac39  6afd                 push -3
// 005aac3b  56                   push esi
// 005aac3c  e83f7a0600           call 0x612680
// 005aac41  83c440               add esp, 0x40
// 005aac44  68c8448300           push 0x8344c8
// 005aac49  56                   push esi
// 005aac4a  e831760600           call 0x612280
// 005aac4f  6a00                 push 0
// 005aac51  68e09d5a00           push 0x5a9de0
// 005aac56  56                   push esi
// 005aac57  e8f4760600           call 0x612350
// 005aac5c  6afd                 push -3
// 005aac5e  56                   push esi
// 005aac5f  e81c7a0600           call 0x612680
// 005aac64  68c0448300           push 0x8344c0
// 005aac69  56                   push esi
// 005aac6a  e811760600           call 0x612280
// 005aac6f  6a00                 push 0
// 005aac71  68909e5a00           push 0x5a9e90
// 005aac76  56                   push esi
// 005aac77  e8d4760600           call 0x612350
// 005aac7c  6afd                 push -3
// 005aac7e  56                   push esi
// 005aac7f  e8fc790600           call 0x612680
// 005aac84  68b4448300           push 0x8344b4
// 005aac89  56                   push esi
// 005aac8a  e8f1750600           call 0x612280
// 005aac8f  83c440               add esp, 0x40
// 005aac92  6a00                 push 0
// 005aac94  68009e5a00           push 0x5a9e00
// 005aac99  56                   push esi
// 005aac9a  e8b1760600           call 0x612350
// 005aac9f  6afd                 push -3
// 005aaca1  56                   push esi
// 005aaca2  e8d9790600           call 0x612680
// 005aaca7  6afe                 push -2
// 005aaca9  56                   push esi
// 005aacaa  e8716f0600           call 0x611c20
// 005aacaf  83c41c               add esp, 0x1c
// 005aacb2  5e                   pop esi
// 005aacb3  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?registerClass@?$Bridge@V?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@$00@Lua@RBX@@SAXPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
