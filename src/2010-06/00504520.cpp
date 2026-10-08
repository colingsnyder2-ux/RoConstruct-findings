// roc 2010-06 00504520  unit: RBX::Network::ClientReplicator  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00504520
//
// 00504520  8b442410             mov eax, dword ptr [esp + 0x10]
// 00504524  8b542404             mov edx, dword ptr [esp + 4]
// 00504528  56                   push esi
// 00504529  57                   push edi
// 0050452a  8bf1                 mov esi, ecx
// 0050452c  50                   push eax
// 0050452d  8d4c241c             lea ecx, [esp + 0x1c]
// 00504531  51                   push ecx
// 00504532  52                   push edx
// 00504533  8bce                 mov ecx, esi
// 00504535  e8b69affff           call 0x4fdff0
// 0050453a  807c241800           cmp byte ptr [esp + 0x18], 0
// 0050453f  8bf8                 mov edi, eax
// 00504541  7408                 je 0x50454b
// 00504543  5f                   pop edi
// 00504544  83c8ff               or eax, 0xffffffff
// 00504547  5e                   pop esi
// 00504548  c21000               ret 0x10
// 0050454b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0050454f  8b4804               mov ecx, dword ptr [eax + 4]
// 00504552  8b10                 mov edx, dword ptr [eax]
// 00504554  3b7e04               cmp edi, dword ptr [esi + 4]
// 00504557  7212                 jb 0x50456b
// 00504559  51                   push ecx
// 0050455a  52                   push edx
// 0050455b  8bce                 mov ecx, esi
// 0050455d  e8def8ffff           call 0x503e40
// 00504562  8b4604               mov eax, dword ptr [esi + 4]
// 00504565  5f                   pop edi
// 00504566  48                   dec eax
// 00504567  5e                   pop esi
// 00504568  c21000               ret 0x10
// 0050456b  57                   push edi
// 0050456c  51                   push ecx
// 0050456d  52                   push edx
// 0050456e  8bce                 mov ecx, esi
// 00504570  e86bf9ffff           call 0x503ee0
// 00504575  8bc7                 mov eax, edi
// 00504577  5f                   pop edi
// 00504578  5e                   pop esi
// 00504579  c21000               ret 0x10
// library rbxgs-raknet/ConnectionGraph.cpp (function ?Insert@?$OrderedList@USystemAddress@@U1@$1??$defaultOrderedListComparison@USystemAddress@@U1@@DataStructures@@YAHABU1@0@Z@DataStructures@@QAEIABUSystemAddress@@0_NP6AH00@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ConnectionGraph.cpp
