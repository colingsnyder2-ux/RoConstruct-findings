// roc 2007-03 00592590  unit: seg_00590000  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00592590
//
// 00592590  6aff                 push -1
// 00592592  68587d7500           push 0x757d58
// 00592597  64a100000000         mov eax, dword ptr fs:[0]
// 0059259d  50                   push eax
// 0059259e  64892500000000       mov dword ptr fs:[0], esp
// 005925a5  51                   push ecx
// 005925a6  56                   push esi
// 005925a7  57                   push edi
// 005925a8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005925ac  8bf1                 mov esi, ecx
// 005925ae  57                   push edi
// 005925af  8974240c             mov dword ptr [esp + 0xc], esi
// 005925b3  e818f2ffff           call 0x5917d0
// 005925b8  8b4744               mov eax, dword ptr [edi + 0x44]
// 005925bb  894644               mov dword ptr [esi + 0x44], eax
// 005925be  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 005925c1  894e48               mov dword ptr [esi + 0x48], ecx
// 005925c4  8b574c               mov edx, dword ptr [edi + 0x4c]
// 005925c7  89564c               mov dword ptr [esi + 0x4c], edx
// 005925ca  8b4750               mov eax, dword ptr [edi + 0x50]
// 005925cd  894650               mov dword ptr [esi + 0x50], eax
// 005925d0  8a4f54               mov cl, byte ptr [edi + 0x54]
// 005925d3  83c758               add edi, 0x58
// 005925d6  884e54               mov byte ptr [esi + 0x54], cl
// 005925d9  57                   push edi
// 005925da  8d4e58               lea ecx, [esi + 0x58]
// 005925dd  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005925e5  ff157ce77700         call dword ptr [0x77e77c]
// 005925eb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005925ef  5f                   pop edi
// 005925f0  8bc6                 mov eax, esi
// 005925f2  5e                   pop esi
// 005925f3  64890d00000000       mov dword ptr fs:[0], ecx
// 005925fa  83c410               add esp, 0x10
// 005925fd  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ??0?$token_iterator@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
