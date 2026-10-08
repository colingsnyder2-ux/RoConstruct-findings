// roc 2008-06 004ce280  unit: RBX::Network::PhysicsSender  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ce280
//
// 004ce280  6aff                 push -1
// 004ce282  68a89a7c00           push 0x7c9aa8
// 004ce287  64a100000000         mov eax, dword ptr fs:[0]
// 004ce28d  50                   push eax
// 004ce28e  64892500000000       mov dword ptr fs:[0], esp
// 004ce295  51                   push ecx
// 004ce296  56                   push esi
// 004ce297  8bf1                 mov esi, ecx
// 004ce299  89742404             mov dword ptr [esp + 4], esi
// 004ce29d  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004ce2a5  e8e6fcffff           call 0x4cdf90
// 004ce2aa  8bce                 mov ecx, esi
// 004ce2ac  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004ce2b4  e8d7fcffff           call 0x4cdf90
// 004ce2b9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004ce2bd  5e                   pop esi
// 004ce2be  64890d00000000       mov dword ptr fs:[0], ecx
// 004ce2c5  83c410               add esp, 0x10
// 004ce2c8  c3                   ret 
// library rbxgs-raknet/ConnectionGraph.cpp (function ??1?$Map@USystemAddressAndGroupId@ConnectionGraph@@G$1??$defaultMapKeyComparison@USystemAddressAndGroupId@ConnectionGraph@@@DataStructures@@YAHABU12@0@Z@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ConnectionGraph.cpp
