// roc 2009-12 0064d520  unit: RBX::ExtrudedPartInstance::W4VisualTrussStyle::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0064d520
//
// 0064d520  56                   push esi
// 0064d521  6a08                 push 8
// 0064d523  8bf1                 mov esi, ecx
// 0064d525  e836631a00           call 0x7f3860
// 0064d52a  83c404               add esp, 4
// 0064d52d  85c0                 test eax, eax
// 0064d52f  740e                 je 0x64d53f
// 0064d531  c7007cce9c00         mov dword ptr [eax], 0x9cce7c
// 0064d537  8b4e04               mov ecx, dword ptr [esi + 4]
// 0064d53a  894804               mov dword ptr [eax + 4], ecx
// 0064d53d  5e                   pop esi
// 0064d53e  c3                   ret 
// 0064d53f  33c0                 xor eax, eax
// 0064d541  5e                   pop esi
// 0064d542  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
