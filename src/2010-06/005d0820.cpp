// roc 2010-06 005d0820  unit: RBX::VInstance::?$NonFactoryProduct  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005d0820
//
// 005d0820  6aff                 push -1
// 005d0822  6868699900           push 0x996968
// 005d0827  64a100000000         mov eax, dword ptr fs:[0]
// 005d082d  50                   push eax
// 005d082e  64892500000000       mov dword ptr fs:[0], esp
// 005d0835  51                   push ecx
// 005d0836  53                   push ebx
// 005d0837  56                   push esi
// 005d0838  8bf1                 mov esi, ecx
// 005d083a  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 005d083e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005d0842  33c0                 xor eax, eax
// 005d0844  89442414             mov dword ptr [esp + 0x14], eax
// 005d0848  88442408             mov byte ptr [esp + 8], al
// 005d084c  8b442408             mov eax, dword ptr [esp + 8]
// 005d0850  50                   push eax
// 005d0851  51                   push ecx
// 005d0852  83ec3c               sub esp, 0x3c
// 005d0855  8bc4                 mov eax, esp
// 005d0857  8910                 mov dword ptr [eax], edx
// 005d0859  8d4804               lea ecx, [eax + 4]
// 005d085c  8d442464             lea eax, [esp + 0x64]
// 005d0860  89a4249c000000       mov dword ptr [esp + 0x9c], esp
// 005d0867  50                   push eax
// 005d0868  e8d33bedff           call 0x4a4440
// 005d086d  8bce                 mov ecx, esi
// 005d086f  e8bcf7ffff           call 0x5d0030
// 005d0874  8d4c2420             lea ecx, [esp + 0x20]
// 005d0878  8ad8                 mov bl, al
// 005d087a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005d0882  e8d92aedff           call 0x4a3360
// 005d0887  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d088b  5e                   pop esi
// 005d088c  8ac3                 mov al, bl
// 005d088e  64890d00000000       mov dword ptr fs:[0], ecx
// 005d0895  5b                   pop ebx
// 005d0896  83c410               add esp, 0x10
// 005d0899  c24000               ret 0x40
// library rbxgs/v8datamodel\DataModel.cpp (function ??$assign_to@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@0@ZV?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@QAE_NV?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@0@ZV?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@@_bi@3@AATfunction_buffer@123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
