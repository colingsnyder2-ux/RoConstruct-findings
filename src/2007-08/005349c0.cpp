// roc 2007-08 005349c0  unit: RBX::Lua::VFunctionRef::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005349c0
//
// 005349c0  6aff                 push -1
// 005349c2  681bb67500           push 0x75b61b
// 005349c7  64a100000000         mov eax, dword ptr fs:[0]
// 005349cd  50                   push eax
// 005349ce  64892500000000       mov dword ptr fs:[0], esp
// 005349d5  51                   push ecx
// 005349d6  56                   push esi
// 005349d7  6a28                 push 0x28
// 005349d9  8bf1                 mov esi, ecx
// 005349db  e816b50f00           call 0x62fef6
// 005349e0  83c404               add esp, 4
// 005349e3  89442404             mov dword ptr [esp + 4], eax
// 005349e7  85c0                 test eax, eax
// 005349e9  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005349f1  741b                 je 0x534a0e
// 005349f3  83c604               add esi, 4
// 005349f6  56                   push esi
// 005349f7  8bc8                 mov ecx, eax
// 005349f9  e862ffffff           call 0x534960
// 005349fe  5e                   pop esi
// 005349ff  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00534a03  64890d00000000       mov dword ptr fs:[0], ecx
// 00534a0a  83c410               add esp, 0x10
// 00534a0d  c3                   ret 
// 00534a0e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00534a12  33c0                 xor eax, eax
// 00534a14  5e                   pop esi
// 00534a15  64890d00000000       mov dword ptr fs:[0], ecx
// 00534a1c  83c410               add esp, 0x10
// 00534a1f  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@VFunctionRef@Lua@RBX@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
