// roc 2010-06 005d07a0  unit: RBX::VInstance::?$NonFactoryProduct  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005d07a0
//
// 005d07a0  6aff                 push -1
// 005d07a2  6888c99900           push 0x99c988
// 005d07a7  64a100000000         mov eax, dword ptr fs:[0]
// 005d07ad  50                   push eax
// 005d07ae  64892500000000       mov dword ptr fs:[0], esp
// 005d07b5  51                   push ecx
// 005d07b6  53                   push ebx
// 005d07b7  56                   push esi
// 005d07b8  8bf1                 mov esi, ecx
// 005d07ba  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005d07be  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005d07c2  33c0                 xor eax, eax
// 005d07c4  89442414             mov dword ptr [esp + 0x14], eax
// 005d07c8  88442408             mov byte ptr [esp + 8], al
// 005d07cc  8b442408             mov eax, dword ptr [esp + 8]
// 005d07d0  50                   push eax
// 005d07d1  51                   push ecx
// 005d07d2  83ec20               sub esp, 0x20
// 005d07d5  8bc4                 mov eax, esp
// 005d07d7  8910                 mov dword ptr [eax], edx
// 005d07d9  8d4804               lea ecx, [eax + 4]
// 005d07dc  8d442448             lea eax, [esp + 0x48]
// 005d07e0  89642464             mov dword ptr [esp + 0x64], esp
// 005d07e4  50                   push eax
// 005d07e5  ff150ca49e00         call dword ptr [0x9ea40c]
// 005d07eb  8bce                 mov ecx, esi
// 005d07ed  e88ef7ffff           call 0x5cff80
// 005d07f2  8d4c2420             lea ecx, [esp + 0x20]
// 005d07f6  8ad8                 mov bl, al
// 005d07f8  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005d0800  ff1500a49e00         call dword ptr [0x9ea400]
// 005d0806  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d080a  5e                   pop esi
// 005d080b  8ac3                 mov al, bl
// 005d080d  64890d00000000       mov dword ptr fs:[0], ecx
// 005d0814  5b                   pop ebx
// 005d0815  83c410               add esp, 0x10
// 005d0818  c22400               ret 0x24
// library rbxgs/v8datamodel\DataModel.cpp (function ??$assign_to@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@QAE_NV?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@3@AATfunction_buffer@123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
