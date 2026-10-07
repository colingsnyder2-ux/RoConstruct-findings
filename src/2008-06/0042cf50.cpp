// roc 2008-06 0042cf50  unit: boost::any::M::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042cf50
//
// 0042cf50  56                   push esi
// 0042cf51  6a08                 push 8
// 0042cf53  8bf1                 mov esi, ecx
// 0042cf55  e8c6392700           call 0x6a0920
// 0042cf5a  83c404               add esp, 4
// 0042cf5d  85c0                 test eax, eax
// 0042cf5f  740e                 je 0x42cf6f
// 0042cf61  c700bc068100         mov dword ptr [eax], 0x8106bc
// 0042cf67  d94604               fld dword ptr [esi + 4]
// 0042cf6a  d95804               fstp dword ptr [eax + 4]
// 0042cf6d  5e                   pop esi
// 0042cf6e  c3                   ret 
// 0042cf6f  33c0                 xor eax, eax
// 0042cf71  5e                   pop esi
// 0042cf72  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@M@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
