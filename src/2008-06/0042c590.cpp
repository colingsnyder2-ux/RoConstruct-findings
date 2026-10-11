// roc 2008-06 0042c590  unit: CLuaHtmlView::Binder  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042c590
//
// 0042c590  51                   push ecx
// 0042c591  8d44244c             lea eax, [esp + 0x4c]
// 0042c595  50                   push eax
// 0042c596  8d4c2410             lea ecx, [esp + 0x10]
// 0042c59a  e8b1eafdff           call 0x40b050
// 0042c59f  84c0                 test al, al
// 0042c5a1  7577                 jne 0x42c61a
// 0042c5a3  56                   push esi
// 0042c5a4  8b3590288000         mov esi, dword ptr [0x802890]
// 0042c5aa  8d9b00000000         lea ebx, [ebx]
// 0042c5b0  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0042c5b4  803900               cmp byte ptr [ecx], 0
// 0042c5b7  7545                 jne 0x42c5fe
// 0042c5b9  8b442420             mov eax, dword ptr [esp + 0x20]
// 0042c5bd  85c0                 test eax, eax
// 0042c5bf  750a                 jne 0x42c5cb
// 0042c5c1  ffd6                 call esi
// 0042c5c3  8b442420             mov eax, dword ptr [esp + 0x20]
// 0042c5c7  85c0                 test eax, eax
// 0042c5c9  7404                 je 0x42c5cf
// 0042c5cb  8b00                 mov eax, dword ptr [eax]
// 0042c5cd  eb02                 jmp 0x42c5d1
// 0042c5cf  33c0                 xor eax, eax
// 0042c5d1  8b542424             mov edx, dword ptr [esp + 0x24]
// 0042c5d5  3b5014               cmp edx, dword ptr [eax + 0x14]
// 0042c5d8  7502                 jne 0x42c5dc
// 0042c5da  ffd6                 call esi
// 0042c5dc  8b442424             mov eax, dword ptr [esp + 0x24]
// 0042c5e0  83c008               add eax, 8
// 0042c5e3  50                   push eax
// 0042c5e4  8d4c240b             lea ecx, [esp + 0xb]
// 0042c5e8  51                   push ecx
// 0042c5e9  8d4c2450             lea ecx, [esp + 0x50]
// 0042c5ed  e80eebffff           call 0x42b100
// 0042c5f2  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0042c5f6  803800               cmp byte ptr [eax], 0
// 0042c5f9  7503                 jne 0x42c5fe
// 0042c5fb  c60001               mov byte ptr [eax], 1
// 0042c5fe  8d4c2410             lea ecx, [esp + 0x10]
// 0042c602  e8c9d80600           call 0x499ed0
// 0042c607  8d542450             lea edx, [esp + 0x50]
// 0042c60b  52                   push edx
// 0042c60c  8d4c2414             lea ecx, [esp + 0x14]
// 0042c610  e83beafdff           call 0x40b050
// 0042c615  84c0                 test al, al
// 0042c617  7497                 je 0x42c5b0
// 0042c619  5e                   pop esi
// 0042c61a  8b442408             mov eax, dword ptr [esp + 8]
// 0042c61e  59                   pop ecx
// 0042c61f  c28400               ret 0x84
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?RV?$slot_call_iterator@U?$caller@V?$shared_ptr@VInstance@RBX@@@boost@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@?$call_bound1@X@detail@signals@boost@@Vnamed_slot_map_iterator@345@@detail@signals@boost@@@?$last_value@X@boost@@QBE?AUunusable@01@V?$slot_call_iterator@U?$caller@V?$shared_ptr@VInstance@RBX@@@boost@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@?$call_bound1@X@detail@signals@boost@@Vnamed_slot_map_iterator@345@@detail@signals@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8tree/Instance.cpp
