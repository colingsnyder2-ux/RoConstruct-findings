// roc 2009-06 004b5250  unit: RBX::VBrickColor::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b5250
//
// 004b5250  56                   push esi
// 004b5251  6a08                 push 8
// 004b5253  8bf1                 mov esi, ecx
// 004b5255  e8de372600           call 0x718a38
// 004b525a  83c404               add esp, 4
// 004b525d  85c0                 test eax, eax
// 004b525f  740e                 je 0x4b526f
// 004b5261  c70050458c00         mov dword ptr [eax], 0x8c4550
// 004b5267  8b4e04               mov ecx, dword ptr [esi + 4]
// 004b526a  894804               mov dword ptr [eax + 4], ecx
// 004b526d  5e                   pop esi
// 004b526e  c3                   ret 
// 004b526f  33c0                 xor eax, eax
// 004b5271  5e                   pop esi
// 004b5272  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
