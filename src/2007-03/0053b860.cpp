// roc 2007-03 0053b860  unit: seg_00530000  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0053b860
//
// 0053b860  a1b07f8a00           mov eax, dword ptr [0x8a7fb0]
// 0053b865  56                   push esi
// 0053b866  8b742408             mov esi, dword ptr [esp + 8]
// 0053b86a  50                   push eax
// 0053b86b  56                   push esi
// 0053b86c  e80fe30700           call 0x5b9b80
// 0053b871  6874567a00           push 0x7a5674
// 0053b876  56                   push esi
// 0053b877  e844d80700           call 0x5b90c0
// 0053b87c  6a00                 push 0
// 0053b87e  68c0695300           push 0x5369c0
// 0053b883  56                   push esi
// 0053b884  e807d90700           call 0x5b9190
// 0053b889  6afd                 push -3
// 0053b88b  56                   push esi
// 0053b88c  e82fdc0700           call 0x5b94c0
// 0053b891  6890587a00           push 0x7a5890
// 0053b896  56                   push esi
// 0053b897  e824d80700           call 0x5b90c0
// 0053b89c  6a00                 push 0
// 0053b89e  6890695300           push 0x536990
// 0053b8a3  56                   push esi
// 0053b8a4  e8e7d80700           call 0x5b9190
// 0053b8a9  6afd                 push -3
// 0053b8ab  56                   push esi
// 0053b8ac  e80fdc0700           call 0x5b94c0
// 0053b8b1  83c440               add esp, 0x40
// 0053b8b4  6888587a00           push 0x7a5888
// 0053b8b9  56                   push esi
// 0053b8ba  e801d80700           call 0x5b90c0
// 0053b8bf  6a00                 push 0
// 0053b8c1  6850885300           push 0x538850
// 0053b8c6  56                   push esi
// 0053b8c7  e8c4d80700           call 0x5b9190
// 0053b8cc  6afd                 push -3
// 0053b8ce  56                   push esi
// 0053b8cf  e8ecdb0700           call 0x5b94c0
// 0053b8d4  6874587a00           push 0x7a5874
// 0053b8d9  56                   push esi
// 0053b8da  e8e1d70700           call 0x5b90c0
// 0053b8df  6a00                 push 0
// 0053b8e1  6870b75300           push 0x53b770
// 0053b8e6  56                   push esi
// 0053b8e7  e8a4d80700           call 0x5b9190
// 0053b8ec  6afd                 push -3
// 0053b8ee  56                   push esi
// 0053b8ef  e8ccdb0700           call 0x5b94c0
// 0053b8f4  6afe                 push -2
// 0053b8f6  56                   push esi
// 0053b8f7  e864d10700           call 0x5b8a60
// 0053b8fc  83c440               add esp, 0x40
// 0053b8ff  5e                   pop esi
// 0053b900  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?registerClass@?$Bridge@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@SAXPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
