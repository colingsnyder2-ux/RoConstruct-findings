// roc 2008-06 0063bad0  unit: RBX::P8DebrisService::?$GetSetImpl  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063bad0
//
// 0063bad0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0063bad4  83f803               cmp eax, 3
// 0063bad7  741e                 je 0x63baf7
// 0063bad9  8b542408             mov edx, dword ptr [esp + 8]
// 0063badd  c644240c00           mov byte ptr [esp + 0xc], 0
// 0063bae2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0063bae6  51                   push ecx
// 0063bae7  50                   push eax
// 0063bae8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0063baec  52                   push edx
// 0063baed  50                   push eax
// 0063baee  e8adfdffff           call 0x63b8a0
// 0063baf3  83c410               add esp, 0x10
// 0063baf6  c3                   ret 
// 0063baf7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0063bafb  c701d0129600         mov dword ptr [ecx], 0x9612d0
// 0063bb01  c3                   ret 
// library rbxgs/v8datamodel\DebrisService.cpp (function ?manage@?$functor_manager@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@V?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@SAXABTfunction_buffer@234@AAT5234@W4functor_manager_operation_type@234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
