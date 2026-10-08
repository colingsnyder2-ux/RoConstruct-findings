// roc 2010-06 0060af20  unit: RBX::ScriptContext  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060af20
//
// 0060af20  a16c2abe00           mov eax, dword ptr [0xbe2a6c]
// 0060af25  56                   push esi
// 0060af26  8b742408             mov esi, dword ptr [esp + 8]
// 0060af2a  57                   push edi
// 0060af2b  50                   push eax
// 0060af2c  6a02                 push 2
// 0060af2e  56                   push esi
// 0060af2f  e8dc7e1100           call 0x722e10
// 0060af34  8b0d6c2abe00         mov ecx, dword ptr [0xbe2a6c]
// 0060af3a  51                   push ecx
// 0060af3b  6a01                 push 1
// 0060af3d  56                   push esi
// 0060af3e  8bf8                 mov edi, eax
// 0060af40  e8cb7e1100           call 0x722e10
// 0060af45  8b10                 mov edx, dword ptr [eax]
// 0060af47  33c0                 xor eax, eax
// 0060af49  3b17                 cmp edx, dword ptr [edi]
// 0060af4b  0f94c0               sete al
// 0060af4e  50                   push eax
// 0060af4f  56                   push esi
// 0060af50  e8ab671100           call 0x721700
// 0060af55  83c420               add esp, 0x20
// 0060af58  5f                   pop edi
// 0060af59  b801000000           mov eax, 1
// 0060af5e  5e                   pop esi
// 0060af5f  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_eq@?$Bridge@VBrickColor@RBX@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
