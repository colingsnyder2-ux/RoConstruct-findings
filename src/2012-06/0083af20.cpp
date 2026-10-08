// roc 2012-06 0083af20  unit: seg_00830000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0083af20
//
// 0083af20  a1c813de00           mov eax, dword ptr [0xde13c8]
// 0083af25  56                   push esi
// 0083af26  8b742408             mov esi, dword ptr [esp + 8]
// 0083af2a  57                   push edi
// 0083af2b  50                   push eax
// 0083af2c  6a02                 push 2
// 0083af2e  56                   push esi
// 0083af2f  e8dc88ffff           call 0x833810
// 0083af34  8b0dc813de00         mov ecx, dword ptr [0xde13c8]
// 0083af3a  51                   push ecx
// 0083af3b  6a01                 push 1
// 0083af3d  56                   push esi
// 0083af3e  8bf8                 mov edi, eax
// 0083af40  e8cb88ffff           call 0x833810
// 0083af45  8b10                 mov edx, dword ptr [eax]
// 0083af47  33c0                 xor eax, eax
// 0083af49  3b17                 cmp edx, dword ptr [edi]
// 0083af4b  0f94c0               sete al
// 0083af4e  50                   push eax
// 0083af4f  56                   push esi
// 0083af50  e84b73ffff           call 0x8322a0
// 0083af55  83c420               add esp, 0x20
// 0083af58  5f                   pop edi
// 0083af59  b801000000           mov eax, 1
// 0083af5e  5e                   pop esi
// 0083af5f  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_eq@?$Bridge@VBrickColor@RBX@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
