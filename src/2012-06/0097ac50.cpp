// roc 2012-06 0097ac50  unit: RBX::Limits::VCounter::V?$shared_ptr::?$thread_specific_ptr::delete_data  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0097ac50
//
// 0097ac50  6aff                 push -1
// 0097ac52  68f810ab00           push 0xab10f8
// 0097ac57  64a100000000         mov eax, dword ptr fs:[0]
// 0097ac5d  50                   push eax
// 0097ac5e  64892500000000       mov dword ptr fs:[0], esp
// 0097ac65  51                   push ecx
// 0097ac66  56                   push esi
// 0097ac67  57                   push edi
// 0097ac68  8bf1                 mov esi, ecx
// 0097ac6a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0097ac6e  83ec0c               sub esp, 0xc
// 0097ac71  8bc4                 mov eax, esp
// 0097ac73  c70600000000         mov dword ptr [esi], 0
// 0097ac79  8908                 mov dword ptr [eax], ecx
// 0097ac7b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0097ac7f  895004               mov dword ptr [eax + 4], edx
// 0097ac82  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0097ac86  894808               mov dword ptr [eax + 8], ecx
// 0097ac89  8b442430             mov eax, dword ptr [esp + 0x30]
// 0097ac8d  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0097ac95  89642414             mov dword ptr [esp + 0x14], esp
// 0097ac99  85c0                 test eax, eax
// 0097ac9b  740c                 je 0x97aca9
// 0097ac9d  83c004               add eax, 4
// 0097aca0  ba01000000           mov edx, 1
// 0097aca5  f00fc110             lock xadd dword ptr [eax], edx
// 0097aca9  8bce                 mov ecx, esi
// 0097acab  e8e0feffff           call 0x97ab90
// 0097acb0  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0097acb4  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0097acbc  85ff                 test edi, edi
// 0097acbe  742a                 je 0x97acea
// 0097acc0  8d4704               lea eax, [edi + 4]
// 0097acc3  83c9ff               or ecx, 0xffffffff
// 0097acc6  f00fc108             lock xadd dword ptr [eax], ecx
// 0097acca  751e                 jne 0x97acea
// 0097accc  8b17                 mov edx, dword ptr [edi]
// 0097acce  8b4204               mov eax, dword ptr [edx + 4]
// 0097acd1  8bcf                 mov ecx, edi
// 0097acd3  ffd0                 call eax
// 0097acd5  8d4f08               lea ecx, [edi + 8]
// 0097acd8  83caff               or edx, 0xffffffff
// 0097acdb  f00fc111             lock xadd dword ptr [ecx], edx
// 0097acdf  7509                 jne 0x97acea
// 0097ace1  8b07                 mov eax, dword ptr [edi]
// 0097ace3  8b5008               mov edx, dword ptr [eax + 8]
// 0097ace6  8bcf                 mov ecx, edi
// 0097ace8  ffd2                 call edx
// 0097acea  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0097acee  5f                   pop edi
// 0097acef  8bc6                 mov eax, esi
// 0097acf1  64890d00000000       mov dword ptr fs:[0], ecx
// 0097acf8  5e                   pop esi
// 0097acf9  83c410               add esp, 0x10
// 0097acfc  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
