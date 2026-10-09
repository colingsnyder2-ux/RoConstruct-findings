// roc 2009-12 00668db0  unit: RBX::VInstance::?$NonFactoryProduct  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00668db0
//
// 00668db0  6aff                 push -1
// 00668db2  6818a19400           push 0x94a118
// 00668db7  64a100000000         mov eax, dword ptr fs:[0]
// 00668dbd  50                   push eax
// 00668dbe  64892500000000       mov dword ptr fs:[0], esp
// 00668dc5  51                   push ecx
// 00668dc6  56                   push esi
// 00668dc7  8bf1                 mov esi, ecx
// 00668dc9  8d442418             lea eax, [esp + 0x18]
// 00668dcd  50                   push eax
// 00668dce  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00668dd6  e8950b0f00           call 0x759970
// 00668ddb  83c404               add esp, 4
// 00668dde  84c0                 test al, al
// 00668de0  7558                 jne 0x668e3a
// 00668de2  8b542438             mov edx, dword ptr [esp + 0x38]
// 00668de6  88442404             mov byte ptr [esp + 4], al
// 00668dea  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00668dee  51                   push ecx
// 00668def  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00668df3  52                   push edx
// 00668df4  83ec20               sub esp, 0x20
// 00668df7  8bc4                 mov eax, esp
// 00668df9  8d542444             lea edx, [esp + 0x44]
// 00668dfd  89642460             mov dword ptr [esp + 0x60], esp
// 00668e01  8908                 mov dword ptr [eax], ecx
// 00668e03  8d4804               lea ecx, [eax + 4]
// 00668e06  52                   push edx
// 00668e07  ff15f0b69800         call dword ptr [0x98b6f0]
// 00668e0d  8bce                 mov ecx, esi
// 00668e0f  e82cf4ffff           call 0x668240
// 00668e14  8d4c241c             lea ecx, [esp + 0x1c]
// 00668e18  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00668e20  ff15e4b69800         call dword ptr [0x98b6e4]
// 00668e26  b001                 mov al, 1
// 00668e28  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00668e2c  64890d00000000       mov dword ptr fs:[0], ecx
// 00668e33  5e                   pop esi
// 00668e34  83c410               add esp, 0x10
// 00668e37  c22800               ret 0x28
// 00668e3a  8d4c241c             lea ecx, [esp + 0x1c]
// 00668e3e  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00668e46  ff15e4b69800         call dword ptr [0x98b6e4]
// 00668e4c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00668e50  32c0                 xor al, al
// 00668e52  64890d00000000       mov dword ptr fs:[0], ecx
// 00668e59  5e                   pop esi
// 00668e5a  83c410               add esp, 0x10
// 00668e5d  c22800               ret 0x28
// library rbxgs/v8datamodel\DataModel.cpp (function ??$assign_to@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@AAE_NV?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@3@AATfunction_buffer@123@Ufunction_obj_tag@123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
