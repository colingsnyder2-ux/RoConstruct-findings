// from server: 100% by auto
// roc 2008-06 00570e00  unit: RBX::Reflection::ClassDescriptor  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00570e00
//
// 00570e00  6aff                 push -1
// 00570e02  68a0017d00           push 0x7d01a0
// 00570e07  64a100000000         mov eax, dword ptr fs:[0]
// 00570e0d  50                   push eax
// 00570e0e  64892500000000       mov dword ptr fs:[0], esp
// 00570e15  51                   push ecx
// 00570e16  56                   push esi
// 00570e17  8bf1                 mov esi, ecx
// 00570e19  89742404             mov dword ptr [esp + 4], esi
// 00570e1d  6a04                 push 4
// 00570e1f  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00570e27  e8f4fa1200           call 0x6a0920
// 00570e2c  83c404               add esp, 4
// 00570e2f  85c0                 test eax, eax
// 00570e31  7404                 je 0x570e37
// 00570e33  8930                 mov dword ptr [eax], esi
// 00570e35  eb02                 jmp 0x570e39
// 00570e37  33c0                 xor eax, eax
// 00570e39  8906                 mov dword ptr [esi], eax
// 00570e3b  8b442418             mov eax, dword ptr [esp + 0x18]
// 00570e3f  c644241001           mov byte ptr [esp + 0x10], 1
// 00570e44  c7460800000000       mov dword ptr [esi + 8], 0
// 00570e4b  85c0                 test eax, eax
// 00570e4d  7419                 je 0x570e68
// 00570e4f  6a00                 push 0
// 00570e51  8d4e10               lea ecx, [esi + 0x10]
// 00570e54  51                   push ecx
// 00570e55  8d542428             lea edx, [esp + 0x28]
// 00570e59  894608               mov dword ptr [esi + 8], eax
// 00570e5c  8b00                 mov eax, dword ptr [eax]
// 00570e5e  52                   push edx
// 00570e5f  ffd0                 call eax
// 00570e61  8b442424             mov eax, dword ptr [esp + 0x24]
// 00570e65  83c40c               add esp, 0xc
// 00570e68  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00570e70  85c0                 test eax, eax
// 00570e72  7415                 je 0x570e89
// 00570e74  8b00                 mov eax, dword ptr [eax]
// 00570e76  85c0                 test eax, eax
// 00570e78  740f                 je 0x570e89
// 00570e7a  8d4c2420             lea ecx, [esp + 0x20]
// 00570e7e  6a01                 push 1
// 00570e80  51                   push ecx
// 00570e81  8bd1                 mov edx, ecx
// 00570e83  52                   push edx
// 00570e84  ffd0                 call eax
// 00570e86  83c40c               add esp, 0xc
// 00570e89  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00570e8d  8bc6                 mov eax, esi
// 00570e8f  5e                   pop esi
// 00570e90  64890d00000000       mov dword ptr fs:[0], ecx
// 00570e97  83c410               add esp, 0x10
// 00570e9a  c22400               ret 0x24
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ??0?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@QAE@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@boost@@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
