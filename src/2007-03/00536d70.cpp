// roc 2007-03 00536d70  unit: seg_00530000  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00536d70
//
// 00536d70  6aff                 push -1
// 00536d72  686bc37500           push 0x75c36b
// 00536d77  64a100000000         mov eax, dword ptr fs:[0]
// 00536d7d  50                   push eax
// 00536d7e  64892500000000       mov dword ptr fs:[0], esp
// 00536d85  51                   push ecx
// 00536d86  56                   push esi
// 00536d87  6a20                 push 0x20
// 00536d89  8bf1                 mov esi, ecx
// 00536d8b  e878730e00           call 0x61e108
// 00536d90  83c404               add esp, 4
// 00536d93  89442404             mov dword ptr [esp + 4], eax
// 00536d97  85c0                 test eax, eax
// 00536d99  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00536da1  741b                 je 0x536dbe
// 00536da3  83c604               add esi, 4
// 00536da6  56                   push esi
// 00536da7  8bc8                 mov ecx, eax
// 00536da9  e862ffffff           call 0x536d10
// 00536dae  5e                   pop esi
// 00536daf  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00536db3  64890d00000000       mov dword ptr fs:[0], ecx
// 00536dba  83c410               add esp, 0x10
// 00536dbd  c3                   ret 
// 00536dbe  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00536dc2  33c0                 xor eax, eax
// 00536dc4  5e                   pop esi
// 00536dc5  64890d00000000       mov dword ptr fs:[0], ecx
// 00536dcc  83c410               add esp, 0x10
// 00536dcf  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
