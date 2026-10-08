// roc 2007-03 00554090  unit: seg_00550000  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00554090
//
// 00554090  6aff                 push -1
// 00554092  68c83f7500           push 0x753fc8
// 00554097  64a100000000         mov eax, dword ptr fs:[0]
// 0055409d  50                   push eax
// 0055409e  64892500000000       mov dword ptr fs:[0], esp
// 005540a5  51                   push ecx
// 005540a6  56                   push esi
// 005540a7  8bf1                 mov esi, ecx
// 005540a9  89742404             mov dword ptr [esp + 4], esi
// 005540ad  8d4e1c               lea ecx, [esi + 0x1c]
// 005540b0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005540b8  ff158ce77700         call dword ptr [0x77e78c]
// 005540be  8bce                 mov ecx, esi
// 005540c0  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005540c8  ff158ce77700         call dword ptr [0x77e78c]
// 005540ce  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005540d2  5e                   pop esi
// 005540d3  64890d00000000       mov dword ptr fs:[0], ecx
// 005540da  83c410               add esp, 0x10
// 005540dd  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??1?$char_separator@DU?$char_traits@D@std@@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
