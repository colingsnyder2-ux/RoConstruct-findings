// roc 2009-12 0064a0c0  unit: W4AffectType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0064a0c0
//
// 0064a0c0  56                   push esi
// 0064a0c1  6a08                 push 8
// 0064a0c3  8bf1                 mov esi, ecx
// 0064a0c5  e896971a00           call 0x7f3860
// 0064a0ca  83c404               add esp, 4
// 0064a0cd  85c0                 test eax, eax
// 0064a0cf  740e                 je 0x64a0df
// 0064a0d1  c7004ccb9c00         mov dword ptr [eax], 0x9ccb4c
// 0064a0d7  8b4e04               mov ecx, dword ptr [esi + 4]
// 0064a0da  894804               mov dword ptr [eax + 4], ecx
// 0064a0dd  5e                   pop esi
// 0064a0de  c3                   ret 
// 0064a0df  33c0                 xor eax, eax
// 0064a0e1  5e                   pop esi
// 0064a0e2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
