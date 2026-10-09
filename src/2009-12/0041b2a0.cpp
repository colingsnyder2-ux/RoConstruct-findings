// roc 2009-12 0041b2a0  unit: rbx::signals::connection::slot  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0041b2a0
//
// 0041b2a0  6aff                 push -1
// 0041b2a2  68e8999400           push 0x9499e8
// 0041b2a7  64a100000000         mov eax, dword ptr fs:[0]
// 0041b2ad  50                   push eax
// 0041b2ae  64892500000000       mov dword ptr fs:[0], esp
// 0041b2b5  51                   push ecx
// 0041b2b6  56                   push esi
// 0041b2b7  8bf1                 mov esi, ecx
// 0041b2b9  89742404             mov dword ptr [esp + 4], esi
// 0041b2bd  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0041b2c5  e8a6902400           call 0x664370
// 0041b2ca  8bce                 mov ecx, esi
// 0041b2cc  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0041b2d4  e877fcffff           call 0x41af50
// 0041b2d9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041b2dd  5e                   pop esi
// 0041b2de  64890d00000000       mov dword ptr fs:[0], ecx
// 0041b2e5  83c410               add esp, 0x10
// 0041b2e8  c3                   ret 
// library rbxgs-raknet/ConnectionGraph.cpp (function ??1?$Map@USystemAddressAndGroupId@ConnectionGraph@@G$1??$defaultMapKeyComparison@USystemAddressAndGroupId@ConnectionGraph@@@DataStructures@@YAHABU12@0@Z@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ConnectionGraph.cpp
