// roc 2012-06 0056c0e0  unit: RBX::Network::IdSerializer  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0056c0e0
//
// 0056c0e0  51                   push ecx
// 0056c0e1  56                   push esi
// 0056c0e2  8bf1                 mov esi, ecx
// 0056c0e4  e8e7baffff           call 0x567bd0
// 0056c0e9  6a01                 push 1
// 0056c0eb  8bce                 mov ecx, esi
// 0056c0ed  6a10                 push 0x10
// 0056c0ef  84c0                 test al, al
// 0056c0f1  7530                 jne 0x56c123
// 0056c0f3  8d44240c             lea eax, [esp + 0xc]
// 0056c0f7  50                   push eax
// 0056c0f8  e883b6ffff           call 0x567780
// 0056c0fd  84c0                 test al, al
// 0056c0ff  741b                 je 0x56c11c
// 0056c101  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0056c105  6a02                 push 2
// 0056c107  51                   push ecx
// 0056c108  8d54240c             lea edx, [esp + 0xc]
// 0056c10c  52                   push edx
// 0056c10d  e82ebaffff           call 0x567b40
// 0056c112  83c40c               add esp, 0xc
// 0056c115  b001                 mov al, 1
// 0056c117  5e                   pop esi
// 0056c118  59                   pop ecx
// 0056c119  c20400               ret 4
// 0056c11c  32c0                 xor al, al
// 0056c11e  5e                   pop esi
// 0056c11f  59                   pop ecx
// 0056c120  c20400               ret 4
// 0056c123  8b442414             mov eax, dword ptr [esp + 0x14]
// 0056c127  50                   push eax
// 0056c128  e853b6ffff           call 0x567780
// 0056c12d  5e                   pop esi
// 0056c12e  59                   pop ecx
// 0056c12f  c20400               ret 4
// library rbx2016-raknet/CloudCommon.cpp (function ??$Read@G@BitStream@RakNet@@QAE_NAAG@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudCommon.cpp
