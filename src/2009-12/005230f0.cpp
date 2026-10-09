// roc 2009-12 005230f0  unit: RBX::NetworkSettings::W4PhysicsSendMethod::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005230f0
//
// 005230f0  56                   push esi
// 005230f1  6a08                 push 8
// 005230f3  8bf1                 mov esi, ecx
// 005230f5  e866072d00           call 0x7f3860
// 005230fa  83c404               add esp, 4
// 005230fd  85c0                 test eax, eax
// 005230ff  740e                 je 0x52310f
// 00523101  c70024ba9b00         mov dword ptr [eax], 0x9bba24
// 00523107  8b4e04               mov ecx, dword ptr [esi + 4]
// 0052310a  894804               mov dword ptr [eax + 4], ecx
// 0052310d  5e                   pop esi
// 0052310e  c3                   ret 
// 0052310f  33c0                 xor eax, eax
// 00523111  5e                   pop esi
// 00523112  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
