// roc 2011-06 004f4b90  unit: RBX::VAxes::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f4b90
//
// 004f4b90  56                   push esi
// 004f4b91  6a08                 push 8
// 004f4b93  8bf1                 mov esi, ecx
// 004f4b95  e8c4543100           call 0x80a05e
// 004f4b9a  83c404               add esp, 4
// 004f4b9d  85c0                 test eax, eax
// 004f4b9f  740e                 je 0x4f4baf
// 004f4ba1  c70004b3a700         mov dword ptr [eax], 0xa7b304
// 004f4ba7  8b4e04               mov ecx, dword ptr [esi + 4]
// 004f4baa  894804               mov dword ptr [eax + 4], ecx
// 004f4bad  5e                   pop esi
// 004f4bae  c3                   ret 
// 004f4baf  33c0                 xor eax, eax
// 004f4bb1  5e                   pop esi
// 004f4bb2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
