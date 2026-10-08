// roc 2008-06 004ba400  unit: RBX::Network::IdSerializer  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ba400
//
// 004ba400  6aff                 push -1
// 004ba402  68289c7c00           push 0x7c9c28
// 004ba407  64a100000000         mov eax, dword ptr fs:[0]
// 004ba40d  50                   push eax
// 004ba40e  64892500000000       mov dword ptr fs:[0], esp
// 004ba415  51                   push ecx
// 004ba416  56                   push esi
// 004ba417  8bf1                 mov esi, ecx
// 004ba419  89742404             mov dword ptr [esp + 4], esi
// 004ba41d  8b4608               mov eax, dword ptr [esi + 8]
// 004ba420  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004ba428  85c0                 test eax, eax
// 004ba42a  7426                 je 0x4ba452
// 004ba42c  3d00020000           cmp eax, 0x200
// 004ba431  7618                 jbe 0x4ba44b
// 004ba433  8b06                 mov eax, dword ptr [esi]
// 004ba435  50                   push eax
// 004ba436  e83f621e00           call 0x6a067a
// 004ba43b  83c404               add esp, 4
// 004ba43e  c7460800000000       mov dword ptr [esi + 8], 0
// 004ba445  c70600000000         mov dword ptr [esi], 0
// 004ba44b  c7460400000000       mov dword ptr [esi + 4], 0
// 004ba452  837e0800             cmp dword ptr [esi + 8], 0
// 004ba456  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004ba45e  760b                 jbe 0x4ba46b
// 004ba460  8b06                 mov eax, dword ptr [esi]
// 004ba462  50                   push eax
// 004ba463  e812621e00           call 0x6a067a
// 004ba468  83c404               add esp, 4
// 004ba46b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004ba46f  5e                   pop esi
// 004ba470  64890d00000000       mov dword ptr fs:[0], ecx
// 004ba477  83c410               add esp, 0x10
// 004ba47a  c3                   ret 
// library rbxgs-raknet/CommandParserInterface.cpp (function ??1?$OrderedList@PBDURegisteredCommand@@$1?RegisteredCommandComp@@YAHABQBDABU1@@Z@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet CommandParserInterface.cpp
