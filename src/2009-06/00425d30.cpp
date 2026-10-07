// roc 2009-06 00425d30  unit: boost::any::M::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00425d30
//
// 00425d30  56                   push esi
// 00425d31  6a08                 push 8
// 00425d33  8bf1                 mov esi, ecx
// 00425d35  e8fe2c2f00           call 0x718a38
// 00425d3a  83c404               add esp, 4
// 00425d3d  85c0                 test eax, eax
// 00425d3f  740e                 je 0x425d4f
// 00425d41  c700900c8b00         mov dword ptr [eax], 0x8b0c90
// 00425d47  d94604               fld dword ptr [esi + 4]
// 00425d4a  d95804               fstp dword ptr [eax + 4]
// 00425d4d  5e                   pop esi
// 00425d4e  c3                   ret 
// 00425d4f  33c0                 xor eax, eax
// 00425d51  5e                   pop esi
// 00425d52  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@M@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
