// roc 2009-06 004f7d10  unit: RBX::Network::ClientReplicator  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004f7d10
//
// 004f7d10  8b442410             mov eax, dword ptr [esp + 0x10]
// 004f7d14  8b542404             mov edx, dword ptr [esp + 4]
// 004f7d18  56                   push esi
// 004f7d19  57                   push edi
// 004f7d1a  8bf1                 mov esi, ecx
// 004f7d1c  50                   push eax
// 004f7d1d  8d4c241c             lea ecx, [esp + 0x1c]
// 004f7d21  51                   push ecx
// 004f7d22  52                   push edx
// 004f7d23  8bce                 mov ecx, esi
// 004f7d25  e826e4ffff           call 0x4f6150
// 004f7d2a  807c241800           cmp byte ptr [esp + 0x18], 0
// 004f7d2f  8bf8                 mov edi, eax
// 004f7d31  7408                 je 0x4f7d3b
// 004f7d33  5f                   pop edi
// 004f7d34  83c8ff               or eax, 0xffffffff
// 004f7d37  5e                   pop esi
// 004f7d38  c21000               ret 0x10
// 004f7d3b  8b442410             mov eax, dword ptr [esp + 0x10]
// 004f7d3f  8b4804               mov ecx, dword ptr [eax + 4]
// 004f7d42  8b10                 mov edx, dword ptr [eax]
// 004f7d44  3b7e04               cmp edi, dword ptr [esi + 4]
// 004f7d47  7212                 jb 0x4f7d5b
// 004f7d49  51                   push ecx
// 004f7d4a  52                   push edx
// 004f7d4b  8bce                 mov ecx, esi
// 004f7d4d  e89ef8ffff           call 0x4f75f0
// 004f7d52  8b4604               mov eax, dword ptr [esi + 4]
// 004f7d55  5f                   pop edi
// 004f7d56  48                   dec eax
// 004f7d57  5e                   pop esi
// 004f7d58  c21000               ret 0x10
// 004f7d5b  57                   push edi
// 004f7d5c  51                   push ecx
// 004f7d5d  52                   push edx
// 004f7d5e  8bce                 mov ecx, esi
// 004f7d60  e82bf9ffff           call 0x4f7690
// 004f7d65  8bc7                 mov eax, edi
// 004f7d67  5f                   pop edi
// 004f7d68  5e                   pop esi
// 004f7d69  c21000               ret 0x10
// library rbxgs-raknet/ConnectionGraph.cpp (function ?Insert@?$OrderedList@USystemAddress@@U1@$1??$defaultOrderedListComparison@USystemAddress@@U1@@DataStructures@@YAHABU1@0@Z@DataStructures@@QAEIABUSystemAddress@@0_NP6AH00@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ConnectionGraph.cpp
