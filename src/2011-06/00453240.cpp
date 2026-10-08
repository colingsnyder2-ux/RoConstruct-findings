// roc 2011-06 00453240  unit: RBX::CRenderSettings::W4QualityLevel::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00453240
//
// 00453240  56                   push esi
// 00453241  6a08                 push 8
// 00453243  8bf1                 mov esi, ecx
// 00453245  e8146e3b00           call 0x80a05e
// 0045324a  83c404               add esp, 4
// 0045324d  85c0                 test eax, eax
// 0045324f  740e                 je 0x45325f
// 00453251  c7009ccca600         mov dword ptr [eax], 0xa6cc9c
// 00453257  8b4e04               mov ecx, dword ptr [esi + 4]
// 0045325a  894804               mov dword ptr [eax + 4], ecx
// 0045325d  5e                   pop esi
// 0045325e  c3                   ret 
// 0045325f  33c0                 xor eax, eax
// 00453261  5e                   pop esi
// 00453262  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
