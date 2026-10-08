// roc 2007-03 0061b290  unit: seg_00610000  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0061b290
//
// 0061b290  6aff                 push -1
// 0061b292  6868dc7500           push 0x75dc68
// 0061b297  64a100000000         mov eax, dword ptr fs:[0]
// 0061b29d  50                   push eax
// 0061b29e  64892500000000       mov dword ptr fs:[0], esp
// 0061b2a5  83ec08               sub esp, 8
// 0061b2a8  56                   push esi
// 0061b2a9  57                   push edi
// 0061b2aa  8b442434             mov eax, dword ptr [esp + 0x34]
// 0061b2ae  83ec10               sub esp, 0x10
// 0061b2b1  8bf4                 mov esi, esp
// 0061b2b3  89642418             mov dword ptr [esp + 0x18], esp
// 0061b2b7  50                   push eax
// 0061b2b8  83ec0c               sub esp, 0xc
// 0061b2bb  8d542448             lea edx, [esp + 0x48]
// 0061b2bf  89642454             mov dword ptr [esp + 0x54], esp
// 0061b2c3  8bcc                 mov ecx, esp
// 0061b2c5  52                   push edx
// 0061b2c6  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0061b2ce  e8dde8ffff           call 0x619bb0
// 0061b2d3  56                   push esi
// 0061b2d4  e877efffff           call 0x61a250
// 0061b2d9  8b442448             mov eax, dword ptr [esp + 0x48]
// 0061b2dd  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0061b2e1  83c414               add esp, 0x14
// 0061b2e4  50                   push eax
// 0061b2e5  51                   push ecx
// 0061b2e6  e825fdffff           call 0x61b010
// 0061b2eb  83c418               add esp, 0x18
// 0061b2ee  8bf0                 mov esi, eax
// 0061b2f0  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0061b2f4  8b10                 mov edx, dword ptr [eax]
// 0061b2f6  50                   push eax
// 0061b2f7  8d4c242c             lea ecx, [esp + 0x2c]
// 0061b2fb  51                   push ecx
// 0061b2fc  52                   push edx
// 0061b2fd  8bf9                 mov edi, ecx
// 0061b2ff  57                   push edi
// 0061b300  8d542418             lea edx, [esp + 0x18]
// 0061b304  52                   push edx
// 0061b305  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0061b30d  e8aee2ffff           call 0x6195c0
// 0061b312  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0061b316  50                   push eax
// 0061b317  e8d42d0000           call 0x61e0f0
// 0061b31c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0061b320  83c404               add esp, 4
// 0061b323  5f                   pop edi
// 0061b324  8bc6                 mov eax, esi
// 0061b326  64890d00000000       mov dword ptr fs:[0], ecx
// 0061b32d  5e                   pop esi
// 0061b32e  83c414               add esp, 0x14
// 0061b331  c3                   ret 
// library rbxgs-net/Player.cpp (function ??$split@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@U?$is_any_ofF@D@detail@algorithm@boost@@@algorithm@boost@@YAAAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AAV23@AAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@U?$is_any_ofF@D@detail@01@W4token_compress_mode_type@01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
