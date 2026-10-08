// roc 2011-06 005c8eb0  unit: RBX::GameSettings::W4VideoQuality::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c8eb0
//
// 005c8eb0  56                   push esi
// 005c8eb1  6a08                 push 8
// 005c8eb3  8bf1                 mov esi, ecx
// 005c8eb5  e8a4112400           call 0x80a05e
// 005c8eba  83c404               add esp, 4
// 005c8ebd  85c0                 test eax, eax
// 005c8ebf  740e                 je 0x5c8ecf
// 005c8ec1  c70020f2a800         mov dword ptr [eax], 0xa8f220
// 005c8ec7  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c8eca  894804               mov dword ptr [eax + 4], ecx
// 005c8ecd  5e                   pop esi
// 005c8ece  c3                   ret 
// 005c8ecf  33c0                 xor eax, eax
// 005c8ed1  5e                   pop esi
// 005c8ed2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
