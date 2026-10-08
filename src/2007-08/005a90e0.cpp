// roc 2007-08 005a90e0  unit: RBX::VHumanoid::?$SignalDesc  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a90e0
//
// 005a90e0  56                   push esi
// 005a90e1  8bf1                 mov esi, ecx
// 005a90e3  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005a90e6  8b01                 mov eax, dword ptr [ecx]
// 005a90e8  8b5014               mov edx, dword ptr [eax + 0x14]
// 005a90eb  57                   push edi
// 005a90ec  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005a90f0  57                   push edi
// 005a90f1  ffd2                 call edx
// 005a90f3  85ff                 test edi, edi
// 005a90f5  740a                 je 0x5a9101
// 005a90f7  8b07                 mov eax, dword ptr [edi]
// 005a90f9  8b10                 mov edx, dword ptr [eax]
// 005a90fb  6a01                 push 1
// 005a90fd  8bcf                 mov ecx, edi
// 005a90ff  ffd2                 call edx
// 005a9101  834674ff             add dword ptr [esi + 0x74], -1
// 005a9105  5f                   pop edi
// 005a9106  5e                   pop esi
// 005a9107  c20400               ret 4
// library rbxgs/v8world\World.cpp (function ?destroyContact@World@RBX@@QAEXPAVContact@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/World.cpp
