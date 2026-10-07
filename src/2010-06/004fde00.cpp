// roc 2010-06 004fde00  unit: RBX::Network::IdSerializer  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004fde00
//
// 004fde00  56                   push esi
// 004fde01  8bf1                 mov esi, ecx
// 004fde03  837e0800             cmp dword ptr [esi + 8], 0
// 004fde07  7430                 je 0x4fde39
// 004fde09  8b06                 mov eax, dword ptr [esi]
// 004fde0b  50                   push eax
// 004fde0c  e8359e2a00           call 0x7a7c46
// 004fde11  83c404               add esp, 4
// 004fde14  c7460800000000       mov dword ptr [esi + 8], 0
// 004fde1b  837e0800             cmp dword ptr [esi + 8], 0
// 004fde1f  c70600000000         mov dword ptr [esi], 0
// 004fde25  c7460400000000       mov dword ptr [esi + 4], 0
// 004fde2c  760b                 jbe 0x4fde39
// 004fde2e  8b0e                 mov ecx, dword ptr [esi]
// 004fde30  51                   push ecx
// 004fde31  e8109e2a00           call 0x7a7c46
// 004fde36  83c404               add esp, 4
// 004fde39  5e                   pop esi
// 004fde3a  c3                   ret 
// library rbx2016-raknet/CloudServer.cpp (function ??1?$OrderedList@URakNetGUID@RakNet@@U12@$1??$defaultOrderedListComparison@URakNetGUID@RakNet@@U12@@DataStructures@@YAHABU12@0@Z@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudServer.cpp
