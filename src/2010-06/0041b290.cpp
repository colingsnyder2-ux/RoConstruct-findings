// roc 2010-06 0041b290  unit: rbx::signals::connection::slot  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0041b290
//
// 0041b290  6aff                 push -1
// 0041b292  68d8ee9700           push 0x97eed8
// 0041b297  64a100000000         mov eax, dword ptr fs:[0]
// 0041b29d  50                   push eax
// 0041b29e  64892500000000       mov dword ptr fs:[0], esp
// 0041b2a5  51                   push ecx
// 0041b2a6  56                   push esi
// 0041b2a7  8bf1                 mov esi, ecx
// 0041b2a9  89742404             mov dword ptr [esp + 4], esi
// 0041b2ad  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0041b2b5  e8d6fd1a00           call 0x5cb090
// 0041b2ba  8bce                 mov ecx, esi
// 0041b2bc  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0041b2c4  e817fdffff           call 0x41afe0
// 0041b2c9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041b2cd  5e                   pop esi
// 0041b2ce  64890d00000000       mov dword ptr fs:[0], ecx
// 0041b2d5  83c410               add esp, 0x10
// 0041b2d8  c3                   ret 
// library rbxgs-raknet/ConnectionGraph.cpp (function ??1?$Map@USystemAddressAndGroupId@ConnectionGraph@@G$1??$defaultMapKeyComparison@USystemAddressAndGroupId@ConnectionGraph@@@DataStructures@@YAHABU12@0@Z@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ConnectionGraph.cpp
