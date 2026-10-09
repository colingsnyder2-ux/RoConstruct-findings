// roc 2009-12 00537cd0  unit: RBX::VFaces::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00537cd0
//
// 00537cd0  56                   push esi
// 00537cd1  6a08                 push 8
// 00537cd3  8bf1                 mov esi, ecx
// 00537cd5  e886bb2b00           call 0x7f3860
// 00537cda  83c404               add esp, 4
// 00537cdd  85c0                 test eax, eax
// 00537cdf  740e                 je 0x537cef
// 00537ce1  c700b8d19b00         mov dword ptr [eax], 0x9bd1b8
// 00537ce7  8b4e04               mov ecx, dword ptr [esi + 4]
// 00537cea  894804               mov dword ptr [eax + 4], ecx
// 00537ced  5e                   pop esi
// 00537cee  c3                   ret 
// 00537cef  33c0                 xor eax, eax
// 00537cf1  5e                   pop esi
// 00537cf2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
