// roc 2010-06 00623d40  unit: RBX::Soundscape::W4ReverbType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00623d40
//
// 00623d40  56                   push esi
// 00623d41  6a08                 push 8
// 00623d43  8bf1                 mov esi, ecx
// 00623d45  e8563c1800           call 0x7a79a0
// 00623d4a  83c404               add esp, 4
// 00623d4d  85c0                 test eax, eax
// 00623d4f  740e                 je 0x623d5f
// 00623d51  c7007449a300         mov dword ptr [eax], 0xa34974
// 00623d57  8b4e04               mov ecx, dword ptr [esi + 4]
// 00623d5a  894804               mov dword ptr [eax + 4], ecx
// 00623d5d  5e                   pop esi
// 00623d5e  c3                   ret 
// 00623d5f  33c0                 xor eax, eax
// 00623d61  5e                   pop esi
// 00623d62  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
