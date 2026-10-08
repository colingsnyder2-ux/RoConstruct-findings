// roc 2010-06 004d1050  unit: RBX::NetworkSettings::W4PhysicsReceiveMethod::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004d1050
//
// 004d1050  56                   push esi
// 004d1051  6a08                 push 8
// 004d1053  8bf1                 mov esi, ecx
// 004d1055  e846692d00           call 0x7a79a0
// 004d105a  83c404               add esp, 4
// 004d105d  85c0                 test eax, eax
// 004d105f  740e                 je 0x4d106f
// 004d1061  c7003498a100         mov dword ptr [eax], 0xa19834
// 004d1067  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d106a  894804               mov dword ptr [eax + 4], ecx
// 004d106d  5e                   pop esi
// 004d106e  c3                   ret 
// 004d106f  33c0                 xor eax, eax
// 004d1071  5e                   pop esi
// 004d1072  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
