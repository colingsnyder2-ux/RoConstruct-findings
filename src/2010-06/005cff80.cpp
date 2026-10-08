// roc 2010-06 005cff80  unit: RBX::VInstance::?$NonFactoryProduct  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005cff80
//
// 005cff80  6aff                 push -1
// 005cff82  6888c99900           push 0x99c988
// 005cff87  64a100000000         mov eax, dword ptr fs:[0]
// 005cff8d  50                   push eax
// 005cff8e  64892500000000       mov dword ptr fs:[0], esp
// 005cff95  51                   push ecx
// 005cff96  56                   push esi
// 005cff97  8bf1                 mov esi, ecx
// 005cff99  8d442418             lea eax, [esp + 0x18]
// 005cff9d  50                   push eax
// 005cff9e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005cffa6  e8a5771200           call 0x6f7750
// 005cffab  83c404               add esp, 4
// 005cffae  84c0                 test al, al
// 005cffb0  7558                 jne 0x5d000a
// 005cffb2  8b542438             mov edx, dword ptr [esp + 0x38]
// 005cffb6  88442404             mov byte ptr [esp + 4], al
// 005cffba  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005cffbe  51                   push ecx
// 005cffbf  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005cffc3  52                   push edx
// 005cffc4  83ec20               sub esp, 0x20
// 005cffc7  8bc4                 mov eax, esp
// 005cffc9  8d542444             lea edx, [esp + 0x44]
// 005cffcd  89642460             mov dword ptr [esp + 0x60], esp
// 005cffd1  8908                 mov dword ptr [eax], ecx
// 005cffd3  8d4804               lea ecx, [eax + 4]
// 005cffd6  52                   push edx
// 005cffd7  ff150ca49e00         call dword ptr [0x9ea40c]
// 005cffdd  8bce                 mov ecx, esi
// 005cffdf  e8acf3ffff           call 0x5cf390
// 005cffe4  8d4c241c             lea ecx, [esp + 0x1c]
// 005cffe8  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005cfff0  ff1500a49e00         call dword ptr [0x9ea400]
// 005cfff6  b001                 mov al, 1
// 005cfff8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005cfffc  64890d00000000       mov dword ptr fs:[0], ecx
// 005d0003  5e                   pop esi
// 005d0004  83c410               add esp, 0x10
// 005d0007  c22800               ret 0x28
// 005d000a  8d4c241c             lea ecx, [esp + 0x1c]
// 005d000e  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005d0016  ff1500a49e00         call dword ptr [0x9ea400]
// 005d001c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d0020  32c0                 xor al, al
// 005d0022  64890d00000000       mov dword ptr fs:[0], ecx
// 005d0029  5e                   pop esi
// 005d002a  83c410               add esp, 0x10
// 005d002d  c22800               ret 0x28
// library rbxgs/v8datamodel\DataModel.cpp (function ??$assign_to@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@AAE_NV?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@3@AATfunction_buffer@123@Ufunction_obj_tag@123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
