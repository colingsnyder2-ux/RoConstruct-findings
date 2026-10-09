// roc 2009-12 0062eb50  unit: RBX::DataModelArbiter::W4ConcurrencyModel::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0062eb50
//
// 0062eb50  56                   push esi
// 0062eb51  6a08                 push 8
// 0062eb53  8bf1                 mov esi, ecx
// 0062eb55  e8064d1c00           call 0x7f3860
// 0062eb5a  83c404               add esp, 4
// 0062eb5d  85c0                 test eax, eax
// 0062eb5f  740e                 je 0x62eb6f
// 0062eb61  c70034b19c00         mov dword ptr [eax], 0x9cb134
// 0062eb67  8b4e04               mov ecx, dword ptr [esi + 4]
// 0062eb6a  894804               mov dword ptr [eax + 4], ecx
// 0062eb6d  5e                   pop esi
// 0062eb6e  c3                   ret 
// 0062eb6f  33c0                 xor eax, eax
// 0062eb71  5e                   pop esi
// 0062eb72  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
