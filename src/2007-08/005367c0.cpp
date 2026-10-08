// roc 2007-08 005367c0  unit: boost::any::placeholder  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005367c0
//
// 005367c0  a174be8a00           mov eax, dword ptr [0x8abe74]
// 005367c5  56                   push esi
// 005367c6  8b742408             mov esi, dword ptr [esp + 8]
// 005367ca  50                   push eax
// 005367cb  56                   push esi
// 005367cc  e83f810800           call 0x5be910
// 005367d1  6874567a00           push 0x7a5674
// 005367d6  56                   push esi
// 005367d7  e814740800           call 0x5bdbf0
// 005367dc  6a00                 push 0
// 005367de  6820565300           push 0x535620
// 005367e3  56                   push esi
// 005367e4  e8d7740800           call 0x5bdcc0
// 005367e9  6afd                 push -3
// 005367eb  56                   push esi
// 005367ec  e8ff770800           call 0x5bdff0
// 005367f1  6844587a00           push 0x7a5844
// 005367f6  56                   push esi
// 005367f7  e8f4730800           call 0x5bdbf0
// 005367fc  6a00                 push 0
// 005367fe  68f0555300           push 0x5355f0
// 00536803  56                   push esi
// 00536804  e8b7740800           call 0x5bdcc0
// 00536809  6afd                 push -3
// 0053680b  56                   push esi
// 0053680c  e8df770800           call 0x5bdff0
// 00536811  83c440               add esp, 0x40
// 00536814  683c587a00           push 0x7a583c
// 00536819  56                   push esi
// 0053681a  e8d1730800           call 0x5bdbf0
// 0053681f  6a00                 push 0
// 00536821  68b0555300           push 0x5355b0
// 00536826  56                   push esi
// 00536827  e894740800           call 0x5bdcc0
// 0053682c  6afd                 push -3
// 0053682e  56                   push esi
// 0053682f  e8bc770800           call 0x5bdff0
// 00536834  6834587a00           push 0x7a5834
// 00536839  56                   push esi
// 0053683a  e8b1730800           call 0x5bdbf0
// 0053683f  6a00                 push 0
// 00536841  6850565300           push 0x535650
// 00536846  56                   push esi
// 00536847  e874740800           call 0x5bdcc0
// 0053684c  6afd                 push -3
// 0053684e  56                   push esi
// 0053684f  e89c770800           call 0x5bdff0
// 00536854  6828587a00           push 0x7a5828
// 00536859  56                   push esi
// 0053685a  e891730800           call 0x5bdbf0
// 0053685f  83c440               add esp, 0x40
// 00536862  6a00                 push 0
// 00536864  68d0555300           push 0x5355d0
// 00536869  56                   push esi
// 0053686a  e851740800           call 0x5bdcc0
// 0053686f  6afd                 push -3
// 00536871  56                   push esi
// 00536872  e879770800           call 0x5bdff0
// 00536877  6afe                 push -2
// 00536879  56                   push esi
// 0053687a  e8116d0800           call 0x5bd590
// 0053687f  83c41c               add esp, 0x1c
// 00536882  5e                   pop esi
// 00536883  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?registerClass@?$Bridge@V?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@$00@Lua@RBX@@SAXPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
