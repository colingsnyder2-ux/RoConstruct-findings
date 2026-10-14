// roc 2010-06 005543b0  unit: seg_00550000  size: 235 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005543b0
//
// 005543b0  6aff                 push -1
// 005543b2  68a7119900           push 0x9911a7
// 005543b7  64a100000000         mov eax, dword ptr fs:[0]
// 005543bd  50                   push eax
// 005543be  64892500000000       mov dword ptr fs:[0], esp
// 005543c5  81ecd8000000         sub esp, 0xd8
// 005543cb  56                   push esi
// 005543cc  8bb424ec000000       mov esi, dword ptr [esp + 0xec]
// 005543d3  6a00                 push 0
// 005543d5  6a01                 push 1
// 005543d7  56                   push esi
// 005543d8  8d4c243c             lea ecx, [esp + 0x3c]
// 005543dc  e89f460000           call 0x558a80
// 005543e1  8b442468             mov eax, dword ptr [esp + 0x68]
// 005543e5  c78424e400000000000000 mov dword ptr [esp + 0xe4], 0
// 005543f0  85c0                 test eax, eax
// 005543f2  7f3b                 jg 0x55442f
// 005543f4  68b403a200           push 0xa203b4
// 005543f9  8d4c2418             lea ecx, [esp + 0x18]
// 005543fd  ff1510a49e00         call dword ptr [0x9ea410]
// 00554403  56                   push esi
// 00554404  8d442418             lea eax, [esp + 0x18]
// 00554408  50                   push eax
// 00554409  8d8c2484000000       lea ecx, [esp + 0x84]
// 00554410  c68424ec00000001     mov byte ptr [esp + 0xec], 1
// 00554418  e8e3f5f2ff           call 0x483a00
// 0055441d  6894edb000           push 0xb0ed94
// 00554422  8d8c2480000000       lea ecx, [esp + 0x80]
// 00554429  51                   push ecx
// 0055442a  e883452500           call 0x7a89b2
// 0055442f  837c246400           cmp dword ptr [esp + 0x64], 0
// 00554434  7626                 jbe 0x55445c
// 00554436  8d542404             lea edx, [esp + 4]
// 0055443a  52                   push edx
// 0055443b  8d4c240c             lea ecx, [esp + 0xc]
// 0055443f  c7442408f066a100     mov dword ptr [esp + 8], 0xa166f0
// 00554447  ff1524a99e00         call dword ptr [0x9ea924]
// 0055444d  6878b6b000           push 0xb0b678
// 00554452  8d44240c             lea eax, [esp + 0xc]
// 00554456  50                   push eax
// 00554457  e856452500           call 0x7a89b2
// 0055445c  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00554460  6a08                 push 8
// 00554462  50                   push eax
// 00554463  51                   push ecx
// 00554464  56                   push esi
// 00554465  e806f1ffff           call 0x553570
// 0055446a  83c410               add esp, 0x10
// 0055446d  8d4c2430             lea ecx, [esp + 0x30]
// 00554471  8bf0                 mov esi, eax
// 00554473  c78424e4000000ffffffff mov dword ptr [esp + 0xe4], 0xffffffff
// 0055447e  e83d480000           call 0x558cc0
// 00554483  8b8c24dc000000       mov ecx, dword ptr [esp + 0xdc]
// 0055448a  8bc6                 mov eax, esi
// 0055448c  5e                   pop esi
// 0055448d  64890d00000000       mov dword ptr fs:[0], ecx
// 00554494  81c4e4000000         add esp, 0xe4
// 0055449a  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\GImage.cpp (function ?resolveFormat@GImage@G3D@@SA?AW4Format@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage.cpp
