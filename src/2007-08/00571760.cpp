// roc 2007-08 00571760  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00571760
//
// 00571760  6aff                 push -1
// 00571762  68416e7500           push 0x756e41
// 00571767  64a100000000         mov eax, dword ptr fs:[0]
// 0057176d  50                   push eax
// 0057176e  64892500000000       mov dword ptr fs:[0], esp
// 00571775  51                   push ecx
// 00571776  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057177a  89442414             mov dword ptr [esp + 0x14], eax
// 0057177e  890424               mov dword ptr [esp], eax
// 00571781  85c0                 test eax, eax
// 00571783  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0057178b  7414                 je 0x5717a1
// 0057178d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00571791  8b11                 mov edx, dword ptr [ecx]
// 00571793  83c104               add ecx, 4
// 00571796  51                   push ecx
// 00571797  8d4804               lea ecx, [eax + 4]
// 0057179a  8910                 mov dword ptr [eax], edx
// 0057179c  e8aff7ffff           call 0x570f50
// 005717a1  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005717a5  64890d00000000       mov dword ptr fs:[0], ecx
// 005717ac  83c410               add esp, 0x10
// 005717af  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??$_Construct@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@0@ZV?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@@_bi@boost@@V123@@std@@YAXPAV?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@0@ZV?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@@_bi@boost@@ABV123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
