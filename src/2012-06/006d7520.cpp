// roc 2012-06 006d7520  unit: boost::io::Vtoo_few_args::U?$error_info_injector::?$clone_impl  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006d7520
//
// 006d7520  6aff                 push -1
// 006d7522  6828b3ab00           push 0xabb328
// 006d7527  64a100000000         mov eax, dword ptr fs:[0]
// 006d752d  50                   push eax
// 006d752e  64892500000000       mov dword ptr fs:[0], esp
// 006d7535  51                   push ecx
// 006d7536  56                   push esi
// 006d7537  8bf1                 mov esi, ecx
// 006d7539  8d442418             lea eax, [esp + 0x18]
// 006d753d  50                   push eax
// 006d753e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006d7546  e8e5991a00           call 0x880f30
// 006d754b  83c404               add esp, 4
// 006d754e  84c0                 test al, al
// 006d7550  7559                 jne 0x6d75ab
// 006d7552  8b542454             mov edx, dword ptr [esp + 0x54]
// 006d7556  88442404             mov byte ptr [esp + 4], al
// 006d755a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006d755e  51                   push ecx
// 006d755f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006d7563  52                   push edx
// 006d7564  83ec3c               sub esp, 0x3c
// 006d7567  8bc4                 mov eax, esp
// 006d7569  8d542460             lea edx, [esp + 0x60]
// 006d756d  89a42498000000       mov dword ptr [esp + 0x98], esp
// 006d7574  8908                 mov dword ptr [eax], ecx
// 006d7576  8d4804               lea ecx, [eax + 4]
// 006d7579  52                   push edx
// 006d757a  e891a5ffff           call 0x6d1b10
// 006d757f  8bce                 mov ecx, esi
// 006d7581  e8caecffff           call 0x6d6250
// 006d7586  8d4c241c             lea ecx, [esp + 0x1c]
// 006d758a  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006d7592  e87999ffff           call 0x6d0f10
// 006d7597  b001                 mov al, 1
// 006d7599  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006d759d  64890d00000000       mov dword ptr fs:[0], ecx
// 006d75a4  5e                   pop esi
// 006d75a5  83c410               add esp, 0x10
// 006d75a8  c24400               ret 0x44
// 006d75ab  8d4c241c             lea ecx, [esp + 0x1c]
// 006d75af  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006d75b7  e85499ffff           call 0x6d0f10
// 006d75bc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006d75c0  32c0                 xor al, al
// 006d75c2  64890d00000000       mov dword ptr fs:[0], ecx
// 006d75c9  5e                   pop esi
// 006d75ca  83c410               add esp, 0x10
// 006d75cd  c24400               ret 0x44
// library rbxgs/v8datamodel\DataModel.cpp (function ??$assign_to@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@0@ZV?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@AAE_NV?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@0@ZV?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@@_bi@3@AATfunction_buffer@123@Ufunction_obj_tag@123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
