// roc 2007-03 00539430  unit: seg_00530000  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00539430
//
// 00539430  a108e48900           mov eax, dword ptr [0x89e408]
// 00539435  56                   push esi
// 00539436  8b742408             mov esi, dword ptr [esp + 8]
// 0053943a  50                   push eax
// 0053943b  56                   push esi
// 0053943c  e83f070800           call 0x5b9b80
// 00539441  6874567a00           push 0x7a5674
// 00539446  56                   push esi
// 00539447  e874fc0700           call 0x5b90c0
// 0053944c  6a00                 push 0
// 0053944e  68e0775300           push 0x5377e0
// 00539453  56                   push esi
// 00539454  e837fd0700           call 0x5b9190
// 00539459  6afd                 push -3
// 0053945b  56                   push esi
// 0053945c  e85f000800           call 0x5b94c0
// 00539461  6890587a00           push 0x7a5890
// 00539466  56                   push esi
// 00539467  e854fc0700           call 0x5b90c0
// 0053946c  6a00                 push 0
// 0053946e  68b0775300           push 0x5377b0
// 00539473  56                   push esi
// 00539474  e817fd0700           call 0x5b9190
// 00539479  6afd                 push -3
// 0053947b  56                   push esi
// 0053947c  e83f000800           call 0x5b94c0
// 00539481  83c440               add esp, 0x40
// 00539484  6888587a00           push 0x7a5888
// 00539489  56                   push esi
// 0053948a  e831fc0700           call 0x5b90c0
// 0053948f  6a00                 push 0
// 00539491  68a0865300           push 0x5386a0
// 00539496  56                   push esi
// 00539497  e8f4fc0700           call 0x5b9190
// 0053949c  6afd                 push -3
// 0053949e  56                   push esi
// 0053949f  e81c000800           call 0x5b94c0
// 005394a4  6880587a00           push 0x7a5880
// 005394a9  56                   push esi
// 005394aa  e811fc0700           call 0x5b90c0
// 005394af  6a00                 push 0
// 005394b1  68f0865300           push 0x5386f0
// 005394b6  56                   push esi
// 005394b7  e8d4fc0700           call 0x5b9190
// 005394bc  6afd                 push -3
// 005394be  56                   push esi
// 005394bf  e8fcff0700           call 0x5b94c0
// 005394c4  6874587a00           push 0x7a5874
// 005394c9  56                   push esi
// 005394ca  e8f1fb0700           call 0x5b90c0
// 005394cf  83c440               add esp, 0x40
// 005394d2  6a00                 push 0
// 005394d4  6880775300           push 0x537780
// 005394d9  56                   push esi
// 005394da  e8b1fc0700           call 0x5b9190
// 005394df  6afd                 push -3
// 005394e1  56                   push esi
// 005394e2  e8d9ff0700           call 0x5b94c0
// 005394e7  6afe                 push -2
// 005394e9  56                   push esi
// 005394ea  e871f50700           call 0x5b8a60
// 005394ef  83c41c               add esp, 0x1c
// 005394f2  5e                   pop esi
// 005394f3  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?registerClass@?$Bridge@V?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@$00@Lua@RBX@@SAXPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
