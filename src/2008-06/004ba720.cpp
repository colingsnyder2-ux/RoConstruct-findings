// roc 2008-06 004ba720  unit: RBX::Network::IdSerializer  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ba720
//
// 004ba720  6aff                 push -1
// 004ba722  6878927c00           push 0x7c9278
// 004ba727  64a100000000         mov eax, dword ptr fs:[0]
// 004ba72d  50                   push eax
// 004ba72e  64892500000000       mov dword ptr fs:[0], esp
// 004ba735  51                   push ecx
// 004ba736  53                   push ebx
// 004ba737  56                   push esi
// 004ba738  8bf1                 mov esi, ecx
// 004ba73a  89742408             mov dword ptr [esp + 8], esi
// 004ba73e  8b4608               mov eax, dword ptr [esi + 8]
// 004ba741  33db                 xor ebx, ebx
// 004ba743  895c2414             mov dword ptr [esp + 0x14], ebx
// 004ba747  885e14               mov byte ptr [esi + 0x14], bl
// 004ba74a  3bc3                 cmp eax, ebx
// 004ba74c  741a                 je 0x4ba768
// 004ba74e  3d00020000           cmp eax, 0x200
// 004ba753  7610                 jbe 0x4ba765
// 004ba755  8b06                 mov eax, dword ptr [esi]
// 004ba757  50                   push eax
// 004ba758  e81d5f1e00           call 0x6a067a
// 004ba75d  83c404               add esp, 4
// 004ba760  895e08               mov dword ptr [esi + 8], ebx
// 004ba763  891e                 mov dword ptr [esi], ebx
// 004ba765  895e04               mov dword ptr [esi + 4], ebx
// 004ba768  8bce                 mov ecx, esi
// 004ba76a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004ba772  e889fcffff           call 0x4ba400
// 004ba777  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004ba77b  5e                   pop esi
// 004ba77c  5b                   pop ebx
// 004ba77d  64890d00000000       mov dword ptr fs:[0], ecx
// 004ba784  83c410               add esp, 0x10
// 004ba787  c3                   ret 
// library rbxgs-raknet/LightweightDatabaseServer.cpp (function ??1?$Map@PADPAUDatabaseTable@LightweightDatabaseServer@@$1?DatabaseTableComp@2@SAHABQAD0@Z@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet LightweightDatabaseServer.cpp
