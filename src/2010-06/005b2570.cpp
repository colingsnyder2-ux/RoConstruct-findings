// roc 2010-06 005b2570  unit: RBX::BaseScript::W4ScriptExecutionLocation::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b2570
//
// 005b2570  56                   push esi
// 005b2571  6a08                 push 8
// 005b2573  8bf1                 mov esi, ecx
// 005b2575  e826541f00           call 0x7a79a0
// 005b257a  83c404               add esp, 4
// 005b257d  85c0                 test eax, eax
// 005b257f  740e                 je 0x5b258f
// 005b2581  c700f4afa200         mov dword ptr [eax], 0xa2aff4
// 005b2587  8b4e04               mov ecx, dword ptr [esi + 4]
// 005b258a  894804               mov dword ptr [eax + 4], ecx
// 005b258d  5e                   pop esi
// 005b258e  c3                   ret 
// 005b258f  33c0                 xor eax, eax
// 005b2591  5e                   pop esi
// 005b2592  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
