// roc 2007-08 00561700  unit: RBX::VHole::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00561700
//
// 00561700  6aff                 push -1
// 00561702  687b6b7500           push 0x756b7b
// 00561707  64a100000000         mov eax, dword ptr fs:[0]
// 0056170d  50                   push eax
// 0056170e  64892500000000       mov dword ptr fs:[0], esp
// 00561715  51                   push ecx
// 00561716  8b442418             mov eax, dword ptr [esp + 0x18]
// 0056171a  53                   push ebx
// 0056171b  55                   push ebp
// 0056171c  8be9                 mov ebp, ecx
// 0056171e  56                   push esi
// 0056171f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00561723  50                   push eax
// 00561724  8d5d04               lea ebx, [ebp + 4]
// 00561727  56                   push esi
// 00561728  8bcb                 mov ecx, ebx
// 0056172a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0056172e  897500               mov dword ptr [ebp], esi
// 00561731  e83affffff           call 0x561670
// 00561736  85f6                 test esi, esi
// 00561738  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00561740  7453                 je 0x561795
// 00561742  57                   push edi
// 00561743  8dbea4000000         lea edi, [esi + 0xa4]
// 00561749  85ff                 test edi, edi
// 0056174b  7431                 je 0x56177e
// 0056174d  8937                 mov dword ptr [edi], esi
// 0056174f  8b33                 mov esi, dword ptr [ebx]
// 00561751  85f6                 test esi, esi
// 00561753  740c                 je 0x561761
// 00561755  8d4e08               lea ecx, [esi + 8]
// 00561758  ba01000000           mov edx, 1
// 0056175d  f00fc111             lock xadd dword ptr [ecx], edx
// 00561761  8b4f04               mov ecx, dword ptr [edi + 4]
// 00561764  85c9                 test ecx, ecx
// 00561766  7413                 je 0x56177b
// 00561768  8d4108               lea eax, [ecx + 8]
// 0056176b  83caff               or edx, 0xffffffff
// 0056176e  f00fc110             lock xadd dword ptr [eax], edx
// 00561772  7507                 jne 0x56177b
// 00561774  8b01                 mov eax, dword ptr [ecx]
// 00561776  8b5008               mov edx, dword ptr [eax + 8]
// 00561779  ffd2                 call edx
// 0056177b  897704               mov dword ptr [edi + 4], esi
// 0056177e  5f                   pop edi
// 0056177f  5e                   pop esi
// 00561780  8bc5                 mov eax, ebp
// 00561782  5d                   pop ebp
// 00561783  5b                   pop ebx
// 00561784  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00561788  64890d00000000       mov dword ptr fs:[0], ecx
// 0056178f  83c410               add esp, 0x10
// 00561792  c20800               ret 8
// 00561795  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00561799  5e                   pop esi
// 0056179a  8bc5                 mov eax, ebp
// 0056179c  5d                   pop ebp
// 0056179d  5b                   pop ebx
// 0056179e  64890d00000000       mov dword ptr fs:[0], ecx
// 005617a5  83c410               add esp, 0x10
// 005617a8  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
