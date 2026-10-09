// roc 2009-12 00446680  unit: RBX::CRenderSettings::W4BevelMode::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00446680
//
// 00446680  56                   push esi
// 00446681  6a08                 push 8
// 00446683  8bf1                 mov esi, ecx
// 00446685  e8d6d13a00           call 0x7f3860
// 0044668a  83c404               add esp, 4
// 0044668d  85c0                 test eax, eax
// 0044668f  740e                 je 0x44669f
// 00446691  c700d8a39a00         mov dword ptr [eax], 0x9aa3d8
// 00446697  8b4e04               mov ecx, dword ptr [esi + 4]
// 0044669a  894804               mov dword ptr [eax + 4], ecx
// 0044669d  5e                   pop esi
// 0044669e  c3                   ret 
// 0044669f  33c0                 xor eax, eax
// 004466a1  5e                   pop esi
// 004466a2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
