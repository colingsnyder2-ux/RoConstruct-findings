// roc 2007-03 00538500  unit: seg_00530000  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00538500
//
// 00538500  a144828a00           mov eax, dword ptr [0x8a8244]
// 00538505  56                   push esi
// 00538506  8b742408             mov esi, dword ptr [esp + 8]
// 0053850a  50                   push eax
// 0053850b  56                   push esi
// 0053850c  e86f160800           call 0x5b9b80
// 00538511  6874567a00           push 0x7a5674
// 00538516  56                   push esi
// 00538517  e8a40b0800           call 0x5b90c0
// 0053851c  6a00                 push 0
// 0053851e  6880785300           push 0x537880
// 00538523  56                   push esi
// 00538524  e8670c0800           call 0x5b9190
// 00538529  6afd                 push -3
// 0053852b  56                   push esi
// 0053852c  e88f0f0800           call 0x5b94c0
// 00538531  6890587a00           push 0x7a5890
// 00538536  56                   push esi
// 00538537  e8840b0800           call 0x5b90c0
// 0053853c  6a00                 push 0
// 0053853e  6850785300           push 0x537850
// 00538543  56                   push esi
// 00538544  e8470c0800           call 0x5b9190
// 00538549  6afd                 push -3
// 0053854b  56                   push esi
// 0053854c  e86f0f0800           call 0x5b94c0
// 00538551  83c440               add esp, 0x40
// 00538554  6888587a00           push 0x7a5888
// 00538559  56                   push esi
// 0053855a  e8610b0800           call 0x5b90c0
// 0053855f  6a00                 push 0
// 00538561  6810785300           push 0x537810
// 00538566  56                   push esi
// 00538567  e8240c0800           call 0x5b9190
// 0053856c  6afd                 push -3
// 0053856e  56                   push esi
// 0053856f  e84c0f0800           call 0x5b94c0
// 00538574  6880587a00           push 0x7a5880
// 00538579  56                   push esi
// 0053857a  e8410b0800           call 0x5b90c0
// 0053857f  6a00                 push 0
// 00538581  68b0785300           push 0x5378b0
// 00538586  56                   push esi
// 00538587  e8040c0800           call 0x5b9190
// 0053858c  6afd                 push -3
// 0053858e  56                   push esi
// 0053858f  e82c0f0800           call 0x5b94c0
// 00538594  6874587a00           push 0x7a5874
// 00538599  56                   push esi
// 0053859a  e8210b0800           call 0x5b90c0
// 0053859f  83c440               add esp, 0x40
// 005385a2  6a00                 push 0
// 005385a4  6830785300           push 0x537830
// 005385a9  56                   push esi
// 005385aa  e8e10b0800           call 0x5b9190
// 005385af  6afd                 push -3
// 005385b1  56                   push esi
// 005385b2  e8090f0800           call 0x5b94c0
// 005385b7  6afe                 push -2
// 005385b9  56                   push esi
// 005385ba  e8a1040800           call 0x5b8a60
// 005385bf  83c41c               add esp, 0x1c
// 005385c2  5e                   pop esi
// 005385c3  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?registerClass@?$Bridge@V?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@$00@Lua@RBX@@SAXPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
