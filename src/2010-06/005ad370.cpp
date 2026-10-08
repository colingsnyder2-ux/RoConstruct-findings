// roc 2010-06 005ad370  unit: RBX::Controller::W4Button::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005ad370
//
// 005ad370  56                   push esi
// 005ad371  6a08                 push 8
// 005ad373  8bf1                 mov esi, ecx
// 005ad375  e826a61f00           call 0x7a79a0
// 005ad37a  83c404               add esp, 4
// 005ad37d  85c0                 test eax, eax
// 005ad37f  740e                 je 0x5ad38f
// 005ad381  c700e4aaa200         mov dword ptr [eax], 0xa2aae4
// 005ad387  8b4e04               mov ecx, dword ptr [esi + 4]
// 005ad38a  894804               mov dword ptr [eax + 4], ecx
// 005ad38d  5e                   pop esi
// 005ad38e  c3                   ret 
// 005ad38f  33c0                 xor eax, eax
// 005ad391  5e                   pop esi
// 005ad392  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
