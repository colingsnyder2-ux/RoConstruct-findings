// roc 2010-06 005ae320  unit: RBX::PlayerCamera::W4CameraType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005ae320
//
// 005ae320  56                   push esi
// 005ae321  6a08                 push 8
// 005ae323  8bf1                 mov esi, ecx
// 005ae325  e876961f00           call 0x7a79a0
// 005ae32a  83c404               add esp, 4
// 005ae32d  85c0                 test eax, eax
// 005ae32f  740e                 je 0x5ae33f
// 005ae331  c700d4aba200         mov dword ptr [eax], 0xa2abd4
// 005ae337  8b4e04               mov ecx, dword ptr [esi + 4]
// 005ae33a  894804               mov dword ptr [eax + 4], ecx
// 005ae33d  5e                   pop esi
// 005ae33e  c3                   ret 
// 005ae33f  33c0                 xor eax, eax
// 005ae341  5e                   pop esi
// 005ae342  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
