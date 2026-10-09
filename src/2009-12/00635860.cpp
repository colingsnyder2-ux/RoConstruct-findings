// roc 2009-12 00635860  unit: RBX::Reflection::PBVPropertyDescriptor::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00635860
//
// 00635860  56                   push esi
// 00635861  6a08                 push 8
// 00635863  8bf1                 mov esi, ecx
// 00635865  e8f6df1b00           call 0x7f3860
// 0063586a  83c404               add esp, 4
// 0063586d  85c0                 test eax, eax
// 0063586f  740e                 je 0x63587f
// 00635871  c7004cbe9c00         mov dword ptr [eax], 0x9cbe4c
// 00635877  8b4e04               mov ecx, dword ptr [esi + 4]
// 0063587a  894804               mov dword ptr [eax + 4], ecx
// 0063587d  5e                   pop esi
// 0063587e  c3                   ret 
// 0063587f  33c0                 xor eax, eax
// 00635881  5e                   pop esi
// 00635882  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
