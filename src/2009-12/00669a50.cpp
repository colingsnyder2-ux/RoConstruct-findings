// roc 2009-12 00669a50  unit: RBX::VInstance::?$NonFactoryProduct  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00669a50
//
// 00669a50  6aff                 push -1
// 00669a52  6818a19400           push 0x94a118
// 00669a57  64a100000000         mov eax, dword ptr fs:[0]
// 00669a5d  50                   push eax
// 00669a5e  64892500000000       mov dword ptr fs:[0], esp
// 00669a65  51                   push ecx
// 00669a66  53                   push ebx
// 00669a67  56                   push esi
// 00669a68  8bf1                 mov esi, ecx
// 00669a6a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00669a6e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00669a72  33c0                 xor eax, eax
// 00669a74  89442414             mov dword ptr [esp + 0x14], eax
// 00669a78  88442408             mov byte ptr [esp + 8], al
// 00669a7c  8b442408             mov eax, dword ptr [esp + 8]
// 00669a80  50                   push eax
// 00669a81  51                   push ecx
// 00669a82  83ec20               sub esp, 0x20
// 00669a85  8bc4                 mov eax, esp
// 00669a87  8910                 mov dword ptr [eax], edx
// 00669a89  8d4804               lea ecx, [eax + 4]
// 00669a8c  8d442448             lea eax, [esp + 0x48]
// 00669a90  89642464             mov dword ptr [esp + 0x64], esp
// 00669a94  50                   push eax
// 00669a95  ff15f0b69800         call dword ptr [0x98b6f0]
// 00669a9b  8bce                 mov ecx, esi
// 00669a9d  e80ef3ffff           call 0x668db0
// 00669aa2  8d4c2420             lea ecx, [esp + 0x20]
// 00669aa6  8ad8                 mov bl, al
// 00669aa8  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00669ab0  ff15e4b69800         call dword ptr [0x98b6e4]
// 00669ab6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00669aba  5e                   pop esi
// 00669abb  8ac3                 mov al, bl
// 00669abd  64890d00000000       mov dword ptr fs:[0], ecx
// 00669ac4  5b                   pop ebx
// 00669ac5  83c410               add esp, 0x10
// 00669ac8  c22400               ret 0x24
// library rbxgs/v8datamodel\DataModel.cpp (function ??$assign_to@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@QAE_NV?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@3@AATfunction_buffer@123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
