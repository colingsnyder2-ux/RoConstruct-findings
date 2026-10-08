// roc 2007-03 005381b0  unit: seg_00530000  size: 330 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005381b0
//
// 005381b0  a150828a00           mov eax, dword ptr [0x8a8250]
// 005381b5  56                   push esi
// 005381b6  8b742408             mov esi, dword ptr [esp + 8]
// 005381ba  50                   push eax
// 005381bb  56                   push esi
// 005381bc  e8bf190800           call 0x5b9b80
// 005381c1  6874567a00           push 0x7a5674
// 005381c6  56                   push esi
// 005381c7  e8f40e0800           call 0x5b90c0
// 005381cc  6a00                 push 0
// 005381ce  68c0745300           push 0x5374c0
// 005381d3  56                   push esi
// 005381d4  e8b70f0800           call 0x5b9190
// 005381d9  6afd                 push -3
// 005381db  56                   push esi
// 005381dc  e8df120800           call 0x5b94c0
// 005381e1  6890587a00           push 0x7a5890
// 005381e6  56                   push esi
// 005381e7  e8d40e0800           call 0x5b90c0
// 005381ec  6a00                 push 0
// 005381ee  6890745300           push 0x537490
// 005381f3  56                   push esi
// 005381f4  e8970f0800           call 0x5b9190
// 005381f9  6afd                 push -3
// 005381fb  56                   push esi
// 005381fc  e8bf120800           call 0x5b94c0
// 00538201  83c440               add esp, 0x40
// 00538204  6888587a00           push 0x7a5888
// 00538209  56                   push esi
// 0053820a  e8b10e0800           call 0x5b90c0
// 0053820f  6a00                 push 0
// 00538211  6850745300           push 0x537450
// 00538216  56                   push esi
// 00538217  e8740f0800           call 0x5b9190
// 0053821c  6afd                 push -3
// 0053821e  56                   push esi
// 0053821f  e89c120800           call 0x5b94c0
// 00538224  6880587a00           push 0x7a5880
// 00538229  56                   push esi
// 0053822a  e8910e0800           call 0x5b90c0
// 0053822f  6a00                 push 0
// 00538231  68f0745300           push 0x5374f0
// 00538236  56                   push esi
// 00538237  e8540f0800           call 0x5b9190
// 0053823c  6afd                 push -3
// 0053823e  56                   push esi
// 0053823f  e87c120800           call 0x5b94c0
// 00538244  6874587a00           push 0x7a5874
// 00538249  56                   push esi
// 0053824a  e8710e0800           call 0x5b90c0
// 0053824f  83c440               add esp, 0x40
// 00538252  6a00                 push 0
// 00538254  6870745300           push 0x537470
// 00538259  56                   push esi
// 0053825a  e8310f0800           call 0x5b9190
// 0053825f  6afd                 push -3
// 00538261  56                   push esi
// 00538262  e859120800           call 0x5b94c0
// 00538267  686c587a00           push 0x7a586c
// 0053826c  56                   push esi
// 0053826d  e84e0e0800           call 0x5b90c0
// 00538272  6a00                 push 0
// 00538274  6840d85b00           push 0x5bd840
// 00538279  56                   push esi
// 0053827a  e8110f0800           call 0x5b9190
// 0053827f  6afd                 push -3
// 00538281  56                   push esi
// 00538282  e839120800           call 0x5b94c0
// 00538287  6864587a00           push 0x7a5864
// 0053828c  56                   push esi
// 0053828d  e82e0e0800           call 0x5b90c0
// 00538292  6a00                 push 0
// 00538294  68c0d85b00           push 0x5bd8c0
// 00538299  56                   push esi
// 0053829a  e8f10e0800           call 0x5b9190
// 0053829f  83c444               add esp, 0x44
// 005382a2  6afd                 push -3
// 005382a4  56                   push esi
// 005382a5  e816120800           call 0x5b94c0
// 005382aa  685c587a00           push 0x7a585c
// 005382af  56                   push esi
// 005382b0  e80b0e0800           call 0x5b90c0
// 005382b5  6a00                 push 0
// 005382b7  6800e65b00           push 0x5be600
// 005382bc  56                   push esi
// 005382bd  e8ce0e0800           call 0x5b9190
// 005382c2  6afd                 push -3
// 005382c4  56                   push esi
// 005382c5  e8f6110800           call 0x5b94c0
// 005382ca  689c587a00           push 0x7a589c
// 005382cf  56                   push esi
// 005382d0  e8eb0d0800           call 0x5b90c0
// 005382d5  6a00                 push 0
// 005382d7  6840d95b00           push 0x5bd940
// 005382dc  56                   push esi
// 005382dd  e8ae0e0800           call 0x5b9190
// 005382e2  6afd                 push -3
// 005382e4  56                   push esi
// 005382e5  e8d6110800           call 0x5b94c0
// 005382ea  83c440               add esp, 0x40
// 005382ed  6afe                 push -2
// 005382ef  56                   push esi
// 005382f0  e86b070800           call 0x5b8a60
// 005382f5  83c408               add esp, 8
// 005382f8  5e                   pop esi
// 005382f9  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?registerClass@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SAXPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
