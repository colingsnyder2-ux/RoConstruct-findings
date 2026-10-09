// roc 2009-12 00668e60  unit: RBX::VInstance::?$NonFactoryProduct  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00668e60
//
// 00668e60  6aff                 push -1
// 00668e62  6888449400           push 0x944488
// 00668e67  64a100000000         mov eax, dword ptr fs:[0]
// 00668e6d  50                   push eax
// 00668e6e  64892500000000       mov dword ptr fs:[0], esp
// 00668e75  51                   push ecx
// 00668e76  56                   push esi
// 00668e77  8bf1                 mov esi, ecx
// 00668e79  8d442418             lea eax, [esp + 0x18]
// 00668e7d  50                   push eax
// 00668e7e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00668e86  e8e50a0f00           call 0x759970
// 00668e8b  83c404               add esp, 4
// 00668e8e  84c0                 test al, al
// 00668e90  7559                 jne 0x668eeb
// 00668e92  8b542454             mov edx, dword ptr [esp + 0x54]
// 00668e96  88442404             mov byte ptr [esp + 4], al
// 00668e9a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00668e9e  51                   push ecx
// 00668e9f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00668ea3  52                   push edx
// 00668ea4  83ec3c               sub esp, 0x3c
// 00668ea7  8bc4                 mov eax, esp
// 00668ea9  8d542460             lea edx, [esp + 0x60]
// 00668ead  89a42498000000       mov dword ptr [esp + 0x98], esp
// 00668eb4  8908                 mov dword ptr [eax], ecx
// 00668eb6  8d4804               lea ecx, [eax + 4]
// 00668eb9  52                   push edx
// 00668eba  e8c162fdff           call 0x63f180
// 00668ebf  8bce                 mov ecx, esi
// 00668ec1  e8faf3ffff           call 0x6682c0
// 00668ec6  8d4c241c             lea ecx, [esp + 0x1c]
// 00668eca  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00668ed2  e8e9a00900           call 0x702fc0
// 00668ed7  b001                 mov al, 1
// 00668ed9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00668edd  64890d00000000       mov dword ptr fs:[0], ecx
// 00668ee4  5e                   pop esi
// 00668ee5  83c410               add esp, 0x10
// 00668ee8  c24400               ret 0x44
// 00668eeb  8d4c241c             lea ecx, [esp + 0x1c]
// 00668eef  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00668ef7  e8c4a00900           call 0x702fc0
// 00668efc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00668f00  32c0                 xor al, al
// 00668f02  64890d00000000       mov dword ptr fs:[0], ecx
// 00668f09  5e                   pop esi
// 00668f0a  83c410               add esp, 0x10
// 00668f0d  c24400               ret 0x44
// library rbxgs/v8datamodel\DataModel.cpp (function ??$assign_to@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@0@ZV?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@AAE_NV?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@0@ZV?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@@_bi@3@AATfunction_buffer@123@Ufunction_obj_tag@123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
