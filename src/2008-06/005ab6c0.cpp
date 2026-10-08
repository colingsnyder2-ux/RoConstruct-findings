// roc 2008-06 005ab6c0  unit: RBX::Lua::ThreadRef::VNode::V?$shared_ptr::?$TItem  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ab6c0
//
// 005ab6c0  a130979400           mov eax, dword ptr [0x949730]
// 005ab6c5  56                   push esi
// 005ab6c6  8b742408             mov esi, dword ptr [esp + 8]
// 005ab6ca  50                   push eax
// 005ab6cb  56                   push esi
// 005ab6cc  e8bf550600           call 0x610c90
// 005ab6d1  6884438300           push 0x834384
// 005ab6d6  56                   push esi
// 005ab6d7  e8a46b0600           call 0x612280
// 005ab6dc  6a00                 push 0
// 005ab6de  6870985a00           push 0x5a9870
// 005ab6e3  56                   push esi
// 005ab6e4  e8676c0600           call 0x612350
// 005ab6e9  6afd                 push -3
// 005ab6eb  56                   push esi
// 005ab6ec  e88f6f0600           call 0x612680
// 005ab6f1  68d0448300           push 0x8344d0
// 005ab6f6  56                   push esi
// 005ab6f7  e8846b0600           call 0x612280
// 005ab6fc  6a00                 push 0
// 005ab6fe  6840985a00           push 0x5a9840
// 005ab703  56                   push esi
// 005ab704  e8476c0600           call 0x612350
// 005ab709  6afd                 push -3
// 005ab70b  56                   push esi
// 005ab70c  e86f6f0600           call 0x612680
// 005ab711  83c440               add esp, 0x40
// 005ab714  68c8448300           push 0x8344c8
// 005ab719  56                   push esi
// 005ab71a  e8616b0600           call 0x612280
// 005ab71f  6a00                 push 0
// 005ab721  6830aa5a00           push 0x5aaa30
// 005ab726  56                   push esi
// 005ab727  e8246c0600           call 0x612350
// 005ab72c  6afd                 push -3
// 005ab72e  56                   push esi
// 005ab72f  e84c6f0600           call 0x612680
// 005ab734  68c0448300           push 0x8344c0
// 005ab739  56                   push esi
// 005ab73a  e8416b0600           call 0x612280
// 005ab73f  6a00                 push 0
// 005ab741  6880aa5a00           push 0x5aaa80
// 005ab746  56                   push esi
// 005ab747  e8046c0600           call 0x612350
// 005ab74c  6afd                 push -3
// 005ab74e  56                   push esi
// 005ab74f  e82c6f0600           call 0x612680
// 005ab754  68b4448300           push 0x8344b4
// 005ab759  56                   push esi
// 005ab75a  e8216b0600           call 0x612280
// 005ab75f  83c440               add esp, 0x40
// 005ab762  6a00                 push 0
// 005ab764  6810985a00           push 0x5a9810
// 005ab769  56                   push esi
// 005ab76a  e8e16b0600           call 0x612350
// 005ab76f  6afd                 push -3
// 005ab771  56                   push esi
// 005ab772  e8096f0600           call 0x612680
// 005ab777  6afe                 push -2
// 005ab779  56                   push esi
// 005ab77a  e8a1640600           call 0x611c20
// 005ab77f  83c41c               add esp, 0x1c
// 005ab782  5e                   pop esi
// 005ab783  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?registerClass@?$Bridge@V?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@$00@Lua@RBX@@SAXPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
