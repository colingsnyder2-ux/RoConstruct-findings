// roc 2009-12 00426a40  unit: boost::any::H::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00426a40
//
// 00426a40  56                   push esi
// 00426a41  6a08                 push 8
// 00426a43  8bf1                 mov esi, ecx
// 00426a45  e816ce3c00           call 0x7f3860
// 00426a4a  83c404               add esp, 4
// 00426a4d  85c0                 test eax, eax
// 00426a4f  740e                 je 0x426a5f
// 00426a51  c70090399a00         mov dword ptr [eax], 0x9a3990
// 00426a57  8b4e04               mov ecx, dword ptr [esi + 4]
// 00426a5a  894804               mov dword ptr [eax + 4], ecx
// 00426a5d  5e                   pop esi
// 00426a5e  c3                   ret 
// 00426a5f  33c0                 xor eax, eax
// 00426a61  5e                   pop esi
// 00426a62  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
