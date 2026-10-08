// roc 2010-06 004f0eb0  unit: RBX::VMotor6D::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004f0eb0
//
// 004f0eb0  6aff                 push -1
// 004f0eb2  6888df9a00           push 0x9adf88
// 004f0eb7  64a100000000         mov eax, dword ptr fs:[0]
// 004f0ebd  50                   push eax
// 004f0ebe  64892500000000       mov dword ptr fs:[0], esp
// 004f0ec5  51                   push ecx
// 004f0ec6  56                   push esi
// 004f0ec7  57                   push edi
// 004f0ec8  8bf1                 mov esi, ecx
// 004f0eca  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004f0ece  83ec0c               sub esp, 0xc
// 004f0ed1  8bc4                 mov eax, esp
// 004f0ed3  c70600000000         mov dword ptr [esi], 0
// 004f0ed9  8908                 mov dword ptr [eax], ecx
// 004f0edb  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004f0edf  895004               mov dword ptr [eax + 4], edx
// 004f0ee2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004f0ee6  894808               mov dword ptr [eax + 8], ecx
// 004f0ee9  8b442430             mov eax, dword ptr [esp + 0x30]
// 004f0eed  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004f0ef5  89642414             mov dword ptr [esp + 0x14], esp
// 004f0ef9  85c0                 test eax, eax
// 004f0efb  740c                 je 0x4f0f09
// 004f0efd  83c004               add eax, 4
// 004f0f00  ba01000000           mov edx, 1
// 004f0f05  f00fc110             lock xadd dword ptr [eax], edx
// 004f0f09  8bce                 mov ecx, esi
// 004f0f0b  e850e2ffff           call 0x4ef160
// 004f0f10  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004f0f14  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004f0f1c  85ff                 test edi, edi
// 004f0f1e  742a                 je 0x4f0f4a
// 004f0f20  8d4704               lea eax, [edi + 4]
// 004f0f23  83c9ff               or ecx, 0xffffffff
// 004f0f26  f00fc108             lock xadd dword ptr [eax], ecx
// 004f0f2a  751e                 jne 0x4f0f4a
// 004f0f2c  8b17                 mov edx, dword ptr [edi]
// 004f0f2e  8b4204               mov eax, dword ptr [edx + 4]
// 004f0f31  8bcf                 mov ecx, edi
// 004f0f33  ffd0                 call eax
// 004f0f35  8d4f08               lea ecx, [edi + 8]
// 004f0f38  83caff               or edx, 0xffffffff
// 004f0f3b  f00fc111             lock xadd dword ptr [ecx], edx
// 004f0f3f  7509                 jne 0x4f0f4a
// 004f0f41  8b07                 mov eax, dword ptr [edi]
// 004f0f43  8b5008               mov edx, dword ptr [eax + 8]
// 004f0f46  8bcf                 mov ecx, edi
// 004f0f48  ffd2                 call edx
// 004f0f4a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004f0f4e  5f                   pop edi
// 004f0f4f  8bc6                 mov eax, esi
// 004f0f51  64890d00000000       mov dword ptr fs:[0], ecx
// 004f0f58  5e                   pop esi
// 004f0f59  83c410               add esp, 0x10
// 004f0f5c  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
