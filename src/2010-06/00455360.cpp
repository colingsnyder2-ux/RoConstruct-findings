// roc 2010-06 00455360  unit: RBX::PartInstance::W4Material::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00455360
//
// 00455360  56                   push esi
// 00455361  6a08                 push 8
// 00455363  8bf1                 mov esi, ecx
// 00455365  e836263500           call 0x7a79a0
// 0045536a  83c404               add esp, 4
// 0045536d  85c0                 test eax, eax
// 0045536f  740e                 je 0x45537f
// 00455371  c70028cca000         mov dword ptr [eax], 0xa0cc28
// 00455377  8b4e04               mov ecx, dword ptr [esi + 4]
// 0045537a  894804               mov dword ptr [eax + 4], ecx
// 0045537d  5e                   pop esi
// 0045537e  c3                   ret 
// 0045537f  33c0                 xor eax, eax
// 00455381  5e                   pop esi
// 00455382  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
