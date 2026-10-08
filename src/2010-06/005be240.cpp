// roc 2010-06 005be240  unit: RBX::VSeat::?$FactoryProduct  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005be240
//
// 005be240  83ec18               sub esp, 0x18
// 005be243  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005be247  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005be24b  8b542424             mov edx, dword ptr [esp + 0x24]
// 005be24f  890424               mov dword ptr [esp], eax
// 005be252  8b442428             mov eax, dword ptr [esp + 0x28]
// 005be256  8944240c             mov dword ptr [esp + 0xc], eax
// 005be25a  894c2404             mov dword ptr [esp + 4], ecx
// 005be25e  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005be262  89542408             mov dword ptr [esp + 8], edx
// 005be266  8b542430             mov edx, dword ptr [esp + 0x30]
// 005be26a  8d0424               lea eax, [esp]
// 005be26d  50                   push eax
// 005be26e  894c2414             mov dword ptr [esp + 0x14], ecx
// 005be272  89542418             mov dword ptr [esp + 0x18], edx
// 005be276  e8d5941300           call 0x6f7750
// 005be27b  83c404               add esp, 4
// 005be27e  84c0                 test al, al
// 005be280  7538                 jne 0x5be2ba
// 005be282  8b442434             mov eax, dword ptr [esp + 0x34]
// 005be286  85c0                 test eax, eax
// 005be288  7428                 je 0x5be2b2
// 005be28a  8b0c24               mov ecx, dword ptr [esp]
// 005be28d  8b542404             mov edx, dword ptr [esp + 4]
// 005be291  8908                 mov dword ptr [eax], ecx
// 005be293  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005be297  895004               mov dword ptr [eax + 4], edx
// 005be29a  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005be29e  894808               mov dword ptr [eax + 8], ecx
// 005be2a1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005be2a5  89500c               mov dword ptr [eax + 0xc], edx
// 005be2a8  8b542414             mov edx, dword ptr [esp + 0x14]
// 005be2ac  894810               mov dword ptr [eax + 0x10], ecx
// 005be2af  895014               mov dword ptr [eax + 0x14], edx
// 005be2b2  b001                 mov al, 1
// 005be2b4  83c418               add esp, 0x18
// 005be2b7  c21c00               ret 0x1c
// 005be2ba  32c0                 xor al, al
// 005be2bc  83c418               add esp, 0x18
// 005be2bf  c21c00               ret 0x1c
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$assign_to@V?$bind_t@XV?$mf1@XVFlagStand@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@PAVFlagStand@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@@?$basic_vtable1@XV?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@X@std@@@function@detail@boost@@QAE_NV?$bind_t@XV?$mf1@XVFlagStand@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@PAVFlagStand@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@3@AATfunction_buffer@123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
