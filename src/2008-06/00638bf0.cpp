// roc 2008-06 00638bf0  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00638bf0
//
// 00638bf0  51                   push ecx
// 00638bf1  8d44244c             lea eax, [esp + 0x4c]
// 00638bf5  50                   push eax
// 00638bf6  8d4c2410             lea ecx, [esp + 0x10]
// 00638bfa  e85124ddff           call 0x40b050
// 00638bff  84c0                 test al, al
// 00638c01  7577                 jne 0x638c7a
// 00638c03  56                   push esi
// 00638c04  8b3590288000         mov esi, dword ptr [0x802890]
// 00638c0a  8d9b00000000         lea ebx, [ebx]
// 00638c10  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00638c14  803900               cmp byte ptr [ecx], 0
// 00638c17  7545                 jne 0x638c5e
// 00638c19  8b442420             mov eax, dword ptr [esp + 0x20]
// 00638c1d  85c0                 test eax, eax
// 00638c1f  750a                 jne 0x638c2b
// 00638c21  ffd6                 call esi
// 00638c23  8b442420             mov eax, dword ptr [esp + 0x20]
// 00638c27  85c0                 test eax, eax
// 00638c29  7404                 je 0x638c2f
// 00638c2b  8b00                 mov eax, dword ptr [eax]
// 00638c2d  eb02                 jmp 0x638c31
// 00638c2f  33c0                 xor eax, eax
// 00638c31  8b542424             mov edx, dword ptr [esp + 0x24]
// 00638c35  3b5014               cmp edx, dword ptr [eax + 0x14]
// 00638c38  7502                 jne 0x638c3c
// 00638c3a  ffd6                 call esi
// 00638c3c  8b442424             mov eax, dword ptr [esp + 0x24]
// 00638c40  83c008               add eax, 8
// 00638c43  50                   push eax
// 00638c44  8d4c240b             lea ecx, [esp + 0xb]
// 00638c48  51                   push ecx
// 00638c49  8d4c2450             lea ecx, [esp + 0x50]
// 00638c4d  e8aeaaffff           call 0x633700
// 00638c52  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00638c56  803800               cmp byte ptr [eax], 0
// 00638c59  7503                 jne 0x638c5e
// 00638c5b  c60001               mov byte ptr [eax], 1
// 00638c5e  8d4c2410             lea ecx, [esp + 0x10]
// 00638c62  e86912e6ff           call 0x499ed0
// 00638c67  8d542450             lea edx, [esp + 0x50]
// 00638c6b  52                   push edx
// 00638c6c  8d4c2414             lea ecx, [esp + 0x14]
// 00638c70  e8db23ddff           call 0x40b050
// 00638c75  84c0                 test al, al
// 00638c77  7497                 je 0x638c10
// 00638c79  5e                   pop esi
// 00638c7a  8b442408             mov eax, dword ptr [esp + 8]
// 00638c7e  59                   pop ecx
// 00638c7f  c28400               ret 0x84
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?RV?$slot_call_iterator@U?$caller@V?$shared_ptr@VInstance@RBX@@@boost@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@?$call_bound1@X@detail@signals@boost@@Vnamed_slot_map_iterator@345@@detail@signals@boost@@@?$last_value@X@boost@@QBE?AUunusable@01@V?$slot_call_iterator@U?$caller@V?$shared_ptr@VInstance@RBX@@@boost@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@?$call_bound1@X@detail@signals@boost@@Vnamed_slot_map_iterator@345@@detail@signals@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
