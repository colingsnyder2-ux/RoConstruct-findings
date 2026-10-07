// roc 2012-06 0056bf70  unit: RBX::Network::IdSerializer  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0056bf70
//
// 0056bf70  83ec08               sub esp, 8
// 0056bf73  56                   push esi
// 0056bf74  8bf1                 mov esi, ecx
// 0056bf76  e855bcffff           call 0x567bd0
// 0056bf7b  84c0                 test al, al
// 0056bf7d  752b                 jne 0x56bfaa
// 0056bf7f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0056bf83  6a08                 push 8
// 0056bf85  8d442408             lea eax, [esp + 8]
// 0056bf89  50                   push eax
// 0056bf8a  51                   push ecx
// 0056bf8b  e8b0bbffff           call 0x567b40
// 0056bf90  83c40c               add esp, 0xc
// 0056bf93  6a01                 push 1
// 0056bf95  6a40                 push 0x40
// 0056bf97  8d54240c             lea edx, [esp + 0xc]
// 0056bf9b  52                   push edx
// 0056bf9c  8bce                 mov ecx, esi
// 0056bf9e  e8edbdffff           call 0x567d90
// 0056bfa3  5e                   pop esi
// 0056bfa4  83c408               add esp, 8
// 0056bfa7  c20400               ret 4
// 0056bfaa  8b442410             mov eax, dword ptr [esp + 0x10]
// 0056bfae  6a01                 push 1
// 0056bfb0  6a40                 push 0x40
// 0056bfb2  50                   push eax
// 0056bfb3  8bce                 mov ecx, esi
// 0056bfb5  e8d6bdffff           call 0x567d90
// 0056bfba  5e                   pop esi
// 0056bfbb  83c408               add esp, 8
// 0056bfbe  c20400               ret 4
// library rbx2016-raknet/CloudClient.cpp (function ??$Write@_K@BitStream@RakNet@@QAEXAB_K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudClient.cpp
