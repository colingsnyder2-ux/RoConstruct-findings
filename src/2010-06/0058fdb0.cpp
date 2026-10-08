// roc 2010-06 0058fdb0  unit: RBX::DebugSettings::W4ErrorReporting::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0058fdb0
//
// 0058fdb0  56                   push esi
// 0058fdb1  6a08                 push 8
// 0058fdb3  8bf1                 mov esi, ecx
// 0058fdb5  e8e67b2100           call 0x7a79a0
// 0058fdba  83c404               add esp, 4
// 0058fdbd  85c0                 test eax, eax
// 0058fdbf  740e                 je 0x58fdcf
// 0058fdc1  c7006c8ea200         mov dword ptr [eax], 0xa28e6c
// 0058fdc7  8b4e04               mov ecx, dword ptr [esi + 4]
// 0058fdca  894804               mov dword ptr [eax + 4], ecx
// 0058fdcd  5e                   pop esi
// 0058fdce  c3                   ret 
// 0058fdcf  33c0                 xor eax, eax
// 0058fdd1  5e                   pop esi
// 0058fdd2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
