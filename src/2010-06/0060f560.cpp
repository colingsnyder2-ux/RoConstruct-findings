// roc 2010-06 0060f560  unit: RBX::Lua::VLiveThreadRef::?$sp_counted_impl_p  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060f560
//
// 0060f560  a18c2abe00           mov eax, dword ptr [0xbe2a8c]
// 0060f565  56                   push esi
// 0060f566  8b742408             mov esi, dword ptr [esp + 8]
// 0060f56a  57                   push edi
// 0060f56b  50                   push eax
// 0060f56c  6a02                 push 2
// 0060f56e  56                   push esi
// 0060f56f  e89c381100           call 0x722e10
// 0060f574  8b0d8c2abe00         mov ecx, dword ptr [0xbe2a8c]
// 0060f57a  51                   push ecx
// 0060f57b  6a01                 push 1
// 0060f57d  56                   push esi
// 0060f57e  8bf8                 mov edi, eax
// 0060f580  e88b381100           call 0x722e10
// 0060f585  83c418               add esp, 0x18
// 0060f588  57                   push edi
// 0060f589  8bc8                 mov ecx, eax
// 0060f58b  e8c0fbffff           call 0x60f150
// 0060f590  0fb6d0               movzx edx, al
// 0060f593  52                   push edx
// 0060f594  56                   push esi
// 0060f595  e866211100           call 0x721700
// 0060f59a  83c408               add esp, 8
// 0060f59d  5f                   pop edi
// 0060f59e  b801000000           mov eax, 1
// 0060f5a3  5e                   pop esi
// 0060f5a4  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_eq@?$Bridge@Vconnection@signals@boost@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
