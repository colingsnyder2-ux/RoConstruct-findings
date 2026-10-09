// roc 2009-12 0064bb90  unit: RBX::Feature::W4LeftRight::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0064bb90
//
// 0064bb90  56                   push esi
// 0064bb91  6a08                 push 8
// 0064bb93  8bf1                 mov esi, ecx
// 0064bb95  e8c67c1a00           call 0x7f3860
// 0064bb9a  83c404               add esp, 4
// 0064bb9d  85c0                 test eax, eax
// 0064bb9f  740e                 je 0x64bbaf
// 0064bba1  c700fccc9c00         mov dword ptr [eax], 0x9cccfc
// 0064bba7  8b4e04               mov ecx, dword ptr [esi + 4]
// 0064bbaa  894804               mov dword ptr [eax + 4], ecx
// 0064bbad  5e                   pop esi
// 0064bbae  c3                   ret 
// 0064bbaf  33c0                 xor eax, eax
// 0064bbb1  5e                   pop esi
// 0064bbb2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
