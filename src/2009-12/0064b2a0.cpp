// roc 2009-12 0064b2a0  unit: RBX::LegacyController::W4InputType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0064b2a0
//
// 0064b2a0  56                   push esi
// 0064b2a1  6a08                 push 8
// 0064b2a3  8bf1                 mov esi, ecx
// 0064b2a5  e8b6851a00           call 0x7f3860
// 0064b2aa  83c404               add esp, 4
// 0064b2ad  85c0                 test eax, eax
// 0064b2af  740e                 je 0x64b2bf
// 0064b2b1  c7006ccc9c00         mov dword ptr [eax], 0x9ccc6c
// 0064b2b7  8b4e04               mov ecx, dword ptr [esi + 4]
// 0064b2ba  894804               mov dword ptr [eax + 4], ecx
// 0064b2bd  5e                   pop esi
// 0064b2be  c3                   ret 
// 0064b2bf  33c0                 xor eax, eax
// 0064b2c1  5e                   pop esi
// 0064b2c2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
