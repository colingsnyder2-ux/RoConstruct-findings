// roc 2011-06 005c6ab0  unit: RBX::SocialService::W4StuffType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c6ab0
//
// 005c6ab0  56                   push esi
// 005c6ab1  6a08                 push 8
// 005c6ab3  8bf1                 mov esi, ecx
// 005c6ab5  e8a4352400           call 0x80a05e
// 005c6aba  83c404               add esp, 4
// 005c6abd  85c0                 test eax, eax
// 005c6abf  740e                 je 0x5c6acf
// 005c6ac1  c700b0efa800         mov dword ptr [eax], 0xa8efb0
// 005c6ac7  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c6aca  894804               mov dword ptr [eax + 4], ecx
// 005c6acd  5e                   pop esi
// 005c6ace  c3                   ret 
// 005c6acf  33c0                 xor eax, eax
// 005c6ad1  5e                   pop esi
// 005c6ad2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
