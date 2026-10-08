// roc 2007-03 00539500  unit: seg_00530000  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00539500
//
// 00539500  a158828a00           mov eax, dword ptr [0x8a8258]
// 00539505  56                   push esi
// 00539506  8b742408             mov esi, dword ptr [esp + 8]
// 0053950a  50                   push eax
// 0053950b  56                   push esi
// 0053950c  e86f060800           call 0x5b9b80
// 00539511  6874567a00           push 0x7a5674
// 00539516  56                   push esi
// 00539517  e8a4fb0700           call 0x5b90c0
// 0053951c  6a00                 push 0
// 0053951e  68507a5300           push 0x537a50
// 00539523  56                   push esi
// 00539524  e867fc0700           call 0x5b9190
// 00539529  6afd                 push -3
// 0053952b  56                   push esi
// 0053952c  e88fff0700           call 0x5b94c0
// 00539531  6890587a00           push 0x7a5890
// 00539536  56                   push esi
// 00539537  e884fb0700           call 0x5b90c0
// 0053953c  6a00                 push 0
// 0053953e  68207a5300           push 0x537a20
// 00539543  56                   push esi
// 00539544  e847fc0700           call 0x5b9190
// 00539549  6afd                 push -3
// 0053954b  56                   push esi
// 0053954c  e86fff0700           call 0x5b94c0
// 00539551  83c440               add esp, 0x40
// 00539554  6888587a00           push 0x7a5888
// 00539559  56                   push esi
// 0053955a  e861fb0700           call 0x5b90c0
// 0053955f  6a00                 push 0
// 00539561  68a0885300           push 0x5388a0
// 00539566  56                   push esi
// 00539567  e824fc0700           call 0x5b9190
// 0053956c  6afd                 push -3
// 0053956e  56                   push esi
// 0053956f  e84cff0700           call 0x5b94c0
// 00539574  6874587a00           push 0x7a5874
// 00539579  56                   push esi
// 0053957a  e841fb0700           call 0x5b90c0
// 0053957f  6a00                 push 0
// 00539581  68007a5300           push 0x537a00
// 00539586  56                   push esi
// 00539587  e804fc0700           call 0x5b9190
// 0053958c  6afd                 push -3
// 0053958e  56                   push esi
// 0053958f  e82cff0700           call 0x5b94c0
// 00539594  6afe                 push -2
// 00539596  56                   push esi
// 00539597  e8c4f40700           call 0x5b8a60
// 0053959c  83c440               add esp, 0x40
// 0053959f  5e                   pop esi
// 005395a0  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?registerClass@?$Bridge@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@SAXPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
