// roc 2008-06 004952f0  unit: RBX::VRunService::?$SignalDesc  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004952f0
//
// 004952f0  6aff                 push -1
// 004952f2  6808697c00           push 0x7c6908
// 004952f7  64a100000000         mov eax, dword ptr fs:[0]
// 004952fd  50                   push eax
// 004952fe  64892500000000       mov dword ptr fs:[0], esp
// 00495305  51                   push ecx
// 00495306  56                   push esi
// 00495307  8b442440             mov eax, dword ptr [esp + 0x40]
// 0049530b  83ec24               sub esp, 0x24
// 0049530e  8bf4                 mov esi, esp
// 00495310  89642428             mov dword ptr [esp + 0x28], esp
// 00495314  50                   push eax
// 00495315  83ec20               sub esp, 0x20
// 00495318  8d542468             lea edx, [esp + 0x68]
// 0049531c  89a42488000000       mov dword ptr [esp + 0x88], esp
// 00495323  8bcc                 mov ecx, esp
// 00495325  52                   push edx
// 00495326  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 0049532e  e80d81ffff           call 0x48d440
// 00495333  56                   push esi
// 00495334  e8d7cdffff           call 0x492110
// 00495339  8b442468             mov eax, dword ptr [esp + 0x68]
// 0049533d  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00495341  83c428               add esp, 0x28
// 00495344  50                   push eax
// 00495345  51                   push ecx
// 00495346  e855fdffff           call 0x4950a0
// 0049534b  83c42c               add esp, 0x2c
// 0049534e  8d4c2420             lea ecx, [esp + 0x20]
// 00495352  8bf0                 mov esi, eax
// 00495354  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0049535c  e83f84ffff           call 0x48d7a0
// 00495361  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00495365  8bc6                 mov eax, esi
// 00495367  64890d00000000       mov dword ptr fs:[0], ecx
// 0049536e  5e                   pop esi
// 0049536f  83c410               add esp, 0x10
// 00495372  c3                   ret 
// library rbxgs/roc_descriptor_receiver_native_family_bd34d89f6d6c7dad.cpp (function ??$split@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@U?$is_any_ofF@D@detail@algorithm@boost@@@algorithm@boost@@YAAAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AAV23@AAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@U?$is_any_ofF@D@detail@01@W4token_compress_mode_type@01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_descriptor_receiver_native_family_bd34d89f6d6c7dad.cpp
