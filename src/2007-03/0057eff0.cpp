// roc 2007-03 0057eff0  unit: seg_00570000  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057eff0
//
// 0057eff0  83ec44               sub esp, 0x44
// 0057eff3  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0057eff7  81f9e8030000         cmp ecx, 0x3e8
// 0057effd  c7042400000000       mov dword ptr [esp], 0
// 0057f004  7308                 jae 0x57f00e
// 0057f006  51                   push ecx
// 0057f007  68e8d87a00           push 0x7ad8e8
// 0057f00c  eb54                 jmp 0x57f062
// 0057f00e  81f940420f00         cmp ecx, 0xf4240
// 0057f014  7317                 jae 0x57f02d
// 0057f016  b8d34d6210           mov eax, 0x10624dd3
// 0057f01b  f7e1                 mul ecx
// 0057f01d  c1ea06               shr edx, 6
// 0057f020  52                   push edx
// 0057f021  68e0d87a00           push 0x7ad8e0
// 0057f026  8d4c240c             lea ecx, [esp + 0xc]
// 0057f02a  51                   push ecx
// 0057f02b  eb3a                 jmp 0x57f067
// 0057f02d  81f900ca9a3b         cmp ecx, 0x3b9aca00
// 0057f033  7317                 jae 0x57f04c
// 0057f035  b883de1b43           mov eax, 0x431bde83
// 0057f03a  f7e1                 mul ecx
// 0057f03c  c1ea12               shr edx, 0x12
// 0057f03f  52                   push edx
// 0057f040  68d8d87a00           push 0x7ad8d8
// 0057f045  8d54240c             lea edx, [esp + 0xc]
// 0057f049  52                   push edx
// 0057f04a  eb1b                 jmp 0x57f067
// 0057f04c  b883bee012           mov eax, 0x12e0be83
// 0057f051  f7e1                 mul ecx
// 0057f053  2bca                 sub ecx, edx
// 0057f055  d1e9                 shr ecx, 1
// 0057f057  03ca                 add ecx, edx
// 0057f059  c1e91d               shr ecx, 0x1d
// 0057f05c  51                   push ecx
// 0057f05d  68d0d87a00           push 0x7ad8d0
// 0057f062  8d44240c             lea eax, [esp + 0xc]
// 0057f066  50                   push eax
// 0057f067  ff15c8e97700         call dword ptr [0x77e9c8]
// 0057f06d  83c40c               add esp, 0xc
// 0057f070  56                   push esi
// 0057f071  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 0057f075  8d4c2408             lea ecx, [esp + 8]
// 0057f079  51                   push ecx
// 0057f07a  8bce                 mov ecx, esi
// 0057f07c  ff1578e77700         call dword ptr [0x77e778]
// 0057f082  8bc6                 mov eax, esi
// 0057f084  5e                   pop esi
// 0057f085  83c444               add esp, 0x44
// 0057f088  c3                   ret 
// library openrbx-client/App\util\Log.cpp (function ?formatMem@Log@RBX@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Log.cpp
