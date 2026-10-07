// roc 2012-06 0056c020  unit: RBX::Network::IdSerializer  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0056c020
//
// 0056c020  51                   push ecx
// 0056c021  56                   push esi
// 0056c022  8bf1                 mov esi, ecx
// 0056c024  e8a7bbffff           call 0x567bd0
// 0056c029  6a01                 push 1
// 0056c02b  8bce                 mov ecx, esi
// 0056c02d  6a20                 push 0x20
// 0056c02f  84c0                 test al, al
// 0056c031  7530                 jne 0x56c063
// 0056c033  8d44240c             lea eax, [esp + 0xc]
// 0056c037  50                   push eax
// 0056c038  e843b7ffff           call 0x567780
// 0056c03d  84c0                 test al, al
// 0056c03f  741b                 je 0x56c05c
// 0056c041  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0056c045  6a04                 push 4
// 0056c047  51                   push ecx
// 0056c048  8d54240c             lea edx, [esp + 0xc]
// 0056c04c  52                   push edx
// 0056c04d  e8eebaffff           call 0x567b40
// 0056c052  83c40c               add esp, 0xc
// 0056c055  b001                 mov al, 1
// 0056c057  5e                   pop esi
// 0056c058  59                   pop ecx
// 0056c059  c20400               ret 4
// 0056c05c  32c0                 xor al, al
// 0056c05e  5e                   pop esi
// 0056c05f  59                   pop ecx
// 0056c060  c20400               ret 4
// 0056c063  8b442414             mov eax, dword ptr [esp + 0x14]
// 0056c067  50                   push eax
// 0056c068  e813b7ffff           call 0x567780
// 0056c06d  5e                   pop esi
// 0056c06e  59                   pop ecx
// 0056c06f  c20400               ret 4
// library rbx2016-raknet/CloudCommon.cpp (function ??$Read@I@BitStream@RakNet@@QAE_NAAI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudCommon.cpp
