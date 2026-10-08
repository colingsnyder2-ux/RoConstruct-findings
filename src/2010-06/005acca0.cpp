// roc 2010-06 005acca0  unit: RBX::Action::W4ActionType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005acca0
//
// 005acca0  56                   push esi
// 005acca1  6a08                 push 8
// 005acca3  8bf1                 mov esi, ecx
// 005acca5  e8f6ac1f00           call 0x7a79a0
// 005accaa  83c404               add esp, 4
// 005accad  85c0                 test eax, eax
// 005accaf  740e                 je 0x5accbf
// 005accb1  c70084aaa200         mov dword ptr [eax], 0xa2aa84
// 005accb7  8b4e04               mov ecx, dword ptr [esi + 4]
// 005accba  894804               mov dword ptr [eax + 4], ecx
// 005accbd  5e                   pop esi
// 005accbe  c3                   ret 
// 005accbf  33c0                 xor eax, eax
// 005accc1  5e                   pop esi
// 005accc2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
