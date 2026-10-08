// roc 2007-03 005385d0  unit: seg_00530000  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005385d0
//
// 005385d0  a14c828a00           mov eax, dword ptr [0x8a824c]
// 005385d5  56                   push esi
// 005385d6  8b742408             mov esi, dword ptr [esp + 8]
// 005385da  50                   push eax
// 005385db  56                   push esi
// 005385dc  e89f150800           call 0x5b9b80
// 005385e1  6874567a00           push 0x7a5674
// 005385e6  56                   push esi
// 005385e7  e8d40a0800           call 0x5b90c0
// 005385ec  6a00                 push 0
// 005385ee  6890795300           push 0x537990
// 005385f3  56                   push esi
// 005385f4  e8970b0800           call 0x5b9190
// 005385f9  6afd                 push -3
// 005385fb  56                   push esi
// 005385fc  e8bf0e0800           call 0x5b94c0
// 00538601  6890587a00           push 0x7a5890
// 00538606  56                   push esi
// 00538607  e8b40a0800           call 0x5b90c0
// 0053860c  6a00                 push 0
// 0053860e  6860795300           push 0x537960
// 00538613  56                   push esi
// 00538614  e8770b0800           call 0x5b9190
// 00538619  6afd                 push -3
// 0053861b  56                   push esi
// 0053861c  e89f0e0800           call 0x5b94c0
// 00538621  83c440               add esp, 0x40
// 00538624  6888587a00           push 0x7a5888
// 00538629  56                   push esi
// 0053862a  e8910a0800           call 0x5b90c0
// 0053862f  6a00                 push 0
// 00538631  6820795300           push 0x537920
// 00538636  56                   push esi
// 00538637  e8540b0800           call 0x5b9190
// 0053863c  6afd                 push -3
// 0053863e  56                   push esi
// 0053863f  e87c0e0800           call 0x5b94c0
// 00538644  6880587a00           push 0x7a5880
// 00538649  56                   push esi
// 0053864a  e8710a0800           call 0x5b90c0
// 0053864f  6a00                 push 0
// 00538651  68c0795300           push 0x5379c0
// 00538656  56                   push esi
// 00538657  e8340b0800           call 0x5b9190
// 0053865c  6afd                 push -3
// 0053865e  56                   push esi
// 0053865f  e85c0e0800           call 0x5b94c0
// 00538664  6874587a00           push 0x7a5874
// 00538669  56                   push esi
// 0053866a  e8510a0800           call 0x5b90c0
// 0053866f  83c440               add esp, 0x40
// 00538672  6a00                 push 0
// 00538674  6840795300           push 0x537940
// 00538679  56                   push esi
// 0053867a  e8110b0800           call 0x5b9190
// 0053867f  6afd                 push -3
// 00538681  56                   push esi
// 00538682  e8390e0800           call 0x5b94c0
// 00538687  6afe                 push -2
// 00538689  56                   push esi
// 0053868a  e8d1030800           call 0x5b8a60
// 0053868f  83c41c               add esp, 0x1c
// 00538692  5e                   pop esi
// 00538693  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?registerClass@?$Bridge@V?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@$00@Lua@RBX@@SAXPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
