// roc 2009-12 00426940  unit: boost::any::M::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00426940
//
// 00426940  56                   push esi
// 00426941  6a08                 push 8
// 00426943  8bf1                 mov esi, ecx
// 00426945  e816cf3c00           call 0x7f3860
// 0042694a  83c404               add esp, 4
// 0042694d  85c0                 test eax, eax
// 0042694f  740e                 je 0x42695f
// 00426951  c70070399a00         mov dword ptr [eax], 0x9a3970
// 00426957  d94604               fld dword ptr [esi + 4]
// 0042695a  d95804               fstp dword ptr [eax + 4]
// 0042695d  5e                   pop esi
// 0042695e  c3                   ret 
// 0042695f  33c0                 xor eax, eax
// 00426961  5e                   pop esi
// 00426962  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@M@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
