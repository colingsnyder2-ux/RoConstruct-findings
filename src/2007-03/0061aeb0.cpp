// roc 2007-03 0061aeb0  unit: seg_00610000  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0061aeb0
//
// 0061aeb0  6aff                 push -1
// 0061aeb2  6848db7500           push 0x75db48
// 0061aeb7  64a100000000         mov eax, dword ptr fs:[0]
// 0061aebd  50                   push eax
// 0061aebe  64892500000000       mov dword ptr fs:[0], esp
// 0061aec5  83ec08               sub esp, 8
// 0061aec8  56                   push esi
// 0061aec9  57                   push edi
// 0061aeca  8bf1                 mov esi, ecx
// 0061aecc  6a00                 push 0
// 0061aece  83ec10               sub esp, 0x10
// 0061aed1  8bfc                 mov edi, esp
// 0061aed3  8d442434             lea eax, [esp + 0x34]
// 0061aed7  8964241c             mov dword ptr [esp + 0x1c], esp
// 0061aedb  50                   push eax
// 0061aedc  8bcf                 mov ecx, edi
// 0061aede  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0061aee6  e8c5ecffff           call 0x619bb0
// 0061aeeb  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0061aeef  894f0c               mov dword ptr [edi + 0xc], ecx
// 0061aef2  8bce                 mov ecx, esi
// 0061aef4  e857feffff           call 0x61ad50
// 0061aef9  8b442424             mov eax, dword ptr [esp + 0x24]
// 0061aefd  8b10                 mov edx, dword ptr [eax]
// 0061aeff  50                   push eax
// 0061af00  8d4c2424             lea ecx, [esp + 0x24]
// 0061af04  51                   push ecx
// 0061af05  52                   push edx
// 0061af06  8bf9                 mov edi, ecx
// 0061af08  57                   push edi
// 0061af09  8d542418             lea edx, [esp + 0x18]
// 0061af0d  52                   push edx
// 0061af0e  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0061af16  e8a5e6ffff           call 0x6195c0
// 0061af1b  8b442424             mov eax, dword ptr [esp + 0x24]
// 0061af1f  50                   push eax
// 0061af20  e8cb310000           call 0x61e0f0
// 0061af25  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0061af29  83c404               add esp, 4
// 0061af2c  5f                   pop edi
// 0061af2d  8bc6                 mov eax, esi
// 0061af2f  64890d00000000       mov dword ptr fs:[0], ecx
// 0061af36  5e                   pop esi
// 0061af37  83c414               add esp, 0x14
// 0061af3a  c21400               ret 0x14
// library rbxgs-net/Player.cpp (function ??$?0U?$token_finderF@U?$is_any_ofF@D@detail@algorithm@boost@@@detail@algorithm@boost@@@?$find_iterator_base@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@detail@algorithm@boost@@IAE@U?$token_finderF@U?$is_any_ofF@D@detail@algorithm@boost@@@123@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
