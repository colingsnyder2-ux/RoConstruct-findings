// roc 2009-06 005d0a00  unit: RBX::Reflection::PBVPropertyDescriptor::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005d0a00
//
// 005d0a00  56                   push esi
// 005d0a01  6a08                 push 8
// 005d0a03  8bf1                 mov esi, ecx
// 005d0a05  e82e801400           call 0x718a38
// 005d0a0a  83c404               add esp, 4
// 005d0a0d  85c0                 test eax, eax
// 005d0a0f  740e                 je 0x5d0a1f
// 005d0a11  c700984f8d00         mov dword ptr [eax], 0x8d4f98
// 005d0a17  8b4e04               mov ecx, dword ptr [esi + 4]
// 005d0a1a  894804               mov dword ptr [eax + 4], ecx
// 005d0a1d  5e                   pop esi
// 005d0a1e  c3                   ret 
// 005d0a1f  33c0                 xor eax, eax
// 005d0a21  5e                   pop esi
// 005d0a22  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
