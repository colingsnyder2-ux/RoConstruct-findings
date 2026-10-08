// roc 2007-03 004b8e40  unit: seg_004b0000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b8e40
//
// 004b8e40  6aff                 push -1
// 004b8e42  6828cc7400           push 0x74cc28
// 004b8e47  64a100000000         mov eax, dword ptr fs:[0]
// 004b8e4d  50                   push eax
// 004b8e4e  64892500000000       mov dword ptr fs:[0], esp
// 004b8e55  51                   push ecx
// 004b8e56  56                   push esi
// 004b8e57  8bf1                 mov esi, ecx
// 004b8e59  89742404             mov dword ptr [esp + 4], esi
// 004b8e5d  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004b8e65  e8d6fcffff           call 0x4b8b40
// 004b8e6a  8bce                 mov ecx, esi
// 004b8e6c  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004b8e74  e8c7fcffff           call 0x4b8b40
// 004b8e79  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b8e7d  5e                   pop esi
// 004b8e7e  64890d00000000       mov dword ptr fs:[0], ecx
// 004b8e85  83c410               add esp, 0x10
// 004b8e88  c3                   ret 
// library rbxgs-raknet/ConnectionGraph.cpp (function ??1?$Map@USystemAddressAndGroupId@ConnectionGraph@@G$1??$defaultMapKeyComparison@USystemAddressAndGroupId@ConnectionGraph@@@DataStructures@@YAHABU12@0@Z@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ConnectionGraph.cpp
