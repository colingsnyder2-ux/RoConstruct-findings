// roc 2007-03 004f53b0  unit: seg_004f0000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f53b0
//
// 004f53b0  56                   push esi
// 004f53b1  8bf1                 mov esi, ecx
// 004f53b3  e838000000           call 0x4f53f0
// 004f53b8  8b442408             mov eax, dword ptr [esp + 8]
// 004f53bc  83781810             cmp dword ptr [eax + 0x18], 0x10
// 004f53c0  7205                 jb 0x4f53c7
// 004f53c2  8b4004               mov eax, dword ptr [eax + 4]
// 004f53c5  eb03                 jmp 0x4f53ca
// 004f53c7  83c004               add eax, 4
// 004f53ca  50                   push eax
// 004f53cb  8b4604               mov eax, dword ptr [esi + 4]
// 004f53ce  68c8f47900           push 0x79f4c8
// 004f53d3  50                   push eax
// 004f53d4  ff15ece87700         call dword ptr [0x77e8ec]
// 004f53da  83c40c               add esp, 0xc
// 004f53dd  5e                   pop esi
// 004f53de  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\Log.cpp (function ?println@Log@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/Log.cpp
