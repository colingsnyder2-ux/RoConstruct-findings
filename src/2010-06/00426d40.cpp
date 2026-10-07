// roc 2010-06 00426d40  unit: boost::any::M::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00426d40
//
// 00426d40  56                   push esi
// 00426d41  6a08                 push 8
// 00426d43  8bf1                 mov esi, ecx
// 00426d45  e8560c3800           call 0x7a79a0
// 00426d4a  83c404               add esp, 4
// 00426d4d  85c0                 test eax, eax
// 00426d4f  740e                 je 0x426d5f
// 00426d51  c700c846a000         mov dword ptr [eax], 0xa046c8
// 00426d57  d94604               fld dword ptr [esi + 4]
// 00426d5a  d95804               fstp dword ptr [eax + 4]
// 00426d5d  5e                   pop esi
// 00426d5e  c3                   ret 
// 00426d5f  33c0                 xor eax, eax
// 00426d61  5e                   pop esi
// 00426d62  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@M@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
