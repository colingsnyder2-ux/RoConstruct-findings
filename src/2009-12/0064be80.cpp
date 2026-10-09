// roc 2009-12 0064be80  unit: RBX::Feature::W4TopBottom::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0064be80
//
// 0064be80  56                   push esi
// 0064be81  6a08                 push 8
// 0064be83  8bf1                 mov esi, ecx
// 0064be85  e8d6791a00           call 0x7f3860
// 0064be8a  83c404               add esp, 4
// 0064be8d  85c0                 test eax, eax
// 0064be8f  740e                 je 0x64be9f
// 0064be91  c7002ccd9c00         mov dword ptr [eax], 0x9ccd2c
// 0064be97  8b4e04               mov ecx, dword ptr [esi + 4]
// 0064be9a  894804               mov dword ptr [eax + 4], ecx
// 0064be9d  5e                   pop esi
// 0064be9e  c3                   ret 
// 0064be9f  33c0                 xor eax, eax
// 0064bea1  5e                   pop esi
// 0064bea2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
