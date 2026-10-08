// roc 2007-08 00537750  unit: RBX::Lua::ThreadRef::VNode::V?$shared_ptr::?$TItem  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00537750
//
// 00537750  a1d8f78900           mov eax, dword ptr [0x89f7d8]
// 00537755  56                   push esi
// 00537756  8b742408             mov esi, dword ptr [esp + 8]
// 0053775a  50                   push eax
// 0053775b  56                   push esi
// 0053775c  e8af710800           call 0x5be910
// 00537761  6874567a00           push 0x7a5674
// 00537766  56                   push esi
// 00537767  e884640800           call 0x5bdbf0
// 0053776c  6a00                 push 0
// 0053776e  6880555300           push 0x535580
// 00537773  56                   push esi
// 00537774  e847650800           call 0x5bdcc0
// 00537779  6afd                 push -3
// 0053777b  56                   push esi
// 0053777c  e86f680800           call 0x5bdff0
// 00537781  6844587a00           push 0x7a5844
// 00537786  56                   push esi
// 00537787  e864640800           call 0x5bdbf0
// 0053778c  6a00                 push 0
// 0053778e  6850555300           push 0x535550
// 00537793  56                   push esi
// 00537794  e827650800           call 0x5bdcc0
// 00537799  6afd                 push -3
// 0053779b  56                   push esi
// 0053779c  e84f680800           call 0x5bdff0
// 005377a1  83c440               add esp, 0x40
// 005377a4  683c587a00           push 0x7a583c
// 005377a9  56                   push esi
// 005377aa  e841640800           call 0x5bdbf0
// 005377af  6a00                 push 0
// 005377b1  6860695300           push 0x536960
// 005377b6  56                   push esi
// 005377b7  e804650800           call 0x5bdcc0
// 005377bc  6afd                 push -3
// 005377be  56                   push esi
// 005377bf  e82c680800           call 0x5bdff0
// 005377c4  6834587a00           push 0x7a5834
// 005377c9  56                   push esi
// 005377ca  e821640800           call 0x5bdbf0
// 005377cf  6a00                 push 0
// 005377d1  68b0695300           push 0x5369b0
// 005377d6  56                   push esi
// 005377d7  e8e4640800           call 0x5bdcc0
// 005377dc  6afd                 push -3
// 005377de  56                   push esi
// 005377df  e80c680800           call 0x5bdff0
// 005377e4  6828587a00           push 0x7a5828
// 005377e9  56                   push esi
// 005377ea  e801640800           call 0x5bdbf0
// 005377ef  83c440               add esp, 0x40
// 005377f2  6a00                 push 0
// 005377f4  6820555300           push 0x535520
// 005377f9  56                   push esi
// 005377fa  e8c1640800           call 0x5bdcc0
// 005377ff  6afd                 push -3
// 00537801  56                   push esi
// 00537802  e8e9670800           call 0x5bdff0
// 00537807  6afe                 push -2
// 00537809  56                   push esi
// 0053780a  e8815d0800           call 0x5bd590
// 0053780f  83c41c               add esp, 0x1c
// 00537812  5e                   pop esi
// 00537813  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?registerClass@?$Bridge@V?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@$00@Lua@RBX@@SAXPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
