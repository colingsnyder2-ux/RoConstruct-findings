// roc 2007-03 0042e4d0  unit: seg_00420000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0042e4d0
//
// 0042e4d0  56                   push esi
// 0042e4d1  6a08                 push 8
// 0042e4d3  8bf1                 mov esi, ecx
// 0042e4d5  e82efc1e00           call 0x61e108
// 0042e4da  83c404               add esp, 4
// 0042e4dd  85c0                 test eax, eax
// 0042e4df  740e                 je 0x42e4ef
// 0042e4e1  c7002c987800         mov dword ptr [eax], 0x78982c
// 0042e4e7  d94604               fld dword ptr [esi + 4]
// 0042e4ea  d95804               fstp dword ptr [eax + 4]
// 0042e4ed  5e                   pop esi
// 0042e4ee  c3                   ret 
// 0042e4ef  33c0                 xor eax, eax
// 0042e4f1  5e                   pop esi
// 0042e4f2  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@M@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
