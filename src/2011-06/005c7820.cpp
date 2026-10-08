// roc 2011-06 005c7820  unit: RBX::SkateboardPlatform::W4MoveState::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c7820
//
// 005c7820  56                   push esi
// 005c7821  6a08                 push 8
// 005c7823  8bf1                 mov esi, ecx
// 005c7825  e834282400           call 0x80a05e
// 005c782a  83c404               add esp, 4
// 005c782d  85c0                 test eax, eax
// 005c782f  740e                 je 0x5c783f
// 005c7831  c700a0f0a800         mov dword ptr [eax], 0xa8f0a0
// 005c7837  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c783a  894804               mov dword ptr [eax + 4], ecx
// 005c783d  5e                   pop esi
// 005c783e  c3                   ret 
// 005c783f  33c0                 xor eax, eax
// 005c7841  5e                   pop esi
// 005c7842  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
