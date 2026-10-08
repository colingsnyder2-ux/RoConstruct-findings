// roc 2008-06 005ed140  unit: RBX::Controller::W4InputType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ed140
//
// 005ed140  56                   push esi
// 005ed141  6a08                 push 8
// 005ed143  8bf1                 mov esi, ecx
// 005ed145  e8d6370b00           call 0x6a0920
// 005ed14a  83c404               add esp, 4
// 005ed14d  85c0                 test eax, eax
// 005ed14f  740e                 je 0x5ed15f
// 005ed151  c700f4fc8300         mov dword ptr [eax], 0x83fcf4
// 005ed157  8b4e04               mov ecx, dword ptr [esi + 4]
// 005ed15a  894804               mov dword ptr [eax + 4], ecx
// 005ed15d  5e                   pop esi
// 005ed15e  c3                   ret 
// 005ed15f  33c0                 xor eax, eax
// 005ed161  5e                   pop esi
// 005ed162  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
