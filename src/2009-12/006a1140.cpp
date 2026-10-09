// roc 2009-12 006a1140  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a1140
//
// 006a1140  56                   push esi
// 006a1141  8b742408             mov esi, dword ptr [esp + 8]
// 006a1145  57                   push edi
// 006a1146  6a00                 push 0
// 006a1148  6a02                 push 2
// 006a114a  56                   push esi
// 006a114b  e820960e00           call 0x78a770
// 006a1150  8bf8                 mov edi, eax
// 006a1152  a1502bb600           mov eax, dword ptr [0xb62b50]
// 006a1157  50                   push eax
// 006a1158  6a01                 push 1
// 006a115a  56                   push esi
// 006a115b  e800950e00           call 0x78a660
// 006a1160  56                   push esi
// 006a1161  57                   push edi
// 006a1162  50                   push eax
// 006a1163  e8481b0f00           call 0x792cb0
// 006a1168  83c424               add esp, 0x24
// 006a116b  5f                   pop edi
// 006a116c  5e                   pop esi
// 006a116d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
