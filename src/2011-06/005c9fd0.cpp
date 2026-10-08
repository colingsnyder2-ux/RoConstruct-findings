// roc 2011-06 005c9fd0  unit: RBX::DialogRoot::W4DialogTone::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c9fd0
//
// 005c9fd0  56                   push esi
// 005c9fd1  6a08                 push 8
// 005c9fd3  8bf1                 mov esi, ecx
// 005c9fd5  e884002400           call 0x80a05e
// 005c9fda  83c404               add esp, 4
// 005c9fdd  85c0                 test eax, eax
// 005c9fdf  740e                 je 0x5c9fef
// 005c9fe1  c70040f3a800         mov dword ptr [eax], 0xa8f340
// 005c9fe7  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c9fea  894804               mov dword ptr [eax + 4], ecx
// 005c9fed  5e                   pop esi
// 005c9fee  c3                   ret 
// 005c9fef  33c0                 xor eax, eax
// 005c9ff1  5e                   pop esi
// 005c9ff2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
