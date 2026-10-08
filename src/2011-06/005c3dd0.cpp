// roc 2011-06 005c3dd0  unit: RBX::LegacyController::W4InputType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c3dd0
//
// 005c3dd0  56                   push esi
// 005c3dd1  6a08                 push 8
// 005c3dd3  8bf1                 mov esi, ecx
// 005c3dd5  e884622400           call 0x80a05e
// 005c3dda  83c404               add esp, 4
// 005c3ddd  85c0                 test eax, eax
// 005c3ddf  740e                 je 0x5c3def
// 005c3de1  c700b0eca800         mov dword ptr [eax], 0xa8ecb0
// 005c3de7  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c3dea  894804               mov dword ptr [eax + 4], ecx
// 005c3ded  5e                   pop esi
// 005c3dee  c3                   ret 
// 005c3def  33c0                 xor eax, eax
// 005c3df1  5e                   pop esi
// 005c3df2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
