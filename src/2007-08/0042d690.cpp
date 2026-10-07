// roc 2007-08 0042d690  unit: boost::any::M::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042d690
//
// 0042d690  56                   push esi
// 0042d691  6a08                 push 8
// 0042d693  8bf1                 mov esi, ecx
// 0042d695  e85c282000           call 0x62fef6
// 0042d69a  83c404               add esp, 4
// 0042d69d  85c0                 test eax, eax
// 0042d69f  740e                 je 0x42d6af
// 0042d6a1  c700eca57800         mov dword ptr [eax], 0x78a5ec
// 0042d6a7  d94604               fld dword ptr [esi + 4]
// 0042d6aa  d95804               fstp dword ptr [eax + 4]
// 0042d6ad  5e                   pop esi
// 0042d6ae  c3                   ret 
// 0042d6af  33c0                 xor eax, eax
// 0042d6b1  5e                   pop esi
// 0042d6b2  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@M@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
