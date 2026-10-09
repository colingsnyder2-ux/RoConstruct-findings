// roc 2009-12 0064acc0  unit: RBX::GuiText::W4YAlignment::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0064acc0
//
// 0064acc0  56                   push esi
// 0064acc1  6a08                 push 8
// 0064acc3  8bf1                 mov esi, ecx
// 0064acc5  e8968b1a00           call 0x7f3860
// 0064acca  83c404               add esp, 4
// 0064accd  85c0                 test eax, eax
// 0064accf  740e                 je 0x64acdf
// 0064acd1  c7000ccc9c00         mov dword ptr [eax], 0x9ccc0c
// 0064acd7  8b4e04               mov ecx, dword ptr [esi + 4]
// 0064acda  894804               mov dword ptr [eax + 4], ecx
// 0064acdd  5e                   pop esi
// 0064acde  c3                   ret 
// 0064acdf  33c0                 xor eax, eax
// 0064ace1  5e                   pop esi
// 0064ace2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
