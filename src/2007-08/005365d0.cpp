// roc 2007-08 005365d0  unit: boost::any::placeholder  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005365d0
//
// 005365d0  a18cbe8a00           mov eax, dword ptr [0x8abe8c]
// 005365d5  56                   push esi
// 005365d6  8b742408             mov esi, dword ptr [esp + 8]
// 005365da  50                   push eax
// 005365db  56                   push esi
// 005365dc  e82f830800           call 0x5be910
// 005365e1  6874567a00           push 0x7a5674
// 005365e6  56                   push esi
// 005365e7  e804760800           call 0x5bdbf0
// 005365ec  6a00                 push 0
// 005365ee  68a0545300           push 0x5354a0
// 005365f3  56                   push esi
// 005365f4  e8c7760800           call 0x5bdcc0
// 005365f9  6afd                 push -3
// 005365fb  56                   push esi
// 005365fc  e8ef790800           call 0x5bdff0
// 00536601  6844587a00           push 0x7a5844
// 00536606  56                   push esi
// 00536607  e8e4750800           call 0x5bdbf0
// 0053660c  6a00                 push 0
// 0053660e  6870545300           push 0x535470
// 00536613  56                   push esi
// 00536614  e8a7760800           call 0x5bdcc0
// 00536619  6afd                 push -3
// 0053661b  56                   push esi
// 0053661c  e8cf790800           call 0x5bdff0
// 00536621  83c440               add esp, 0x40
// 00536624  683c587a00           push 0x7a583c
// 00536629  56                   push esi
// 0053662a  e8c1750800           call 0x5bdbf0
// 0053662f  6a00                 push 0
// 00536631  6820545300           push 0x535420
// 00536636  56                   push esi
// 00536637  e884760800           call 0x5bdcc0
// 0053663c  6afd                 push -3
// 0053663e  56                   push esi
// 0053663f  e8ac790800           call 0x5bdff0
// 00536644  6834587a00           push 0x7a5834
// 00536649  56                   push esi
// 0053664a  e8a1750800           call 0x5bdbf0
// 0053664f  6a00                 push 0
// 00536651  68d0545300           push 0x5354d0
// 00536656  56                   push esi
// 00536657  e864760800           call 0x5bdcc0
// 0053665c  6afd                 push -3
// 0053665e  56                   push esi
// 0053665f  e88c790800           call 0x5bdff0
// 00536664  6828587a00           push 0x7a5828
// 00536669  56                   push esi
// 0053666a  e881750800           call 0x5bdbf0
// 0053666f  83c440               add esp, 0x40
// 00536672  6a00                 push 0
// 00536674  6840545300           push 0x535440
// 00536679  56                   push esi
// 0053667a  e841760800           call 0x5bdcc0
// 0053667f  6afd                 push -3
// 00536681  56                   push esi
// 00536682  e869790800           call 0x5bdff0
// 00536687  6afe                 push -2
// 00536689  56                   push esi
// 0053668a  e8016f0800           call 0x5bd590
// 0053668f  83c41c               add esp, 0x1c
// 00536692  5e                   pop esi
// 00536693  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?registerClass@?$Bridge@V?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@$00@Lua@RBX@@SAXPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
