// roc 2011-06 005b9de0  unit: RBX::W4NormalId::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005b9de0
//
// 005b9de0  56                   push esi
// 005b9de1  6a08                 push 8
// 005b9de3  8bf1                 mov esi, ecx
// 005b9de5  e874022500           call 0x80a05e
// 005b9dea  83c404               add esp, 4
// 005b9ded  85c0                 test eax, eax
// 005b9def  740e                 je 0x5b9dff
// 005b9df1  c70058e7a800         mov dword ptr [eax], 0xa8e758
// 005b9df7  8b4e04               mov ecx, dword ptr [esi + 4]
// 005b9dfa  894804               mov dword ptr [eax + 4], ecx
// 005b9dfd  5e                   pop esi
// 005b9dfe  c3                   ret 
// 005b9dff  33c0                 xor eax, eax
// 005b9e01  5e                   pop esi
// 005b9e02  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
