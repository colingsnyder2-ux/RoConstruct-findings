// roc 2011-06 005ecd70  unit: boost::io::Vtoo_many_args::U?$error_info_injector::?$clone_impl  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005ecd70
//
// 005ecd70  6aff                 push -1
// 005ecd72  6808e49e00           push 0x9ee408
// 005ecd77  64a100000000         mov eax, dword ptr fs:[0]
// 005ecd7d  50                   push eax
// 005ecd7e  64892500000000       mov dword ptr fs:[0], esp
// 005ecd85  51                   push ecx
// 005ecd86  53                   push ebx
// 005ecd87  56                   push esi
// 005ecd88  8bf1                 mov esi, ecx
// 005ecd8a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005ecd8e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005ecd92  33c0                 xor eax, eax
// 005ecd94  89442414             mov dword ptr [esp + 0x14], eax
// 005ecd98  88442408             mov byte ptr [esp + 8], al
// 005ecd9c  8b442408             mov eax, dword ptr [esp + 8]
// 005ecda0  50                   push eax
// 005ecda1  51                   push ecx
// 005ecda2  83ec20               sub esp, 0x20
// 005ecda5  8bc4                 mov eax, esp
// 005ecda7  8910                 mov dword ptr [eax], edx
// 005ecda9  8d4804               lea ecx, [eax + 4]
// 005ecdac  8d442448             lea eax, [esp + 0x48]
// 005ecdb0  89642464             mov dword ptr [esp + 0x64], esp
// 005ecdb4  50                   push eax
// 005ecdb5  ff15c804a400         call dword ptr [0xa404c8]
// 005ecdbb  8bce                 mov ecx, esi
// 005ecdbd  e8eef3ffff           call 0x5ec1b0
// 005ecdc2  8d4c2420             lea ecx, [esp + 0x20]
// 005ecdc6  8ad8                 mov bl, al
// 005ecdc8  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005ecdd0  ff15d004a400         call dword ptr [0xa404d0]
// 005ecdd6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ecdda  5e                   pop esi
// 005ecddb  8ac3                 mov al, bl
// 005ecddd  64890d00000000       mov dword ptr fs:[0], ecx
// 005ecde4  5b                   pop ebx
// 005ecde5  83c410               add esp, 0x10
// 005ecde8  c22400               ret 0x24
// library rbxgs/v8datamodel\DataModel.cpp (function ??$assign_to@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@QAE_NV?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@3@AATfunction_buffer@123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
