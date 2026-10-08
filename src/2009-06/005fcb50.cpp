// roc 2009-06 005fcb50  unit: RBX::VInstance::$$A6AXV?$shared_ptr::?$signal::Vslot::?$sp_counted_impl_p  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005fcb50
//
// 005fcb50  6aff                 push -1
// 005fcb52  68da668600           push 0x8666da
// 005fcb57  64a100000000         mov eax, dword ptr fs:[0]
// 005fcb5d  50                   push eax
// 005fcb5e  64892500000000       mov dword ptr fs:[0], esp
// 005fcb65  83ec24               sub esp, 0x24
// 005fcb68  56                   push esi
// 005fcb69  c744240400000000     mov dword ptr [esp + 4], 0
// 005fcb71  83ec1c               sub esp, 0x1c
// 005fcb74  8d44245c             lea eax, [esp + 0x5c]
// 005fcb78  89642424             mov dword ptr [esp + 0x24], esp
// 005fcb7c  8bcc                 mov ecx, esp
// 005fcb7e  50                   push eax
// 005fcb7f  c744245001000000     mov dword ptr [esp + 0x50], 1
// 005fcb87  ff15b8e48900         call dword ptr [0x89e4b8]
// 005fcb8d  8d4c2428             lea ecx, [esp + 0x28]
// 005fcb91  e8aaeaffff           call 0x5fb640
// 005fcb96  8b742438             mov esi, dword ptr [esp + 0x38]
// 005fcb9a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005fcb9e  890e                 mov dword ptr [esi], ecx
// 005fcba0  8d4e04               lea ecx, [esi + 4]
// 005fcba3  50                   push eax
// 005fcba4  c644243402           mov byte ptr [esp + 0x34], 2
// 005fcba9  ff15b8e48900         call dword ptr [0x89e4b8]
// 005fcbaf  8d4c240c             lea ecx, [esp + 0xc]
// 005fcbb3  c744240401000000     mov dword ptr [esp + 4], 1
// 005fcbbb  c644243001           mov byte ptr [esp + 0x30], 1
// 005fcbc0  ff15c4e48900         call dword ptr [0x89e4c4]
// 005fcbc6  8d4c2440             lea ecx, [esp + 0x40]
// 005fcbca  c644243000           mov byte ptr [esp + 0x30], 0
// 005fcbcf  ff15c4e48900         call dword ptr [0x89e4c4]
// 005fcbd5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005fcbd9  8bc6                 mov eax, esi
// 005fcbdb  64890d00000000       mov dword ptr fs:[0], ecx
// 005fcbe2  5e                   pop esi
// 005fcbe3  83c430               add esp, 0x30
// 005fcbe6  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??$bind@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@V12@@boost@@YA?AV?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@0@P6A?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V34@@Z0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
