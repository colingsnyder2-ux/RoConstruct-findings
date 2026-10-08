// roc 2008-06 004d0b90  unit: RBX::Network::PhysicsSender  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d0b90
//
// 004d0b90  8b442410             mov eax, dword ptr [esp + 0x10]
// 004d0b94  8b542404             mov edx, dword ptr [esp + 4]
// 004d0b98  56                   push esi
// 004d0b99  57                   push edi
// 004d0b9a  8bf1                 mov esi, ecx
// 004d0b9c  50                   push eax
// 004d0b9d  8d4c241c             lea ecx, [esp + 0x1c]
// 004d0ba1  51                   push ecx
// 004d0ba2  52                   push edx
// 004d0ba3  8bce                 mov ecx, esi
// 004d0ba5  e8c6eeffff           call 0x4cfa70
// 004d0baa  807c241800           cmp byte ptr [esp + 0x18], 0
// 004d0baf  8bf8                 mov edi, eax
// 004d0bb1  7408                 je 0x4d0bbb
// 004d0bb3  5f                   pop edi
// 004d0bb4  83c8ff               or eax, 0xffffffff
// 004d0bb7  5e                   pop esi
// 004d0bb8  c21000               ret 0x10
// 004d0bbb  8b442410             mov eax, dword ptr [esp + 0x10]
// 004d0bbf  8b4804               mov ecx, dword ptr [eax + 4]
// 004d0bc2  8b10                 mov edx, dword ptr [eax]
// 004d0bc4  3b7e04               cmp edi, dword ptr [esi + 4]
// 004d0bc7  7212                 jb 0x4d0bdb
// 004d0bc9  51                   push ecx
// 004d0bca  52                   push edx
// 004d0bcb  8bce                 mov ecx, esi
// 004d0bcd  e8eef0ffff           call 0x4cfcc0
// 004d0bd2  8b4604               mov eax, dword ptr [esi + 4]
// 004d0bd5  5f                   pop edi
// 004d0bd6  48                   dec eax
// 004d0bd7  5e                   pop esi
// 004d0bd8  c21000               ret 0x10
// 004d0bdb  57                   push edi
// 004d0bdc  51                   push ecx
// 004d0bdd  52                   push edx
// 004d0bde  8bce                 mov ecx, esi
// 004d0be0  e8ebf1ffff           call 0x4cfdd0
// 004d0be5  8bc7                 mov eax, edi
// 004d0be7  5f                   pop edi
// 004d0be8  5e                   pop esi
// 004d0be9  c21000               ret 0x10
// library rbxgs-raknet/ConnectionGraph.cpp (function ?Insert@?$OrderedList@USystemAddress@@U1@$1??$defaultOrderedListComparison@USystemAddress@@U1@@DataStructures@@YAHABU1@0@Z@DataStructures@@QAEIABUSystemAddress@@0_NP6AH00@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ConnectionGraph.cpp
