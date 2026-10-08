// from server: 100% by auto
// roc 2008-06 00571650  unit: RBX::Reflection::ClassDescriptor  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00571650
//
// 00571650  6aff                 push -1
// 00571652  6838027d00           push 0x7d0238
// 00571657  64a100000000         mov eax, dword ptr fs:[0]
// 0057165d  50                   push eax
// 0057165e  64892500000000       mov dword ptr fs:[0], esp
// 00571665  83ec08               sub esp, 8
// 00571668  8b542418             mov edx, dword ptr [esp + 0x18]
// 0057166c  56                   push esi
// 0057166d  51                   push ecx
// 0057166e  8964240c             mov dword ptr [esp + 0xc], esp
// 00571672  8964240c             mov dword ptr [esp + 0xc], esp
// 00571676  83ec20               sub esp, 0x20
// 00571679  8bc4                 mov eax, esp
// 0057167b  8bf1                 mov esi, ecx
// 0057167d  c70000000000         mov dword ptr [eax], 0
// 00571683  8b0a                 mov ecx, dword ptr [edx]
// 00571685  89742428             mov dword ptr [esp + 0x28], esi
// 00571689  8964242c             mov dword ptr [esp + 0x2c], esp
// 0057168d  85c9                 test ecx, ecx
// 0057168f  7415                 je 0x5716a6
// 00571691  8908                 mov dword ptr [eax], ecx
// 00571693  8b0a                 mov ecx, dword ptr [edx]
// 00571695  6a00                 push 0
// 00571697  83c008               add eax, 8
// 0057169a  83c208               add edx, 8
// 0057169d  50                   push eax
// 0057169e  52                   push edx
// 0057169f  8b11                 mov edx, dword ptr [ecx]
// 005716a1  ffd2                 call edx
// 005716a3  83c40c               add esp, 0xc
// 005716a6  8bce                 mov ecx, esi
// 005716a8  e853f7ffff           call 0x570e00
// 005716ad  8bce                 mov ecx, esi
// 005716af  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005716b7  e8e4610400           call 0x5b78a0
// 005716bc  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005716c0  894640               mov dword ptr [esi + 0x40], eax
// 005716c3  c6403501             mov byte ptr [eax + 0x35], 1
// 005716c7  8b4640               mov eax, dword ptr [esi + 0x40]
// 005716ca  894004               mov dword ptr [eax + 4], eax
// 005716cd  8b4640               mov eax, dword ptr [esi + 0x40]
// 005716d0  8900                 mov dword ptr [eax], eax
// 005716d2  8b4640               mov eax, dword ptr [esi + 0x40]
// 005716d5  894008               mov dword ptr [eax + 8], eax
// 005716d8  c7464400000000       mov dword ptr [esi + 0x44], 0
// 005716df  8bc6                 mov eax, esi
// 005716e1  64890d00000000       mov dword ptr fs:[0], ecx
// 005716e8  5e                   pop esi
// 005716e9  83c414               add esp, 0x14
// 005716ec  c20800               ret 8
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ??0?$_Tree@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@std@@QAE@ABV?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@boost@@ABV?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
