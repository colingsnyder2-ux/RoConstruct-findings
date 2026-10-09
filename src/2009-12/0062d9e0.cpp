// roc 2009-12 0062d9e0  unit: RBX::TaskScheduler::W4PriorityMethod::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0062d9e0
//
// 0062d9e0  56                   push esi
// 0062d9e1  6a08                 push 8
// 0062d9e3  8bf1                 mov esi, ecx
// 0062d9e5  e8765e1c00           call 0x7f3860
// 0062d9ea  83c404               add esp, 4
// 0062d9ed  85c0                 test eax, eax
// 0062d9ef  740e                 je 0x62d9ff
// 0062d9f1  c70074b09c00         mov dword ptr [eax], 0x9cb074
// 0062d9f7  8b4e04               mov ecx, dword ptr [esi + 4]
// 0062d9fa  894804               mov dword ptr [eax + 4], ecx
// 0062d9fd  5e                   pop esi
// 0062d9fe  c3                   ret 
// 0062d9ff  33c0                 xor eax, eax
// 0062da01  5e                   pop esi
// 0062da02  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
