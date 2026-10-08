// roc 2011-06 0046e720  unit: RBX::PartInstance::W4Material::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0046e720
//
// 0046e720  56                   push esi
// 0046e721  6a08                 push 8
// 0046e723  8bf1                 mov esi, ecx
// 0046e725  e834b93900           call 0x80a05e
// 0046e72a  83c404               add esp, 4
// 0046e72d  85c0                 test eax, eax
// 0046e72f  740e                 je 0x46e73f
// 0046e731  c700f0faa600         mov dword ptr [eax], 0xa6faf0
// 0046e737  8b4e04               mov ecx, dword ptr [esi + 4]
// 0046e73a  894804               mov dword ptr [eax + 4], ecx
// 0046e73d  5e                   pop esi
// 0046e73e  c3                   ret 
// 0046e73f  33c0                 xor eax, eax
// 0046e741  5e                   pop esi
// 0046e742  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
