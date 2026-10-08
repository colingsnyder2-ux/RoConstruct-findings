// roc 2009-06 0041add0  unit: rbx::signals::connection::slot  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0041add0
//
// 0041add0  6aff                 push -1
// 0041add2  6828e08400           push 0x84e028
// 0041add7  64a100000000         mov eax, dword ptr fs:[0]
// 0041addd  50                   push eax
// 0041adde  64892500000000       mov dword ptr fs:[0], esp
// 0041ade5  51                   push ecx
// 0041ade6  56                   push esi
// 0041ade7  8bf1                 mov esi, ecx
// 0041ade9  89742404             mov dword ptr [esp + 4], esi
// 0041aded  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0041adf5  e886ed1d00           call 0x5f9b80
// 0041adfa  8bce                 mov ecx, esi
// 0041adfc  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0041ae04  e817fdffff           call 0x41ab20
// 0041ae09  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041ae0d  5e                   pop esi
// 0041ae0e  64890d00000000       mov dword ptr fs:[0], ecx
// 0041ae15  83c410               add esp, 0x10
// 0041ae18  c3                   ret 
// library rbxgs-raknet/ConnectionGraph.cpp (function ??1?$Map@USystemAddressAndGroupId@ConnectionGraph@@G$1??$defaultMapKeyComparison@USystemAddressAndGroupId@ConnectionGraph@@@DataStructures@@YAHABU12@0@Z@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ConnectionGraph.cpp
