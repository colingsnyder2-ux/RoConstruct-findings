// roc 2008-06 004a0860  unit: RBX::Network::VClient::?$BoundFuncDesc  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a0860
//
// 004a0860  51                   push ecx
// 004a0861  8d44244c             lea eax, [esp + 0x4c]
// 004a0865  50                   push eax
// 004a0866  8d4c2410             lea ecx, [esp + 0x10]
// 004a086a  e8e1a7f6ff           call 0x40b050
// 004a086f  84c0                 test al, al
// 004a0871  7577                 jne 0x4a08ea
// 004a0873  56                   push esi
// 004a0874  8b3590288000         mov esi, dword ptr [0x802890]
// 004a087a  8d9b00000000         lea ebx, [ebx]
// 004a0880  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 004a0884  803900               cmp byte ptr [ecx], 0
// 004a0887  7545                 jne 0x4a08ce
// 004a0889  8b442420             mov eax, dword ptr [esp + 0x20]
// 004a088d  85c0                 test eax, eax
// 004a088f  750a                 jne 0x4a089b
// 004a0891  ffd6                 call esi
// 004a0893  8b442420             mov eax, dword ptr [esp + 0x20]
// 004a0897  85c0                 test eax, eax
// 004a0899  7404                 je 0x4a089f
// 004a089b  8b00                 mov eax, dword ptr [eax]
// 004a089d  eb02                 jmp 0x4a08a1
// 004a089f  33c0                 xor eax, eax
// 004a08a1  8b542424             mov edx, dword ptr [esp + 0x24]
// 004a08a5  3b5014               cmp edx, dword ptr [eax + 0x14]
// 004a08a8  7502                 jne 0x4a08ac
// 004a08aa  ffd6                 call esi
// 004a08ac  8b442424             mov eax, dword ptr [esp + 0x24]
// 004a08b0  83c008               add eax, 8
// 004a08b3  50                   push eax
// 004a08b4  8d4c240b             lea ecx, [esp + 0xb]
// 004a08b8  51                   push ecx
// 004a08b9  8d4c2450             lea ecx, [esp + 0x50]
// 004a08bd  e89eebffff           call 0x49f460
// 004a08c2  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 004a08c6  803800               cmp byte ptr [eax], 0
// 004a08c9  7503                 jne 0x4a08ce
// 004a08cb  c60001               mov byte ptr [eax], 1
// 004a08ce  8d4c2410             lea ecx, [esp + 0x10]
// 004a08d2  e8f995ffff           call 0x499ed0
// 004a08d7  8d542450             lea edx, [esp + 0x50]
// 004a08db  52                   push edx
// 004a08dc  8d4c2414             lea ecx, [esp + 0x14]
// 004a08e0  e86ba7f6ff           call 0x40b050
// 004a08e5  84c0                 test al, al
// 004a08e7  7497                 je 0x4a0880
// 004a08e9  5e                   pop esi
// 004a08ea  8b442408             mov eax, dword ptr [esp + 8]
// 004a08ee  59                   pop ecx
// 004a08ef  c28400               ret 0x84
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?RV?$slot_call_iterator@U?$caller@V?$shared_ptr@VInstance@RBX@@@boost@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@?$call_bound1@X@detail@signals@boost@@Vnamed_slot_map_iterator@345@@detail@signals@boost@@@?$last_value@X@boost@@QBE?AUunusable@01@V?$slot_call_iterator@U?$caller@V?$shared_ptr@VInstance@RBX@@@boost@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@?$call_bound1@X@detail@signals@boost@@Vnamed_slot_map_iterator@345@@detail@signals@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8tree/Instance.cpp
