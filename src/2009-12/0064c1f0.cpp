// roc 2009-12 0064c1f0  unit: RBX::Joint::W4JointType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0064c1f0
//
// 0064c1f0  56                   push esi
// 0064c1f1  6a08                 push 8
// 0064c1f3  8bf1                 mov esi, ecx
// 0064c1f5  e866761a00           call 0x7f3860
// 0064c1fa  83c404               add esp, 4
// 0064c1fd  85c0                 test eax, eax
// 0064c1ff  740e                 je 0x64c20f
// 0064c201  c7005ccd9c00         mov dword ptr [eax], 0x9ccd5c
// 0064c207  8b4e04               mov ecx, dword ptr [esi + 4]
// 0064c20a  894804               mov dword ptr [eax + 4], ecx
// 0064c20d  5e                   pop esi
// 0064c20e  c3                   ret 
// 0064c20f  33c0                 xor eax, eax
// 0064c211  5e                   pop esi
// 0064c212  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
