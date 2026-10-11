// roc 2008-06 005bde30  unit: RBX::Soundscape::SoundService  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bde30
//
// 005bde30  51                   push ecx
// 005bde31  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005bde35  803800               cmp byte ptr [eax], 0
// 005bde38  c7042400000000       mov dword ptr [esp], 0
// 005bde3f  b894ba8100           mov eax, 0x81ba94
// 005bde44  7505                 jne 0x5bde4b
// 005bde46  b81ce28100           mov eax, 0x81e21c
// 005bde4b  56                   push esi
// 005bde4c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005bde50  50                   push eax
// 005bde51  8bce                 mov ecx, esi
// 005bde53  ff1558248000         call dword ptr [0x802458]
// 005bde59  8bc6                 mov eax, esi
// 005bde5b  5e                   pop esi
// 005bde5c  59                   pop ecx
// 005bde5d  c3                   ret 
// library openrbx-client/App\util\Utilities.cpp (function ?convertToString@?$StringConverter@_N@RBX@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AB_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Utilities.cpp
