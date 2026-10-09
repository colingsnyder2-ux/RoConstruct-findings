// roc 2009-12 00446ce0  unit: RBX::CRenderSettings::W4ShadowMode::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00446ce0
//
// 00446ce0  56                   push esi
// 00446ce1  6a08                 push 8
// 00446ce3  8bf1                 mov esi, ecx
// 00446ce5  e876cb3a00           call 0x7f3860
// 00446cea  83c404               add esp, 4
// 00446ced  85c0                 test eax, eax
// 00446cef  740e                 je 0x446cff
// 00446cf1  c70038a49a00         mov dword ptr [eax], 0x9aa438
// 00446cf7  8b4e04               mov ecx, dword ptr [esi + 4]
// 00446cfa  894804               mov dword ptr [eax + 4], ecx
// 00446cfd  5e                   pop esi
// 00446cfe  c3                   ret 
// 00446cff  33c0                 xor eax, eax
// 00446d01  5e                   pop esi
// 00446d02  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
