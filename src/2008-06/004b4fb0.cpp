// roc 2008-06 004b4fb0  unit: RBX::Network::Replicator::DeleteInstanceItem  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b4fb0
//
// 004b4fb0  51                   push ecx
// 004b4fb1  8d44244c             lea eax, [esp + 0x4c]
// 004b4fb5  50                   push eax
// 004b4fb6  8d4c2410             lea ecx, [esp + 0x10]
// 004b4fba  e89160f5ff           call 0x40b050
// 004b4fbf  84c0                 test al, al
// 004b4fc1  7577                 jne 0x4b503a
// 004b4fc3  56                   push esi
// 004b4fc4  8b3590288000         mov esi, dword ptr [0x802890]
// 004b4fca  8d9b00000000         lea ebx, [ebx]
// 004b4fd0  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 004b4fd4  803900               cmp byte ptr [ecx], 0
// 004b4fd7  7545                 jne 0x4b501e
// 004b4fd9  8b442420             mov eax, dword ptr [esp + 0x20]
// 004b4fdd  85c0                 test eax, eax
// 004b4fdf  750a                 jne 0x4b4feb
// 004b4fe1  ffd6                 call esi
// 004b4fe3  8b442420             mov eax, dword ptr [esp + 0x20]
// 004b4fe7  85c0                 test eax, eax
// 004b4fe9  7404                 je 0x4b4fef
// 004b4feb  8b00                 mov eax, dword ptr [eax]
// 004b4fed  eb02                 jmp 0x4b4ff1
// 004b4fef  33c0                 xor eax, eax
// 004b4ff1  8b542424             mov edx, dword ptr [esp + 0x24]
// 004b4ff5  3b5014               cmp edx, dword ptr [eax + 0x14]
// 004b4ff8  7502                 jne 0x4b4ffc
// 004b4ffa  ffd6                 call esi
// 004b4ffc  8b442424             mov eax, dword ptr [esp + 0x24]
// 004b5000  83c008               add eax, 8
// 004b5003  50                   push eax
// 004b5004  8d4c240b             lea ecx, [esp + 0xb]
// 004b5008  51                   push ecx
// 004b5009  8d4c2450             lea ecx, [esp + 0x50]
// 004b500d  e84e87ffff           call 0x4ad760
// 004b5012  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 004b5016  803800               cmp byte ptr [eax], 0
// 004b5019  7503                 jne 0x4b501e
// 004b501b  c60001               mov byte ptr [eax], 1
// 004b501e  8d4c2410             lea ecx, [esp + 0x10]
// 004b5022  e8a94efeff           call 0x499ed0
// 004b5027  8d542450             lea edx, [esp + 0x50]
// 004b502b  52                   push edx
// 004b502c  8d4c2414             lea ecx, [esp + 0x14]
// 004b5030  e81b60f5ff           call 0x40b050
// 004b5035  84c0                 test al, al
// 004b5037  7497                 je 0x4b4fd0
// 004b5039  5e                   pop esi
// 004b503a  8b442408             mov eax, dword ptr [esp + 8]
// 004b503e  59                   pop ecx
// 004b503f  c28400               ret 0x84
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?RV?$slot_call_iterator@U?$caller@V?$shared_ptr@VInstance@RBX@@@boost@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@?$call_bound1@X@detail@signals@boost@@Vnamed_slot_map_iterator@345@@detail@signals@boost@@@?$last_value@X@boost@@QBE?AUunusable@01@V?$slot_call_iterator@U?$caller@V?$shared_ptr@VInstance@RBX@@@boost@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@?$call_bound1@X@detail@signals@boost@@Vnamed_slot_map_iterator@345@@detail@signals@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
