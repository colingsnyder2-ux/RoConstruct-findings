// roc 2011-06 00802e80  unit: W4_D3DDEVTYPE::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00802e80
//
// 00802e80  56                   push esi
// 00802e81  6a08                 push 8
// 00802e83  8bf1                 mov esi, ecx
// 00802e85  e8d4710000           call 0x80a05e
// 00802e8a  83c404               add esp, 4
// 00802e8d  85c0                 test eax, eax
// 00802e8f  740e                 je 0x802e9f
// 00802e91  c700f003ac00         mov dword ptr [eax], 0xac03f0
// 00802e97  8b4e04               mov ecx, dword ptr [esi + 4]
// 00802e9a  894804               mov dword ptr [eax + 4], ecx
// 00802e9d  5e                   pop esi
// 00802e9e  c3                   ret 
// 00802e9f  33c0                 xor eax, eax
// 00802ea1  5e                   pop esi
// 00802ea2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
