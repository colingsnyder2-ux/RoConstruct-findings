// roc 2009-06 005f3710  unit: RBX::VSeat::?$FactoryProduct  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005f3710
//
// 005f3710  83ec18               sub esp, 0x18
// 005f3713  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005f3717  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005f371b  8b542424             mov edx, dword ptr [esp + 0x24]
// 005f371f  890424               mov dword ptr [esp], eax
// 005f3722  8b442428             mov eax, dword ptr [esp + 0x28]
// 005f3726  8944240c             mov dword ptr [esp + 0xc], eax
// 005f372a  894c2404             mov dword ptr [esp + 4], ecx
// 005f372e  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005f3732  89542408             mov dword ptr [esp + 8], edx
// 005f3736  8b542430             mov edx, dword ptr [esp + 0x30]
// 005f373a  8d0424               lea eax, [esp]
// 005f373d  50                   push eax
// 005f373e  894c2414             mov dword ptr [esp + 0x14], ecx
// 005f3742  89542418             mov dword ptr [esp + 0x18], edx
// 005f3746  e865910400           call 0x63c8b0
// 005f374b  83c404               add esp, 4
// 005f374e  84c0                 test al, al
// 005f3750  7538                 jne 0x5f378a
// 005f3752  8b442434             mov eax, dword ptr [esp + 0x34]
// 005f3756  85c0                 test eax, eax
// 005f3758  7428                 je 0x5f3782
// 005f375a  8b0c24               mov ecx, dword ptr [esp]
// 005f375d  8b542404             mov edx, dword ptr [esp + 4]
// 005f3761  8908                 mov dword ptr [eax], ecx
// 005f3763  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f3767  895004               mov dword ptr [eax + 4], edx
// 005f376a  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005f376e  894808               mov dword ptr [eax + 8], ecx
// 005f3771  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f3775  89500c               mov dword ptr [eax + 0xc], edx
// 005f3778  8b542414             mov edx, dword ptr [esp + 0x14]
// 005f377c  894810               mov dword ptr [eax + 0x10], ecx
// 005f377f  895014               mov dword ptr [eax + 0x14], edx
// 005f3782  b001                 mov al, 1
// 005f3784  83c418               add esp, 0x18
// 005f3787  c21c00               ret 0x1c
// 005f378a  32c0                 xor al, al
// 005f378c  83c418               add esp, 0x18
// 005f378f  c21c00               ret 0x1c
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$assign_to@V?$bind_t@XV?$mf1@XVFlagStand@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@PAVFlagStand@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@@?$basic_vtable1@XV?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@X@std@@@function@detail@boost@@QAE_NV?$bind_t@XV?$mf1@XVFlagStand@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@PAVFlagStand@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@3@AATfunction_buffer@123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
