// roc 2011-06 005c3060  unit: RBX::TextService::W4XAlignment::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c3060
//
// 005c3060  56                   push esi
// 005c3061  6a08                 push 8
// 005c3063  8bf1                 mov esi, ecx
// 005c3065  e8f46f2400           call 0x80a05e
// 005c306a  83c404               add esp, 4
// 005c306d  85c0                 test eax, eax
// 005c306f  740e                 je 0x5c307f
// 005c3071  c700c0eba800         mov dword ptr [eax], 0xa8ebc0
// 005c3077  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c307a  894804               mov dword ptr [eax + 4], ecx
// 005c307d  5e                   pop esi
// 005c307e  c3                   ret 
// 005c307f  33c0                 xor eax, eax
// 005c3081  5e                   pop esi
// 005c3082  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
