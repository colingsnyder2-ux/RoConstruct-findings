// roc 2011-06 005c4df0  unit: RBX::W4KeywordFilterType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c4df0
//
// 005c4df0  56                   push esi
// 005c4df1  6a08                 push 8
// 005c4df3  8bf1                 mov esi, ecx
// 005c4df5  e864522400           call 0x80a05e
// 005c4dfa  83c404               add esp, 4
// 005c4dfd  85c0                 test eax, eax
// 005c4dff  740e                 je 0x5c4e0f
// 005c4e01  c700d0eda800         mov dword ptr [eax], 0xa8edd0
// 005c4e07  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c4e0a  894804               mov dword ptr [eax + 4], ecx
// 005c4e0d  5e                   pop esi
// 005c4e0e  c3                   ret 
// 005c4e0f  33c0                 xor eax, eax
// 005c4e11  5e                   pop esi
// 005c4e12  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
