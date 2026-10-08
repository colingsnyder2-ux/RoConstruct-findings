// roc 2008-06 0063c870  unit: RBX::VSeat::?$FactoryProduct  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063c870
//
// 0063c870  8b442404             mov eax, dword ptr [esp + 4]
// 0063c874  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0063c878  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0063c87c  83ec10               sub esp, 0x10
// 0063c87f  8908                 mov dword ptr [eax], ecx
// 0063c881  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0063c885  56                   push esi
// 0063c886  8b742424             mov esi, dword ptr [esp + 0x24]
// 0063c88a  895004               mov dword ptr [eax + 4], edx
// 0063c88d  8b542428             mov edx, dword ptr [esp + 0x28]
// 0063c891  897008               mov dword ptr [eax + 8], esi
// 0063c894  89480c               mov dword ptr [eax + 0xc], ecx
// 0063c897  895010               mov dword ptr [eax + 0x10], edx
// 0063c89a  5e                   pop esi
// 0063c89b  83c410               add esp, 0x10
// 0063c89e  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$bind@XVFlagStand@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@PAV12@V?$arg@$00@4@@boost@@YA?AV?$bind_t@XV?$mf1@XVFlagStand@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@PAVFlagStand@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@0@P8FlagStand@RBX@@AEXV?$shared_ptr@VInstance@RBX@@@0@@ZPAV34@V?$arg@$00@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
