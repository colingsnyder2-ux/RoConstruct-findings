// roc 2012-06 0056bfd0  unit: RBX::Network::IdSerializer  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0056bfd0
//
// 0056bfd0  56                   push esi
// 0056bfd1  8bf1                 mov esi, ecx
// 0056bfd3  e8f8bbffff           call 0x567bd0
// 0056bfd8  84c0                 test al, al
// 0056bfda  7528                 jne 0x56c004
// 0056bfdc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0056bfe0  6a04                 push 4
// 0056bfe2  8d44240c             lea eax, [esp + 0xc]
// 0056bfe6  50                   push eax
// 0056bfe7  51                   push ecx
// 0056bfe8  e853bbffff           call 0x567b40
// 0056bfed  83c40c               add esp, 0xc
// 0056bff0  6a01                 push 1
// 0056bff2  6a20                 push 0x20
// 0056bff4  8d542410             lea edx, [esp + 0x10]
// 0056bff8  52                   push edx
// 0056bff9  8bce                 mov ecx, esi
// 0056bffb  e890bdffff           call 0x567d90
// 0056c000  5e                   pop esi
// 0056c001  c20400               ret 4
// 0056c004  8b442408             mov eax, dword ptr [esp + 8]
// 0056c008  6a01                 push 1
// 0056c00a  6a20                 push 0x20
// 0056c00c  50                   push eax
// 0056c00d  8bce                 mov ecx, esi
// 0056c00f  e87cbdffff           call 0x567d90
// 0056c014  5e                   pop esi
// 0056c015  c20400               ret 4
// library rbx2016-raknet/CloudClient.cpp (function ??$Write@I@BitStream@RakNet@@QAEXABI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudClient.cpp
