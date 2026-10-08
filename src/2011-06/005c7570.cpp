// roc 2011-06 005c7570  unit: RBX::Handles::W4VisualStyle::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c7570
//
// 005c7570  56                   push esi
// 005c7571  6a08                 push 8
// 005c7573  8bf1                 mov esi, ecx
// 005c7575  e8e42a2400           call 0x80a05e
// 005c757a  83c404               add esp, 4
// 005c757d  85c0                 test eax, eax
// 005c757f  740e                 je 0x5c758f
// 005c7581  c70070f0a800         mov dword ptr [eax], 0xa8f070
// 005c7587  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c758a  894804               mov dword ptr [eax + 4], ecx
// 005c758d  5e                   pop esi
// 005c758e  c3                   ret 
// 005c758f  33c0                 xor eax, eax
// 005c7591  5e                   pop esi
// 005c7592  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
