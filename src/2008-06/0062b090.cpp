// roc 2008-06 0062b090  unit: RBX::Explosion  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062b090
//
// 0062b090  51                   push ecx
// 0062b091  8d44244c             lea eax, [esp + 0x4c]
// 0062b095  50                   push eax
// 0062b096  8d4c2410             lea ecx, [esp + 0x10]
// 0062b09a  e8b1ffddff           call 0x40b050
// 0062b09f  84c0                 test al, al
// 0062b0a1  7577                 jne 0x62b11a
// 0062b0a3  56                   push esi
// 0062b0a4  8b3590288000         mov esi, dword ptr [0x802890]
// 0062b0aa  8d9b00000000         lea ebx, [ebx]
// 0062b0b0  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0062b0b4  803900               cmp byte ptr [ecx], 0
// 0062b0b7  7545                 jne 0x62b0fe
// 0062b0b9  8b442420             mov eax, dword ptr [esp + 0x20]
// 0062b0bd  85c0                 test eax, eax
// 0062b0bf  750a                 jne 0x62b0cb
// 0062b0c1  ffd6                 call esi
// 0062b0c3  8b442420             mov eax, dword ptr [esp + 0x20]
// 0062b0c7  85c0                 test eax, eax
// 0062b0c9  7404                 je 0x62b0cf
// 0062b0cb  8b00                 mov eax, dword ptr [eax]
// 0062b0cd  eb02                 jmp 0x62b0d1
// 0062b0cf  33c0                 xor eax, eax
// 0062b0d1  8b542424             mov edx, dword ptr [esp + 0x24]
// 0062b0d5  3b5014               cmp edx, dword ptr [eax + 0x14]
// 0062b0d8  7502                 jne 0x62b0dc
// 0062b0da  ffd6                 call esi
// 0062b0dc  8b442424             mov eax, dword ptr [esp + 0x24]
// 0062b0e0  83c008               add eax, 8
// 0062b0e3  50                   push eax
// 0062b0e4  8d4c240b             lea ecx, [esp + 0xb]
// 0062b0e8  51                   push ecx
// 0062b0e9  8d4c2450             lea ecx, [esp + 0x50]
// 0062b0ed  e8fef1ffff           call 0x62a2f0
// 0062b0f2  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0062b0f6  803800               cmp byte ptr [eax], 0
// 0062b0f9  7503                 jne 0x62b0fe
// 0062b0fb  c60001               mov byte ptr [eax], 1
// 0062b0fe  8d4c2410             lea ecx, [esp + 0x10]
// 0062b102  e8c9ede6ff           call 0x499ed0
// 0062b107  8d542450             lea edx, [esp + 0x50]
// 0062b10b  52                   push edx
// 0062b10c  8d4c2414             lea ecx, [esp + 0x14]
// 0062b110  e83bffddff           call 0x40b050
// 0062b115  84c0                 test al, al
// 0062b117  7497                 je 0x62b0b0
// 0062b119  5e                   pop esi
// 0062b11a  8b442408             mov eax, dword ptr [esp + 8]
// 0062b11e  59                   pop ecx
// 0062b11f  c28400               ret 0x84
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?RV?$slot_call_iterator@U?$caller@V?$shared_ptr@VInstance@RBX@@@boost@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@?$call_bound1@X@detail@signals@boost@@Vnamed_slot_map_iterator@345@@detail@signals@boost@@@?$last_value@X@boost@@QBE?AUunusable@01@V?$slot_call_iterator@U?$caller@V?$shared_ptr@VInstance@RBX@@@boost@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@?$call_bound1@X@detail@signals@boost@@Vnamed_slot_map_iterator@345@@detail@signals@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8tree/Instance.cpp
