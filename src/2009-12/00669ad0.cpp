// roc 2009-12 00669ad0  unit: RBX::VInstance::?$NonFactoryProduct  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00669ad0
//
// 00669ad0  6aff                 push -1
// 00669ad2  6888449400           push 0x944488
// 00669ad7  64a100000000         mov eax, dword ptr fs:[0]
// 00669add  50                   push eax
// 00669ade  64892500000000       mov dword ptr fs:[0], esp
// 00669ae5  51                   push ecx
// 00669ae6  53                   push ebx
// 00669ae7  56                   push esi
// 00669ae8  8bf1                 mov esi, ecx
// 00669aea  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00669aee  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00669af2  33c0                 xor eax, eax
// 00669af4  89442414             mov dword ptr [esp + 0x14], eax
// 00669af8  88442408             mov byte ptr [esp + 8], al
// 00669afc  8b442408             mov eax, dword ptr [esp + 8]
// 00669b00  50                   push eax
// 00669b01  51                   push ecx
// 00669b02  83ec3c               sub esp, 0x3c
// 00669b05  8bc4                 mov eax, esp
// 00669b07  8910                 mov dword ptr [eax], edx
// 00669b09  8d4804               lea ecx, [eax + 4]
// 00669b0c  8d442464             lea eax, [esp + 0x64]
// 00669b10  89a4249c000000       mov dword ptr [esp + 0x9c], esp
// 00669b17  50                   push eax
// 00669b18  e86356fdff           call 0x63f180
// 00669b1d  8bce                 mov ecx, esi
// 00669b1f  e83cf3ffff           call 0x668e60
// 00669b24  8d4c2420             lea ecx, [esp + 0x20]
// 00669b28  8ad8                 mov bl, al
// 00669b2a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00669b32  e889940900           call 0x702fc0
// 00669b37  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00669b3b  5e                   pop esi
// 00669b3c  8ac3                 mov al, bl
// 00669b3e  64890d00000000       mov dword ptr fs:[0], ecx
// 00669b45  5b                   pop ebx
// 00669b46  83c410               add esp, 0x10
// 00669b49  c24000               ret 0x40
// library rbxgs/v8datamodel\DataModel.cpp (function ??$assign_to@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@0@ZV?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@QAE_NV?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@0@ZV?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@@_bi@3@AATfunction_buffer@123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
