// roc 2007-03 004b24a0  unit: seg_004b0000  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b24a0
//
// 004b24a0  6aff                 push -1
// 004b24a2  6878cc7400           push 0x74cc78
// 004b24a7  64a100000000         mov eax, dword ptr fs:[0]
// 004b24ad  50                   push eax
// 004b24ae  64892500000000       mov dword ptr fs:[0], esp
// 004b24b5  51                   push ecx
// 004b24b6  56                   push esi
// 004b24b7  8bf1                 mov esi, ecx
// 004b24b9  89742404             mov dword ptr [esp + 4], esi
// 004b24bd  8b4608               mov eax, dword ptr [esi + 8]
// 004b24c0  85c0                 test eax, eax
// 004b24c2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004b24ca  7426                 je 0x4b24f2
// 004b24cc  3d00020000           cmp eax, 0x200
// 004b24d1  7618                 jbe 0x4b24eb
// 004b24d3  8b06                 mov eax, dword ptr [esi]
// 004b24d5  50                   push eax
// 004b24d6  e815bc1600           call 0x61e0f0
// 004b24db  83c404               add esp, 4
// 004b24de  c7460800000000       mov dword ptr [esi + 8], 0
// 004b24e5  c70600000000         mov dword ptr [esi], 0
// 004b24eb  c7460400000000       mov dword ptr [esi + 4], 0
// 004b24f2  837e0800             cmp dword ptr [esi + 8], 0
// 004b24f6  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004b24fe  760b                 jbe 0x4b250b
// 004b2500  8b06                 mov eax, dword ptr [esi]
// 004b2502  50                   push eax
// 004b2503  e8e8bb1600           call 0x61e0f0
// 004b2508  83c404               add esp, 4
// 004b250b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b250f  5e                   pop esi
// 004b2510  64890d00000000       mov dword ptr fs:[0], ecx
// 004b2517  83c410               add esp, 0x10
// 004b251a  c3                   ret 
// library rbxgs-raknet/CommandParserInterface.cpp (function ??1?$OrderedList@PBDURegisteredCommand@@$1?RegisteredCommandComp@@YAHABQBDABU1@@Z@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet CommandParserInterface.cpp
