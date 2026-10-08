// roc 2011-06 00768450  unit: VYieldFunctionStateObject::?$sp_counted_impl_p  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00768450
//
// 00768450  6aff                 push -1
// 00768452  6858949e00           push 0x9e9458
// 00768457  64a100000000         mov eax, dword ptr fs:[0]
// 0076845d  50                   push eax
// 0076845e  64892500000000       mov dword ptr fs:[0], esp
// 00768465  51                   push ecx
// 00768466  56                   push esi
// 00768467  57                   push edi
// 00768468  8bf1                 mov esi, ecx
// 0076846a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0076846e  83ec0c               sub esp, 0xc
// 00768471  8bc4                 mov eax, esp
// 00768473  c70600000000         mov dword ptr [esi], 0
// 00768479  8908                 mov dword ptr [eax], ecx
// 0076847b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0076847f  895004               mov dword ptr [eax + 4], edx
// 00768482  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00768486  894808               mov dword ptr [eax + 8], ecx
// 00768489  8b442430             mov eax, dword ptr [esp + 0x30]
// 0076848d  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00768495  89642414             mov dword ptr [esp + 0x14], esp
// 00768499  85c0                 test eax, eax
// 0076849b  740c                 je 0x7684a9
// 0076849d  83c004               add eax, 4
// 007684a0  ba01000000           mov edx, 1
// 007684a5  f00fc110             lock xadd dword ptr [eax], edx
// 007684a9  8bce                 mov ecx, esi
// 007684ab  e840f6ffff           call 0x767af0
// 007684b0  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 007684b4  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 007684bc  85ff                 test edi, edi
// 007684be  742a                 je 0x7684ea
// 007684c0  8d4704               lea eax, [edi + 4]
// 007684c3  83c9ff               or ecx, 0xffffffff
// 007684c6  f00fc108             lock xadd dword ptr [eax], ecx
// 007684ca  751e                 jne 0x7684ea
// 007684cc  8b17                 mov edx, dword ptr [edi]
// 007684ce  8b4204               mov eax, dword ptr [edx + 4]
// 007684d1  8bcf                 mov ecx, edi
// 007684d3  ffd0                 call eax
// 007684d5  8d4f08               lea ecx, [edi + 8]
// 007684d8  83caff               or edx, 0xffffffff
// 007684db  f00fc111             lock xadd dword ptr [ecx], edx
// 007684df  7509                 jne 0x7684ea
// 007684e1  8b07                 mov eax, dword ptr [edi]
// 007684e3  8b5008               mov edx, dword ptr [eax + 8]
// 007684e6  8bcf                 mov ecx, edi
// 007684e8  ffd2                 call edx
// 007684ea  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007684ee  5f                   pop edi
// 007684ef  8bc6                 mov eax, esi
// 007684f1  64890d00000000       mov dword ptr fs:[0], ecx
// 007684f8  5e                   pop esi
// 007684f9  83c410               add esp, 0x10
// 007684fc  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
