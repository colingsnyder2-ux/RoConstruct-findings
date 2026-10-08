// roc 2010-06 0060aa60  unit: RBX::ScriptContext  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060aa60
//
// 0060aa60  a1902abe00           mov eax, dword ptr [0xbe2a90]
// 0060aa65  56                   push esi
// 0060aa66  8b742408             mov esi, dword ptr [esp + 8]
// 0060aa6a  57                   push edi
// 0060aa6b  50                   push eax
// 0060aa6c  6a02                 push 2
// 0060aa6e  56                   push esi
// 0060aa6f  e89c831100           call 0x722e10
// 0060aa74  8b0d902abe00         mov ecx, dword ptr [0xbe2a90]
// 0060aa7a  51                   push ecx
// 0060aa7b  6a01                 push 1
// 0060aa7d  56                   push esi
// 0060aa7e  8bf8                 mov edi, eax
// 0060aa80  e88b831100           call 0x722e10
// 0060aa85  83c418               add esp, 0x18
// 0060aa88  57                   push edi
// 0060aa89  8bc8                 mov ecx, eax
// 0060aa8b  e80007fcff           call 0x5cb190
// 0060aa90  0fb6d0               movzx edx, al
// 0060aa93  52                   push edx
// 0060aa94  56                   push esi
// 0060aa95  e8666c1100           call 0x721700
// 0060aa9a  83c408               add esp, 8
// 0060aa9d  5f                   pop edi
// 0060aa9e  b801000000           mov eax, 1
// 0060aaa3  5e                   pop esi
// 0060aaa4  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_eq@?$Bridge@Vconnection@signals@boost@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
