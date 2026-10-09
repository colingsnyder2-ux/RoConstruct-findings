// roc 2009-12 006a1620  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a1620
//
// 006a1620  56                   push esi
// 006a1621  8b742408             mov esi, dword ptr [esp + 8]
// 006a1625  57                   push edi
// 006a1626  6a00                 push 0
// 006a1628  6a02                 push 2
// 006a162a  56                   push esi
// 006a162b  e840910e00           call 0x78a770
// 006a1630  8bf8                 mov edi, eax
// 006a1632  a1742bb600           mov eax, dword ptr [0xb62b74]
// 006a1637  50                   push eax
// 006a1638  6a01                 push 1
// 006a163a  56                   push esi
// 006a163b  e820900e00           call 0x78a660
// 006a1640  56                   push esi
// 006a1641  57                   push edi
// 006a1642  50                   push eax
// 006a1643  e8083e0f00           call 0x795450
// 006a1648  83c424               add esp, 0x24
// 006a164b  5f                   pop edi
// 006a164c  5e                   pop esi
// 006a164d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
