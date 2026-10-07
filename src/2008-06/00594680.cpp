// roc 2008-06 00594680  unit: RBX::Lua::VFunctionRef::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00594680
//
// 00594680  6aff                 push -1
// 00594682  683bf47b00           push 0x7bf43b
// 00594687  64a100000000         mov eax, dword ptr fs:[0]
// 0059468d  50                   push eax
// 0059468e  64892500000000       mov dword ptr fs:[0], esp
// 00594695  51                   push ecx
// 00594696  56                   push esi
// 00594697  6a28                 push 0x28
// 00594699  8bf1                 mov esi, ecx
// 0059469b  e880c21000           call 0x6a0920
// 005946a0  83c404               add esp, 4
// 005946a3  89442404             mov dword ptr [esp + 4], eax
// 005946a7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005946af  85c0                 test eax, eax
// 005946b1  741b                 je 0x5946ce
// 005946b3  83c604               add esi, 4
// 005946b6  56                   push esi
// 005946b7  8bc8                 mov ecx, eax
// 005946b9  e8b2feffff           call 0x594570
// 005946be  5e                   pop esi
// 005946bf  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005946c3  64890d00000000       mov dword ptr fs:[0], ecx
// 005946ca  83c410               add esp, 0x10
// 005946cd  c3                   ret 
// 005946ce  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005946d2  33c0                 xor eax, eax
// 005946d4  5e                   pop esi
// 005946d5  64890d00000000       mov dword ptr fs:[0], ecx
// 005946dc  83c410               add esp, 0x10
// 005946df  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@VFunctionRef@Lua@RBX@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
