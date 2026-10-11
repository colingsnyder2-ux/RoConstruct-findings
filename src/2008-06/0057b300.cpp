// roc 2008-06 0057b300  unit: RBX::DataModel  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057b300
//
// 0057b300  51                   push ecx
// 0057b301  8d44244c             lea eax, [esp + 0x4c]
// 0057b305  50                   push eax
// 0057b306  8d4c2410             lea ecx, [esp + 0x10]
// 0057b30a  e841fde8ff           call 0x40b050
// 0057b30f  84c0                 test al, al
// 0057b311  7577                 jne 0x57b38a
// 0057b313  56                   push esi
// 0057b314  8b3590288000         mov esi, dword ptr [0x802890]
// 0057b31a  8d9b00000000         lea ebx, [ebx]
// 0057b320  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0057b324  803900               cmp byte ptr [ecx], 0
// 0057b327  7545                 jne 0x57b36e
// 0057b329  8b442420             mov eax, dword ptr [esp + 0x20]
// 0057b32d  85c0                 test eax, eax
// 0057b32f  750a                 jne 0x57b33b
// 0057b331  ffd6                 call esi
// 0057b333  8b442420             mov eax, dword ptr [esp + 0x20]
// 0057b337  85c0                 test eax, eax
// 0057b339  7404                 je 0x57b33f
// 0057b33b  8b00                 mov eax, dword ptr [eax]
// 0057b33d  eb02                 jmp 0x57b341
// 0057b33f  33c0                 xor eax, eax
// 0057b341  8b542424             mov edx, dword ptr [esp + 0x24]
// 0057b345  3b5014               cmp edx, dword ptr [eax + 0x14]
// 0057b348  7502                 jne 0x57b34c
// 0057b34a  ffd6                 call esi
// 0057b34c  8b442424             mov eax, dword ptr [esp + 0x24]
// 0057b350  83c008               add eax, 8
// 0057b353  50                   push eax
// 0057b354  8d4c240b             lea ecx, [esp + 0xb]
// 0057b358  51                   push ecx
// 0057b359  8d4c2450             lea ecx, [esp + 0x50]
// 0057b35d  e84effffff           call 0x57b2b0
// 0057b362  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0057b366  803800               cmp byte ptr [eax], 0
// 0057b369  7503                 jne 0x57b36e
// 0057b36b  c60001               mov byte ptr [eax], 1
// 0057b36e  8d4c2410             lea ecx, [esp + 0x10]
// 0057b372  e859ebf1ff           call 0x499ed0
// 0057b377  8d542450             lea edx, [esp + 0x50]
// 0057b37b  52                   push edx
// 0057b37c  8d4c2414             lea ecx, [esp + 0x14]
// 0057b380  e8cbfce8ff           call 0x40b050
// 0057b385  84c0                 test al, al
// 0057b387  7497                 je 0x57b320
// 0057b389  5e                   pop esi
// 0057b38a  8b442408             mov eax, dword ptr [esp + 8]
// 0057b38e  59                   pop ecx
// 0057b38f  c28400               ret 0x84
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?RV?$slot_call_iterator@U?$caller@V?$shared_ptr@VInstance@RBX@@@boost@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@?$call_bound1@X@detail@signals@boost@@Vnamed_slot_map_iterator@345@@detail@signals@boost@@@?$last_value@X@boost@@QBE?AUunusable@01@V?$slot_call_iterator@U?$caller@V?$shared_ptr@VInstance@RBX@@@boost@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@?$call_bound1@X@detail@signals@boost@@Vnamed_slot_map_iterator@345@@detail@signals@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8tree/Instance.cpp
