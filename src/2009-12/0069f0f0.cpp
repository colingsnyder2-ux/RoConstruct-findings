// roc 2009-12 0069f0f0  unit: std::strstream  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0069f0f0
//
// 0069f0f0  a1842bb600           mov eax, dword ptr [0xb62b84]
// 0069f0f5  56                   push esi
// 0069f0f6  8b742408             mov esi, dword ptr [esp + 8]
// 0069f0fa  57                   push edi
// 0069f0fb  50                   push eax
// 0069f0fc  6a02                 push 2
// 0069f0fe  56                   push esi
// 0069f0ff  e85cb50e00           call 0x78a660
// 0069f104  8b0d842bb600         mov ecx, dword ptr [0xb62b84]
// 0069f10a  51                   push ecx
// 0069f10b  6a01                 push 1
// 0069f10d  56                   push esi
// 0069f10e  8bf8                 mov edi, eax
// 0069f110  e84bb50e00           call 0x78a660
// 0069f115  83c418               add esp, 0x18
// 0069f118  57                   push edi
// 0069f119  8bc8                 mov ecx, eax
// 0069f11b  e85053fcff           call 0x664470
// 0069f120  0fb6d0               movzx edx, al
// 0069f123  52                   push edx
// 0069f124  56                   push esi
// 0069f125  e8269e0e00           call 0x788f50
// 0069f12a  83c408               add esp, 8
// 0069f12d  5f                   pop edi
// 0069f12e  b801000000           mov eax, 1
// 0069f133  5e                   pop esi
// 0069f134  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_eq@?$Bridge@Vconnection@signals@boost@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
