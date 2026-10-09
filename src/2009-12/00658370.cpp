// roc 2009-12 00658370  unit: RBX::VBasicPartInstance::?$SeatImpl  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00658370
//
// 00658370  83ec18               sub esp, 0x18
// 00658373  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00658377  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0065837b  8b542424             mov edx, dword ptr [esp + 0x24]
// 0065837f  890424               mov dword ptr [esp], eax
// 00658382  8b442428             mov eax, dword ptr [esp + 0x28]
// 00658386  8944240c             mov dword ptr [esp + 0xc], eax
// 0065838a  894c2404             mov dword ptr [esp + 4], ecx
// 0065838e  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00658392  89542408             mov dword ptr [esp + 8], edx
// 00658396  8b542430             mov edx, dword ptr [esp + 0x30]
// 0065839a  8d0424               lea eax, [esp]
// 0065839d  50                   push eax
// 0065839e  894c2414             mov dword ptr [esp + 0x14], ecx
// 006583a2  89542418             mov dword ptr [esp + 0x18], edx
// 006583a6  e8c5151000           call 0x759970
// 006583ab  83c404               add esp, 4
// 006583ae  84c0                 test al, al
// 006583b0  7538                 jne 0x6583ea
// 006583b2  8b442434             mov eax, dword ptr [esp + 0x34]
// 006583b6  85c0                 test eax, eax
// 006583b8  7428                 je 0x6583e2
// 006583ba  8b0c24               mov ecx, dword ptr [esp]
// 006583bd  8b542404             mov edx, dword ptr [esp + 4]
// 006583c1  8908                 mov dword ptr [eax], ecx
// 006583c3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006583c7  895004               mov dword ptr [eax + 4], edx
// 006583ca  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006583ce  894808               mov dword ptr [eax + 8], ecx
// 006583d1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006583d5  89500c               mov dword ptr [eax + 0xc], edx
// 006583d8  8b542414             mov edx, dword ptr [esp + 0x14]
// 006583dc  894810               mov dword ptr [eax + 0x10], ecx
// 006583df  895014               mov dword ptr [eax + 0x14], edx
// 006583e2  b001                 mov al, 1
// 006583e4  83c418               add esp, 0x18
// 006583e7  c21c00               ret 0x1c
// 006583ea  32c0                 xor al, al
// 006583ec  83c418               add esp, 0x18
// 006583ef  c21c00               ret 0x1c
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$assign_to@V?$bind_t@XV?$mf1@XVFlagStand@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@PAVFlagStand@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@@?$basic_vtable1@XV?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@X@std@@@function@detail@boost@@QAE_NV?$bind_t@XV?$mf1@XVFlagStand@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@PAVFlagStand@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@3@AATfunction_buffer@123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
