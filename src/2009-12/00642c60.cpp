// roc 2009-12 00642c60  unit: RBX::W4NormalId::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00642c60
//
// 00642c60  56                   push esi
// 00642c61  6a08                 push 8
// 00642c63  8bf1                 mov esi, ecx
// 00642c65  e8f60b1b00           call 0x7f3860
// 00642c6a  83c404               add esp, 4
// 00642c6d  85c0                 test eax, eax
// 00642c6f  740e                 je 0x642c7f
// 00642c71  c700d0c89c00         mov dword ptr [eax], 0x9cc8d0
// 00642c77  8b4e04               mov ecx, dword ptr [esi + 4]
// 00642c7a  894804               mov dword ptr [eax + 4], ecx
// 00642c7d  5e                   pop esi
// 00642c7e  c3                   ret 
// 00642c7f  33c0                 xor eax, eax
// 00642c81  5e                   pop esi
// 00642c82  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
