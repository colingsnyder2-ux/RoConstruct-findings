// roc 2007-08 00536890  unit: boost::any::placeholder  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00536890
//
// 00536890  a17cbe8a00           mov eax, dword ptr [0x8abe7c]
// 00536895  56                   push esi
// 00536896  8b742408             mov esi, dword ptr [esp + 8]
// 0053689a  50                   push eax
// 0053689b  56                   push esi
// 0053689c  e86f800800           call 0x5be910
// 005368a1  6874567a00           push 0x7a5674
// 005368a6  56                   push esi
// 005368a7  e844730800           call 0x5bdbf0
// 005368ac  6a00                 push 0
// 005368ae  6830575300           push 0x535730
// 005368b3  56                   push esi
// 005368b4  e807740800           call 0x5bdcc0
// 005368b9  6afd                 push -3
// 005368bb  56                   push esi
// 005368bc  e82f770800           call 0x5bdff0
// 005368c1  6844587a00           push 0x7a5844
// 005368c6  56                   push esi
// 005368c7  e824730800           call 0x5bdbf0
// 005368cc  6a00                 push 0
// 005368ce  6800575300           push 0x535700
// 005368d3  56                   push esi
// 005368d4  e8e7730800           call 0x5bdcc0
// 005368d9  6afd                 push -3
// 005368db  56                   push esi
// 005368dc  e80f770800           call 0x5bdff0
// 005368e1  83c440               add esp, 0x40
// 005368e4  683c587a00           push 0x7a583c
// 005368e9  56                   push esi
// 005368ea  e801730800           call 0x5bdbf0
// 005368ef  6a00                 push 0
// 005368f1  68c0565300           push 0x5356c0
// 005368f6  56                   push esi
// 005368f7  e8c4730800           call 0x5bdcc0
// 005368fc  6afd                 push -3
// 005368fe  56                   push esi
// 005368ff  e8ec760800           call 0x5bdff0
// 00536904  6834587a00           push 0x7a5834
// 00536909  56                   push esi
// 0053690a  e8e1720800           call 0x5bdbf0
// 0053690f  6a00                 push 0
// 00536911  6860575300           push 0x535760
// 00536916  56                   push esi
// 00536917  e8a4730800           call 0x5bdcc0
// 0053691c  6afd                 push -3
// 0053691e  56                   push esi
// 0053691f  e8cc760800           call 0x5bdff0
// 00536924  6828587a00           push 0x7a5828
// 00536929  56                   push esi
// 0053692a  e8c1720800           call 0x5bdbf0
// 0053692f  83c440               add esp, 0x40
// 00536932  6a00                 push 0
// 00536934  68e0565300           push 0x5356e0
// 00536939  56                   push esi
// 0053693a  e881730800           call 0x5bdcc0
// 0053693f  6afd                 push -3
// 00536941  56                   push esi
// 00536942  e8a9760800           call 0x5bdff0
// 00536947  6afe                 push -2
// 00536949  56                   push esi
// 0053694a  e8416c0800           call 0x5bd590
// 0053694f  83c41c               add esp, 0x1c
// 00536952  5e                   pop esi
// 00536953  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?registerClass@?$Bridge@V?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@$00@Lua@RBX@@SAXPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
