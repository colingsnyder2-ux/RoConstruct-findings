// roc 2012-06 0072c3c0  unit: RBX::VHat::?$FactoryProduct  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0072c3c0
//
// 0072c3c0  83ec18               sub esp, 0x18
// 0072c3c3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0072c3c7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0072c3cb  8b542424             mov edx, dword ptr [esp + 0x24]
// 0072c3cf  890424               mov dword ptr [esp], eax
// 0072c3d2  8b442428             mov eax, dword ptr [esp + 0x28]
// 0072c3d6  8944240c             mov dword ptr [esp + 0xc], eax
// 0072c3da  894c2404             mov dword ptr [esp + 4], ecx
// 0072c3de  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0072c3e2  89542408             mov dword ptr [esp + 8], edx
// 0072c3e6  8b542430             mov edx, dword ptr [esp + 0x30]
// 0072c3ea  8d0424               lea eax, [esp]
// 0072c3ed  50                   push eax
// 0072c3ee  894c2414             mov dword ptr [esp + 0x14], ecx
// 0072c3f2  89542418             mov dword ptr [esp + 0x18], edx
// 0072c3f6  e8354b1500           call 0x880f30
// 0072c3fb  83c404               add esp, 4
// 0072c3fe  84c0                 test al, al
// 0072c400  7538                 jne 0x72c43a
// 0072c402  8b442434             mov eax, dword ptr [esp + 0x34]
// 0072c406  85c0                 test eax, eax
// 0072c408  7428                 je 0x72c432
// 0072c40a  8b0c24               mov ecx, dword ptr [esp]
// 0072c40d  8b542404             mov edx, dword ptr [esp + 4]
// 0072c411  8908                 mov dword ptr [eax], ecx
// 0072c413  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0072c417  895004               mov dword ptr [eax + 4], edx
// 0072c41a  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0072c41e  894808               mov dword ptr [eax + 8], ecx
// 0072c421  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0072c425  89500c               mov dword ptr [eax + 0xc], edx
// 0072c428  8b542414             mov edx, dword ptr [esp + 0x14]
// 0072c42c  894810               mov dword ptr [eax + 0x10], ecx
// 0072c42f  895014               mov dword ptr [eax + 0x14], edx
// 0072c432  b001                 mov al, 1
// 0072c434  83c418               add esp, 0x18
// 0072c437  c21c00               ret 0x1c
// 0072c43a  32c0                 xor al, al
// 0072c43c  83c418               add esp, 0x18
// 0072c43f  c21c00               ret 0x1c
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$assign_to@V?$bind_t@XV?$mf1@XVFlagStand@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@PAVFlagStand@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@@?$basic_vtable1@XV?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@X@std@@@function@detail@boost@@QAE_NV?$bind_t@XV?$mf1@XVFlagStand@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@PAVFlagStand@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@3@AATfunction_buffer@123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
