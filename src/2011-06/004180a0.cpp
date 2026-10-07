// roc 2011-06 004180a0  unit: boost::any::M::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004180a0
//
// 004180a0  56                   push esi
// 004180a1  6a08                 push 8
// 004180a3  8bf1                 mov esi, ecx
// 004180a5  e8b41f3f00           call 0x80a05e
// 004180aa  83c404               add esp, 4
// 004180ad  85c0                 test eax, eax
// 004180af  740e                 je 0x4180bf
// 004180b1  c700b0e9a500         mov dword ptr [eax], 0xa5e9b0
// 004180b7  d94604               fld dword ptr [esi + 4]
// 004180ba  d95804               fstp dword ptr [eax + 4]
// 004180bd  5e                   pop esi
// 004180be  c3                   ret 
// 004180bf  33c0                 xor eax, eax
// 004180c1  5e                   pop esi
// 004180c2  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@M@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
