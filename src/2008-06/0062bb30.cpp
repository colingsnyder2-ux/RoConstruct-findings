// roc 2008-06 0062bb30  unit: RBX::VExplosion::?$SignalDesc  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062bb30
//
// 0062bb30  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0062bb34  85c0                 test eax, eax
// 0062bb36  752f                 jne 0x62bb67
// 0062bb38  8b442408             mov eax, dword ptr [esp + 8]
// 0062bb3c  85c0                 test eax, eax
// 0062bb3e  744c                 je 0x62bb8c
// 0062bb40  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0062bb44  8b11                 mov edx, dword ptr [ecx]
// 0062bb46  8910                 mov dword ptr [eax], edx
// 0062bb48  8b5104               mov edx, dword ptr [ecx + 4]
// 0062bb4b  895004               mov dword ptr [eax + 4], edx
// 0062bb4e  8b5108               mov edx, dword ptr [ecx + 8]
// 0062bb51  895008               mov dword ptr [eax + 8], edx
// 0062bb54  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0062bb57  89500c               mov dword ptr [eax + 0xc], edx
// 0062bb5a  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0062bb5d  895010               mov dword ptr [eax + 0x10], edx
// 0062bb60  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 0062bb63  894814               mov dword ptr [eax + 0x14], ecx
// 0062bb66  c3                   ret 
// 0062bb67  83f801               cmp eax, 1
// 0062bb6a  7420                 je 0x62bb8c
// 0062bb6c  56                   push esi
// 0062bb6d  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0062bb71  8b0e                 mov ecx, dword ptr [esi]
// 0062bb73  6840bf9500           push 0x95bf40
// 0062bb78  ff1578288000         call dword ptr [0x802878]
// 0062bb7e  0fb6d0               movzx edx, al
// 0062bb81  f7da                 neg edx
// 0062bb83  1bd2                 sbb edx, edx
// 0062bb85  23542408             and edx, dword ptr [esp + 8]
// 0062bb89  8916                 mov dword ptr [esi], edx
// 0062bb8b  5e                   pop esi
// 0062bb8c  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ?manager@?$functor_manager@V?$bind_t@XV?$mf1@XVFlagStand@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@PAVFlagStand@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@V?$allocator@X@std@@@function@detail@boost@@CAXABTfunction_buffer@234@AAT5234@W4functor_manager_operation_type@234@U?$bool_@$00@mpl@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
