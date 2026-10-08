// roc 2011-06 005c7010  unit: RBX::PrismInstance::W4NumSidesEnum::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c7010
//
// 005c7010  56                   push esi
// 005c7011  6a08                 push 8
// 005c7013  8bf1                 mov esi, ecx
// 005c7015  e844302400           call 0x80a05e
// 005c701a  83c404               add esp, 4
// 005c701d  85c0                 test eax, eax
// 005c701f  740e                 je 0x5c702f
// 005c7021  c70010f0a800         mov dword ptr [eax], 0xa8f010
// 005c7027  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c702a  894804               mov dword ptr [eax + 4], ecx
// 005c702d  5e                   pop esi
// 005c702e  c3                   ret 
// 005c702f  33c0                 xor eax, eax
// 005c7031  5e                   pop esi
// 005c7032  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
