// roc 2009-12 00555ac0  unit: RBX::Network::ClientReplicator  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00555ac0
//
// 00555ac0  8b442410             mov eax, dword ptr [esp + 0x10]
// 00555ac4  8b542404             mov edx, dword ptr [esp + 4]
// 00555ac8  56                   push esi
// 00555ac9  57                   push edi
// 00555aca  8bf1                 mov esi, ecx
// 00555acc  50                   push eax
// 00555acd  8d4c241c             lea ecx, [esp + 0x1c]
// 00555ad1  51                   push ecx
// 00555ad2  52                   push edx
// 00555ad3  8bce                 mov ecx, esi
// 00555ad5  e8269cffff           call 0x54f700
// 00555ada  807c241800           cmp byte ptr [esp + 0x18], 0
// 00555adf  8bf8                 mov edi, eax
// 00555ae1  7408                 je 0x555aeb
// 00555ae3  5f                   pop edi
// 00555ae4  83c8ff               or eax, 0xffffffff
// 00555ae7  5e                   pop esi
// 00555ae8  c21000               ret 0x10
// 00555aeb  8b442410             mov eax, dword ptr [esp + 0x10]
// 00555aef  8b4804               mov ecx, dword ptr [eax + 4]
// 00555af2  8b10                 mov edx, dword ptr [eax]
// 00555af4  3b7e04               cmp edi, dword ptr [esi + 4]
// 00555af7  7212                 jb 0x555b0b
// 00555af9  51                   push ecx
// 00555afa  52                   push edx
// 00555afb  8bce                 mov ecx, esi
// 00555afd  e8def8ffff           call 0x5553e0
// 00555b02  8b4604               mov eax, dword ptr [esi + 4]
// 00555b05  5f                   pop edi
// 00555b06  48                   dec eax
// 00555b07  5e                   pop esi
// 00555b08  c21000               ret 0x10
// 00555b0b  57                   push edi
// 00555b0c  51                   push ecx
// 00555b0d  52                   push edx
// 00555b0e  8bce                 mov ecx, esi
// 00555b10  e86bf9ffff           call 0x555480
// 00555b15  8bc7                 mov eax, edi
// 00555b17  5f                   pop edi
// 00555b18  5e                   pop esi
// 00555b19  c21000               ret 0x10
// library rbxgs-raknet/ConnectionGraph.cpp (function ?Insert@?$OrderedList@USystemAddress@@U1@$1??$defaultOrderedListComparison@USystemAddress@@U1@@DataStructures@@YAHABU1@0@Z@DataStructures@@QAEIABUSystemAddress@@0_NP6AH00@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ConnectionGraph.cpp
