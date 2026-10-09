// roc 2009-12 006a1080  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a1080
//
// 006a1080  56                   push esi
// 006a1081  8b742408             mov esi, dword ptr [esp + 8]
// 006a1085  57                   push edi
// 006a1086  6a00                 push 0
// 006a1088  6a02                 push 2
// 006a108a  56                   push esi
// 006a108b  e8e0960e00           call 0x78a770
// 006a1090  8bf8                 mov edi, eax
// 006a1092  a1602bb600           mov eax, dword ptr [0xb62b60]
// 006a1097  50                   push eax
// 006a1098  6a01                 push 1
// 006a109a  56                   push esi
// 006a109b  e8c0950e00           call 0x78a660
// 006a10a0  56                   push esi
// 006a10a1  57                   push edi
// 006a10a2  50                   push eax
// 006a10a3  e838f50e00           call 0x7905e0
// 006a10a8  83c424               add esp, 0x24
// 006a10ab  5f                   pop edi
// 006a10ac  5e                   pop esi
// 006a10ad  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
