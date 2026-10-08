// roc 2007-03 00538310  unit: seg_00530000  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00538310
//
// 00538310  a15c828a00           mov eax, dword ptr [0x8a825c]
// 00538315  56                   push esi
// 00538316  8b742408             mov esi, dword ptr [esp + 8]
// 0053831a  50                   push eax
// 0053831b  56                   push esi
// 0053831c  e85f180800           call 0x5b9b80
// 00538321  6874567a00           push 0x7a5674
// 00538326  56                   push esi
// 00538327  e8940d0800           call 0x5b90c0
// 0053832c  6a00                 push 0
// 0053832e  6800775300           push 0x537700
// 00538333  56                   push esi
// 00538334  e8570e0800           call 0x5b9190
// 00538339  6afd                 push -3
// 0053833b  56                   push esi
// 0053833c  e87f110800           call 0x5b94c0
// 00538341  6890587a00           push 0x7a5890
// 00538346  56                   push esi
// 00538347  e8740d0800           call 0x5b90c0
// 0053834c  6a00                 push 0
// 0053834e  68d0765300           push 0x5376d0
// 00538353  56                   push esi
// 00538354  e8370e0800           call 0x5b9190
// 00538359  6afd                 push -3
// 0053835b  56                   push esi
// 0053835c  e85f110800           call 0x5b94c0
// 00538361  83c440               add esp, 0x40
// 00538364  6888587a00           push 0x7a5888
// 00538369  56                   push esi
// 0053836a  e8510d0800           call 0x5b90c0
// 0053836f  6a00                 push 0
// 00538371  6880765300           push 0x537680
// 00538376  56                   push esi
// 00538377  e8140e0800           call 0x5b9190
// 0053837c  6afd                 push -3
// 0053837e  56                   push esi
// 0053837f  e83c110800           call 0x5b94c0
// 00538384  6880587a00           push 0x7a5880
// 00538389  56                   push esi
// 0053838a  e8310d0800           call 0x5b90c0
// 0053838f  6a00                 push 0
// 00538391  6830775300           push 0x537730
// 00538396  56                   push esi
// 00538397  e8f40d0800           call 0x5b9190
// 0053839c  6afd                 push -3
// 0053839e  56                   push esi
// 0053839f  e81c110800           call 0x5b94c0
// 005383a4  6874587a00           push 0x7a5874
// 005383a9  56                   push esi
// 005383aa  e8110d0800           call 0x5b90c0
// 005383af  83c440               add esp, 0x40
// 005383b2  6a00                 push 0
// 005383b4  68a0765300           push 0x5376a0
// 005383b9  56                   push esi
// 005383ba  e8d10d0800           call 0x5b9190
// 005383bf  6afd                 push -3
// 005383c1  56                   push esi
// 005383c2  e8f9100800           call 0x5b94c0
// 005383c7  6afe                 push -2
// 005383c9  56                   push esi
// 005383ca  e891060800           call 0x5b8a60
// 005383cf  83c41c               add esp, 0x1c
// 005383d2  5e                   pop esi
// 005383d3  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?registerClass@?$Bridge@V?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@$00@Lua@RBX@@SAXPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
