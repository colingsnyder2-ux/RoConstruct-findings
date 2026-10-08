// roc 2011-06 005c9160  unit: RBX::GameSettings::W4UploadSetting::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c9160
//
// 005c9160  56                   push esi
// 005c9161  6a08                 push 8
// 005c9163  8bf1                 mov esi, ecx
// 005c9165  e8f40e2400           call 0x80a05e
// 005c916a  83c404               add esp, 4
// 005c916d  85c0                 test eax, eax
// 005c916f  740e                 je 0x5c917f
// 005c9171  c70050f2a800         mov dword ptr [eax], 0xa8f250
// 005c9177  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c917a  894804               mov dword ptr [eax + 4], ecx
// 005c917d  5e                   pop esi
// 005c917e  c3                   ret 
// 005c917f  33c0                 xor eax, eax
// 005c9181  5e                   pop esi
// 005c9182  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
