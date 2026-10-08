// roc 2010-06 005d0030  unit: RBX::VInstance::?$NonFactoryProduct  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005d0030
//
// 005d0030  6aff                 push -1
// 005d0032  6868699900           push 0x996968
// 005d0037  64a100000000         mov eax, dword ptr fs:[0]
// 005d003d  50                   push eax
// 005d003e  64892500000000       mov dword ptr fs:[0], esp
// 005d0045  51                   push ecx
// 005d0046  56                   push esi
// 005d0047  8bf1                 mov esi, ecx
// 005d0049  8d442418             lea eax, [esp + 0x18]
// 005d004d  50                   push eax
// 005d004e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005d0056  e8f5761200           call 0x6f7750
// 005d005b  83c404               add esp, 4
// 005d005e  84c0                 test al, al
// 005d0060  7559                 jne 0x5d00bb
// 005d0062  8b542454             mov edx, dword ptr [esp + 0x54]
// 005d0066  88442404             mov byte ptr [esp + 4], al
// 005d006a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005d006e  51                   push ecx
// 005d006f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005d0073  52                   push edx
// 005d0074  83ec3c               sub esp, 0x3c
// 005d0077  8bc4                 mov eax, esp
// 005d0079  8d542460             lea edx, [esp + 0x60]
// 005d007d  89a42498000000       mov dword ptr [esp + 0x98], esp
// 005d0084  8908                 mov dword ptr [eax], ecx
// 005d0086  8d4804               lea ecx, [eax + 4]
// 005d0089  52                   push edx
// 005d008a  e8b143edff           call 0x4a4440
// 005d008f  8bce                 mov ecx, esi
// 005d0091  e87af3ffff           call 0x5cf410
// 005d0096  8d4c241c             lea ecx, [esp + 0x1c]
// 005d009a  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005d00a2  e8b932edff           call 0x4a3360
// 005d00a7  b001                 mov al, 1
// 005d00a9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d00ad  64890d00000000       mov dword ptr fs:[0], ecx
// 005d00b4  5e                   pop esi
// 005d00b5  83c410               add esp, 0x10
// 005d00b8  c24400               ret 0x44
// 005d00bb  8d4c241c             lea ecx, [esp + 0x1c]
// 005d00bf  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005d00c7  e89432edff           call 0x4a3360
// 005d00cc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d00d0  32c0                 xor al, al
// 005d00d2  64890d00000000       mov dword ptr fs:[0], ecx
// 005d00d9  5e                   pop esi
// 005d00da  83c410               add esp, 0x10
// 005d00dd  c24400               ret 0x44
// library rbxgs/v8datamodel\DataModel.cpp (function ??$assign_to@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@0@ZV?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@AAE_NV?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@0@ZV?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@@_bi@3@AATfunction_buffer@123@Ufunction_obj_tag@123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
