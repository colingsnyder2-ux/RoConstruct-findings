// roc 2010-06 005b0da0  unit: RBX::PrismInstance::W4NumSidesEnum::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b0da0
//
// 005b0da0  56                   push esi
// 005b0da1  6a08                 push 8
// 005b0da3  8bf1                 mov esi, ecx
// 005b0da5  e8f66b1f00           call 0x7a79a0
// 005b0daa  83c404               add esp, 4
// 005b0dad  85c0                 test eax, eax
// 005b0daf  740e                 je 0x5b0dbf
// 005b0db1  c70074aea200         mov dword ptr [eax], 0xa2ae74
// 005b0db7  8b4e04               mov ecx, dword ptr [esi + 4]
// 005b0dba  894804               mov dword ptr [eax + 4], ecx
// 005b0dbd  5e                   pop esi
// 005b0dbe  c3                   ret 
// 005b0dbf  33c0                 xor eax, eax
// 005b0dc1  5e                   pop esi
// 005b0dc2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
