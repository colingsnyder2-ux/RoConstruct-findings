// roc 2008-06 0049c4f0  unit: RBX::Network::VPlayers::?$BoundFuncDesc  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049c4f0
//
// 0049c4f0  51                   push ecx
// 0049c4f1  8d44244c             lea eax, [esp + 0x4c]
// 0049c4f5  50                   push eax
// 0049c4f6  8d4c2410             lea ecx, [esp + 0x10]
// 0049c4fa  e851ebf6ff           call 0x40b050
// 0049c4ff  84c0                 test al, al
// 0049c501  7577                 jne 0x49c57a
// 0049c503  56                   push esi
// 0049c504  8b3590288000         mov esi, dword ptr [0x802890]
// 0049c50a  8d9b00000000         lea ebx, [ebx]
// 0049c510  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0049c514  803900               cmp byte ptr [ecx], 0
// 0049c517  7545                 jne 0x49c55e
// 0049c519  8b442420             mov eax, dword ptr [esp + 0x20]
// 0049c51d  85c0                 test eax, eax
// 0049c51f  750a                 jne 0x49c52b
// 0049c521  ffd6                 call esi
// 0049c523  8b442420             mov eax, dword ptr [esp + 0x20]
// 0049c527  85c0                 test eax, eax
// 0049c529  7404                 je 0x49c52f
// 0049c52b  8b00                 mov eax, dword ptr [eax]
// 0049c52d  eb02                 jmp 0x49c531
// 0049c52f  33c0                 xor eax, eax
// 0049c531  8b542424             mov edx, dword ptr [esp + 0x24]
// 0049c535  3b5014               cmp edx, dword ptr [eax + 0x14]
// 0049c538  7502                 jne 0x49c53c
// 0049c53a  ffd6                 call esi
// 0049c53c  8b442424             mov eax, dword ptr [esp + 0x24]
// 0049c540  83c008               add eax, 8
// 0049c543  50                   push eax
// 0049c544  8d4c240b             lea ecx, [esp + 0xb]
// 0049c548  51                   push ecx
// 0049c549  8d4c2450             lea ecx, [esp + 0x50]
// 0049c54d  e89eaeffff           call 0x4973f0
// 0049c552  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0049c556  803800               cmp byte ptr [eax], 0
// 0049c559  7503                 jne 0x49c55e
// 0049c55b  c60001               mov byte ptr [eax], 1
// 0049c55e  8d4c2410             lea ecx, [esp + 0x10]
// 0049c562  e869d9ffff           call 0x499ed0
// 0049c567  8d542450             lea edx, [esp + 0x50]
// 0049c56b  52                   push edx
// 0049c56c  8d4c2414             lea ecx, [esp + 0x14]
// 0049c570  e8dbeaf6ff           call 0x40b050
// 0049c575  84c0                 test al, al
// 0049c577  7497                 je 0x49c510
// 0049c579  5e                   pop esi
// 0049c57a  8b442408             mov eax, dword ptr [esp + 8]
// 0049c57e  59                   pop ecx
// 0049c57f  c28400               ret 0x84
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?RV?$slot_call_iterator@U?$caller@V?$shared_ptr@VInstance@RBX@@@boost@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@?$call_bound1@X@detail@signals@boost@@Vnamed_slot_map_iterator@345@@detail@signals@boost@@@?$last_value@X@boost@@QBE?AUunusable@01@V?$slot_call_iterator@U?$caller@V?$shared_ptr@VInstance@RBX@@@boost@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@?$call_bound1@X@detail@signals@boost@@Vnamed_slot_map_iterator@345@@detail@signals@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
