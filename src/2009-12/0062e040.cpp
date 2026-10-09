// roc 2009-12 0062e040  unit: RBX::DebugSettings::W4ErrorReporting::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0062e040
//
// 0062e040  56                   push esi
// 0062e041  6a08                 push 8
// 0062e043  8bf1                 mov esi, ecx
// 0062e045  e816581c00           call 0x7f3860
// 0062e04a  83c404               add esp, 4
// 0062e04d  85c0                 test eax, eax
// 0062e04f  740e                 je 0x62e05f
// 0062e051  c700d4b09c00         mov dword ptr [eax], 0x9cb0d4
// 0062e057  8b4e04               mov ecx, dword ptr [esi + 4]
// 0062e05a  894804               mov dword ptr [eax + 4], ecx
// 0062e05d  5e                   pop esi
// 0062e05e  c3                   ret 
// 0062e05f  33c0                 xor eax, eax
// 0062e061  5e                   pop esi
// 0062e062  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
