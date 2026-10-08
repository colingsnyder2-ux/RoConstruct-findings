// roc 2009-06 005fcd80  unit: RBX::VInstance::$$A6AXV?$shared_ptr::?$signal::Vslot::?$sp_counted_impl_p  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005fcd80
//
// 005fcd80  51                   push ecx
// 005fcd81  56                   push esi
// 005fcd82  33c0                 xor eax, eax
// 005fcd84  89442404             mov dword ptr [esp + 4], eax
// 005fcd88  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005fcd8c  50                   push eax
// 005fcd8d  88442408             mov byte ptr [esp + 8], al
// 005fcd91  8b542408             mov edx, dword ptr [esp + 8]
// 005fcd95  8d442410             lea eax, [esp + 0x10]
// 005fcd99  50                   push eax
// 005fcd9a  51                   push ecx
// 005fcd9b  52                   push edx
// 005fcd9c  56                   push esi
// 005fcd9d  83c104               add ecx, 4
// 005fcda0  e81bf9ffff           call 0x5fc6c0
// 005fcda5  8bc6                 mov eax, esi
// 005fcda7  5e                   pop esi
// 005fcda8  59                   pop ecx
// 005fcda9  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ??R?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
