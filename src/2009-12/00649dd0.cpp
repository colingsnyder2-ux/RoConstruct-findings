// roc 2009-12 00649dd0  unit: RBX::Action::W4ActionType::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00649dd0
//
// 00649dd0  56                   push esi
// 00649dd1  6a08                 push 8
// 00649dd3  8bf1                 mov esi, ecx
// 00649dd5  e8869a1a00           call 0x7f3860
// 00649dda  83c404               add esp, 4
// 00649ddd  85c0                 test eax, eax
// 00649ddf  740e                 je 0x649def
// 00649de1  c7001ccb9c00         mov dword ptr [eax], 0x9ccb1c
// 00649de7  8b4e04               mov ecx, dword ptr [esi + 4]
// 00649dea  894804               mov dword ptr [eax + 4], ecx
// 00649ded  5e                   pop esi
// 00649dee  c3                   ret 
// 00649def  33c0                 xor eax, eax
// 00649df1  5e                   pop esi
// 00649df2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
