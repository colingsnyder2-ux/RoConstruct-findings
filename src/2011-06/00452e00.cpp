// roc 2011-06 00452e00  unit: RBX::CRenderSettings::W4AntialiasingMode::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00452e00
//
// 00452e00  56                   push esi
// 00452e01  6a08                 push 8
// 00452e03  8bf1                 mov esi, ecx
// 00452e05  e854723b00           call 0x80a05e
// 00452e0a  83c404               add esp, 4
// 00452e0d  85c0                 test eax, eax
// 00452e0f  740e                 je 0x452e1f
// 00452e11  c7003ccca600         mov dword ptr [eax], 0xa6cc3c
// 00452e17  8b4e04               mov ecx, dword ptr [esi + 4]
// 00452e1a  894804               mov dword ptr [eax + 4], ecx
// 00452e1d  5e                   pop esi
// 00452e1e  c3                   ret 
// 00452e1f  33c0                 xor eax, eax
// 00452e21  5e                   pop esi
// 00452e22  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
