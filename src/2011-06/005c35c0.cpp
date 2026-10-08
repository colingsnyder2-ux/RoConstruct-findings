// roc 2011-06 005c35c0  unit: RBX::TextService::W4FontSize::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c35c0
//
// 005c35c0  56                   push esi
// 005c35c1  6a08                 push 8
// 005c35c3  8bf1                 mov esi, ecx
// 005c35c5  e8946a2400           call 0x80a05e
// 005c35ca  83c404               add esp, 4
// 005c35cd  85c0                 test eax, eax
// 005c35cf  740e                 je 0x5c35df
// 005c35d1  c70020eca800         mov dword ptr [eax], 0xa8ec20
// 005c35d7  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c35da  894804               mov dword ptr [eax + 4], ecx
// 005c35dd  5e                   pop esi
// 005c35de  c3                   ret 
// 005c35df  33c0                 xor eax, eax
// 005c35e1  5e                   pop esi
// 005c35e2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
