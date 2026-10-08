// roc 2009-06 005fcd50  unit: RBX::VInstance::$$A6AXV?$shared_ptr::?$signal::Vslot::?$sp_counted_impl_p  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005fcd50
//
// 005fcd50  51                   push ecx
// 005fcd51  56                   push esi
// 005fcd52  33c0                 xor eax, eax
// 005fcd54  89442404             mov dword ptr [esp + 4], eax
// 005fcd58  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005fcd5c  50                   push eax
// 005fcd5d  88442408             mov byte ptr [esp + 8], al
// 005fcd61  8b542408             mov edx, dword ptr [esp + 8]
// 005fcd65  8d442410             lea eax, [esp + 0x10]
// 005fcd69  50                   push eax
// 005fcd6a  51                   push ecx
// 005fcd6b  52                   push edx
// 005fcd6c  56                   push esi
// 005fcd6d  83c104               add ecx, 4
// 005fcd70  e8bbf8ffff           call 0x5fc630
// 005fcd75  8bc6                 mov eax, esi
// 005fcd77  5e                   pop esi
// 005fcd78  59                   pop ecx
// 005fcd79  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ??R?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
