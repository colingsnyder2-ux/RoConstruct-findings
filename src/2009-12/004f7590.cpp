// roc 2009-12 004f7590  unit: RBX::VBrickColor::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004f7590
//
// 004f7590  56                   push esi
// 004f7591  6a08                 push 8
// 004f7593  8bf1                 mov esi, ecx
// 004f7595  e8c6c22f00           call 0x7f3860
// 004f759a  83c404               add esp, 4
// 004f759d  85c0                 test eax, eax
// 004f759f  740e                 je 0x4f75af
// 004f75a1  c7001ca29b00         mov dword ptr [eax], 0x9ba21c
// 004f75a7  8b4e04               mov ecx, dword ptr [esi + 4]
// 004f75aa  894804               mov dword ptr [eax + 4], ecx
// 004f75ad  5e                   pop esi
// 004f75ae  c3                   ret 
// 004f75af  33c0                 xor eax, eax
// 004f75b1  5e                   pop esi
// 004f75b2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
