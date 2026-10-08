// roc 2011-06 006fd1e0  unit: RBX::VFlagStandService::?$FactoryProduct  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006fd1e0
//
// 006fd1e0  83ec18               sub esp, 0x18
// 006fd1e3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006fd1e7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006fd1eb  8b542424             mov edx, dword ptr [esp + 0x24]
// 006fd1ef  890424               mov dword ptr [esp], eax
// 006fd1f2  8b442428             mov eax, dword ptr [esp + 0x28]
// 006fd1f6  8944240c             mov dword ptr [esp + 0xc], eax
// 006fd1fa  894c2404             mov dword ptr [esp + 4], ecx
// 006fd1fe  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006fd202  89542408             mov dword ptr [esp + 8], edx
// 006fd206  8b542430             mov edx, dword ptr [esp + 0x30]
// 006fd20a  8d0424               lea eax, [esp]
// 006fd20d  50                   push eax
// 006fd20e  894c2414             mov dword ptr [esp + 0x14], ecx
// 006fd212  89542418             mov dword ptr [esp + 0x18], edx
// 006fd216  e865750000           call 0x704780
// 006fd21b  83c404               add esp, 4
// 006fd21e  84c0                 test al, al
// 006fd220  7538                 jne 0x6fd25a
// 006fd222  8b442434             mov eax, dword ptr [esp + 0x34]
// 006fd226  85c0                 test eax, eax
// 006fd228  7428                 je 0x6fd252
// 006fd22a  8b0c24               mov ecx, dword ptr [esp]
// 006fd22d  8b542404             mov edx, dword ptr [esp + 4]
// 006fd231  8908                 mov dword ptr [eax], ecx
// 006fd233  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006fd237  895004               mov dword ptr [eax + 4], edx
// 006fd23a  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006fd23e  894808               mov dword ptr [eax + 8], ecx
// 006fd241  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006fd245  89500c               mov dword ptr [eax + 0xc], edx
// 006fd248  8b542414             mov edx, dword ptr [esp + 0x14]
// 006fd24c  894810               mov dword ptr [eax + 0x10], ecx
// 006fd24f  895014               mov dword ptr [eax + 0x14], edx
// 006fd252  b001                 mov al, 1
// 006fd254  83c418               add esp, 0x18
// 006fd257  c21c00               ret 0x1c
// 006fd25a  32c0                 xor al, al
// 006fd25c  83c418               add esp, 0x18
// 006fd25f  c21c00               ret 0x1c
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$assign_to@V?$bind_t@XV?$mf1@XVFlagStand@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@PAVFlagStand@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@@?$basic_vtable1@XV?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@X@std@@@function@detail@boost@@QAE_NV?$bind_t@XV?$mf1@XVFlagStand@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@PAVFlagStand@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@3@AATfunction_buffer@123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
