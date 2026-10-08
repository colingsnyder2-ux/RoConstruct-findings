// roc 2007-08 00536300  unit: boost::any::placeholder  size: 330 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00536300
//
// 00536300  a180be8a00           mov eax, dword ptr [0x8abe80]
// 00536305  56                   push esi
// 00536306  8b742408             mov esi, dword ptr [esp + 8]
// 0053630a  50                   push eax
// 0053630b  56                   push esi
// 0053630c  e8ff850800           call 0x5be910
// 00536311  6874567a00           push 0x7a5674
// 00536316  56                   push esi
// 00536317  e8d4780800           call 0x5bdbf0
// 0053631c  6a00                 push 0
// 0053631e  6870515300           push 0x535170
// 00536323  56                   push esi
// 00536324  e897790800           call 0x5bdcc0
// 00536329  6afd                 push -3
// 0053632b  56                   push esi
// 0053632c  e8bf7c0800           call 0x5bdff0
// 00536331  6844587a00           push 0x7a5844
// 00536336  56                   push esi
// 00536337  e8b4780800           call 0x5bdbf0
// 0053633c  6a00                 push 0
// 0053633e  6840515300           push 0x535140
// 00536343  56                   push esi
// 00536344  e877790800           call 0x5bdcc0
// 00536349  6afd                 push -3
// 0053634b  56                   push esi
// 0053634c  e89f7c0800           call 0x5bdff0
// 00536351  83c440               add esp, 0x40
// 00536354  683c587a00           push 0x7a583c
// 00536359  56                   push esi
// 0053635a  e891780800           call 0x5bdbf0
// 0053635f  6a00                 push 0
// 00536361  6800515300           push 0x535100
// 00536366  56                   push esi
// 00536367  e854790800           call 0x5bdcc0
// 0053636c  6afd                 push -3
// 0053636e  56                   push esi
// 0053636f  e87c7c0800           call 0x5bdff0
// 00536374  6834587a00           push 0x7a5834
// 00536379  56                   push esi
// 0053637a  e871780800           call 0x5bdbf0
// 0053637f  6a00                 push 0
// 00536381  68a0515300           push 0x5351a0
// 00536386  56                   push esi
// 00536387  e834790800           call 0x5bdcc0
// 0053638c  6afd                 push -3
// 0053638e  56                   push esi
// 0053638f  e85c7c0800           call 0x5bdff0
// 00536394  6828587a00           push 0x7a5828
// 00536399  56                   push esi
// 0053639a  e851780800           call 0x5bdbf0
// 0053639f  83c440               add esp, 0x40
// 005363a2  6a00                 push 0
// 005363a4  6820515300           push 0x535120
// 005363a9  56                   push esi
// 005363aa  e811790800           call 0x5bdcc0
// 005363af  6afd                 push -3
// 005363b1  56                   push esi
// 005363b2  e8397c0800           call 0x5bdff0
// 005363b7  6820587a00           push 0x7a5820
// 005363bc  56                   push esi
// 005363bd  e82e780800           call 0x5bdbf0
// 005363c2  6a00                 push 0
// 005363c4  6870265c00           push 0x5c2670
// 005363c9  56                   push esi
// 005363ca  e8f1780800           call 0x5bdcc0
// 005363cf  6afd                 push -3
// 005363d1  56                   push esi
// 005363d2  e8197c0800           call 0x5bdff0
// 005363d7  6818587a00           push 0x7a5818
// 005363dc  56                   push esi
// 005363dd  e80e780800           call 0x5bdbf0
// 005363e2  6a00                 push 0
// 005363e4  68f0265c00           push 0x5c26f0
// 005363e9  56                   push esi
// 005363ea  e8d1780800           call 0x5bdcc0
// 005363ef  83c444               add esp, 0x44
// 005363f2  6afd                 push -3
// 005363f4  56                   push esi
// 005363f5  e8f67b0800           call 0x5bdff0
// 005363fa  6810587a00           push 0x7a5810
// 005363ff  56                   push esi
// 00536400  e8eb770800           call 0x5bdbf0
// 00536405  6a00                 push 0
// 00536407  68a0355c00           push 0x5c35a0
// 0053640c  56                   push esi
// 0053640d  e8ae780800           call 0x5bdcc0
// 00536412  6afd                 push -3
// 00536414  56                   push esi
// 00536415  e8d67b0800           call 0x5bdff0
// 0053641a  6850587a00           push 0x7a5850
// 0053641f  56                   push esi
// 00536420  e8cb770800           call 0x5bdbf0
// 00536425  6a00                 push 0
// 00536427  6870275c00           push 0x5c2770
// 0053642c  56                   push esi
// 0053642d  e88e780800           call 0x5bdcc0
// 00536432  6afd                 push -3
// 00536434  56                   push esi
// 00536435  e8b67b0800           call 0x5bdff0
// 0053643a  83c440               add esp, 0x40
// 0053643d  6afe                 push -2
// 0053643f  56                   push esi
// 00536440  e84b710800           call 0x5bd590
// 00536445  83c408               add esp, 8
// 00536448  5e                   pop esi
// 00536449  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?registerClass@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SAXPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
