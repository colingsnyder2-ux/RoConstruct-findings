// roc 2011-06 00595bb0  unit: RBX::Reflection::PBVPropertyDescriptor::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00595bb0
//
// 00595bb0  56                   push esi
// 00595bb1  6a08                 push 8
// 00595bb3  8bf1                 mov esi, ecx
// 00595bb5  e8a4442700           call 0x80a05e
// 00595bba  83c404               add esp, 4
// 00595bbd  85c0                 test eax, eax
// 00595bbf  740e                 je 0x595bcf
// 00595bc1  c7008c9ea800         mov dword ptr [eax], 0xa89e8c
// 00595bc7  8b4e04               mov ecx, dword ptr [esi + 4]
// 00595bca  894804               mov dword ptr [eax + 4], ecx
// 00595bcd  5e                   pop esi
// 00595bce  c3                   ret 
// 00595bcf  33c0                 xor eax, eax
// 00595bd1  5e                   pop esi
// 00595bd2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
