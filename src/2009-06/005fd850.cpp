// roc 2009-06 005fd850  unit: RBX::VInstance::?$NonFactoryProduct  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005fd850
//
// 005fd850  6aff                 push -1
// 005fd852  6898678600           push 0x866798
// 005fd857  64a100000000         mov eax, dword ptr fs:[0]
// 005fd85d  50                   push eax
// 005fd85e  64892500000000       mov dword ptr fs:[0], esp
// 005fd865  51                   push ecx
// 005fd866  56                   push esi
// 005fd867  8bf1                 mov esi, ecx
// 005fd869  8d442418             lea eax, [esp + 0x18]
// 005fd86d  50                   push eax
// 005fd86e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005fd876  e835f00300           call 0x63c8b0
// 005fd87b  83c404               add esp, 4
// 005fd87e  84c0                 test al, al
// 005fd880  7559                 jne 0x5fd8db
// 005fd882  8b542454             mov edx, dword ptr [esp + 0x54]
// 005fd886  88442404             mov byte ptr [esp + 4], al
// 005fd88a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005fd88e  51                   push ecx
// 005fd88f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005fd893  52                   push edx
// 005fd894  83ec3c               sub esp, 0x3c
// 005fd897  8bc4                 mov eax, esp
// 005fd899  8d542460             lea edx, [esp + 0x60]
// 005fd89d  89a42498000000       mov dword ptr [esp + 0x98], esp
// 005fd8a4  8908                 mov dword ptr [eax], ecx
// 005fd8a6  8d4804               lea ecx, [eax + 4]
// 005fd8a9  52                   push edx
// 005fd8aa  e831ddffff           call 0x5fb5e0
// 005fd8af  8bce                 mov ecx, esi
// 005fd8b1  e83af6ffff           call 0x5fcef0
// 005fd8b6  8d4c241c             lea ecx, [esp + 0x1c]
// 005fd8ba  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005fd8c2  e869d6ffff           call 0x5faf30
// 005fd8c7  b001                 mov al, 1
// 005fd8c9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005fd8cd  64890d00000000       mov dword ptr fs:[0], ecx
// 005fd8d4  5e                   pop esi
// 005fd8d5  83c410               add esp, 0x10
// 005fd8d8  c24400               ret 0x44
// 005fd8db  8d4c241c             lea ecx, [esp + 0x1c]
// 005fd8df  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005fd8e7  e844d6ffff           call 0x5faf30
// 005fd8ec  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005fd8f0  32c0                 xor al, al
// 005fd8f2  64890d00000000       mov dword ptr fs:[0], ecx
// 005fd8f9  5e                   pop esi
// 005fd8fa  83c410               add esp, 0x10
// 005fd8fd  c24400               ret 0x44
// library rbxgs/v8datamodel\DataModel.cpp (function ??$assign_to@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@0@ZV?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@AAE_NV?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@0@ZV?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@@_bi@3@AATfunction_buffer@123@Ufunction_obj_tag@123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
