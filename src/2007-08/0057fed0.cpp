// roc 2007-08 0057fed0  unit: RBX::Workspace  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057fed0
//
// 0057fed0  83ec44               sub esp, 0x44
// 0057fed3  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0057fed7  81f9e8030000         cmp ecx, 0x3e8
// 0057fedd  c7042400000000       mov dword ptr [esp], 0
// 0057fee4  7308                 jae 0x57feee
// 0057fee6  51                   push ecx
// 0057fee7  6860bf7a00           push 0x7abf60
// 0057feec  eb54                 jmp 0x57ff42
// 0057feee  81f940420f00         cmp ecx, 0xf4240
// 0057fef4  7317                 jae 0x57ff0d
// 0057fef6  b8d34d6210           mov eax, 0x10624dd3
// 0057fefb  f7e1                 mul ecx
// 0057fefd  c1ea06               shr edx, 6
// 0057ff00  52                   push edx
// 0057ff01  6858bf7a00           push 0x7abf58
// 0057ff06  8d4c240c             lea ecx, [esp + 0xc]
// 0057ff0a  51                   push ecx
// 0057ff0b  eb3a                 jmp 0x57ff47
// 0057ff0d  81f900ca9a3b         cmp ecx, 0x3b9aca00
// 0057ff13  7317                 jae 0x57ff2c
// 0057ff15  b883de1b43           mov eax, 0x431bde83
// 0057ff1a  f7e1                 mul ecx
// 0057ff1c  c1ea12               shr edx, 0x12
// 0057ff1f  52                   push edx
// 0057ff20  6850bf7a00           push 0x7abf50
// 0057ff25  8d54240c             lea edx, [esp + 0xc]
// 0057ff29  52                   push edx
// 0057ff2a  eb1b                 jmp 0x57ff47
// 0057ff2c  b883bee012           mov eax, 0x12e0be83
// 0057ff31  f7e1                 mul ecx
// 0057ff33  2bca                 sub ecx, edx
// 0057ff35  d1e9                 shr ecx, 1
// 0057ff37  03ca                 add ecx, edx
// 0057ff39  c1e91d               shr ecx, 0x1d
// 0057ff3c  51                   push ecx
// 0057ff3d  6848bf7a00           push 0x7abf48
// 0057ff42  8d44240c             lea eax, [esp + 0xc]
// 0057ff46  50                   push eax
// 0057ff47  ff1568e97700         call dword ptr [0x77e968]
// 0057ff4d  83c40c               add esp, 0xc
// 0057ff50  56                   push esi
// 0057ff51  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 0057ff55  8d4c2408             lea ecx, [esp + 8]
// 0057ff59  51                   push ecx
// 0057ff5a  8bce                 mov ecx, esi
// 0057ff5c  ff1598e67700         call dword ptr [0x77e698]
// 0057ff62  8bc6                 mov eax, esi
// 0057ff64  5e                   pop esi
// 0057ff65  83c444               add esp, 0x44
// 0057ff68  c3                   ret 
// library openrbx-client/App\util\Log.cpp (function ?formatMem@Log@RBX@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Log.cpp
