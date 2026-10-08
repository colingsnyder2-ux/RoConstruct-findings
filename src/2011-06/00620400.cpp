// roc 2011-06 00620400  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::?$signal::Vslot::?$callable  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00620400
//
// 00620400  6aff                 push -1
// 00620402  6858949e00           push 0x9e9458
// 00620407  64a100000000         mov eax, dword ptr fs:[0]
// 0062040d  50                   push eax
// 0062040e  64892500000000       mov dword ptr fs:[0], esp
// 00620415  51                   push ecx
// 00620416  56                   push esi
// 00620417  57                   push edi
// 00620418  8bf1                 mov esi, ecx
// 0062041a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0062041e  83ec0c               sub esp, 0xc
// 00620421  8bc4                 mov eax, esp
// 00620423  c70600000000         mov dword ptr [esi], 0
// 00620429  8908                 mov dword ptr [eax], ecx
// 0062042b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0062042f  895004               mov dword ptr [eax + 4], edx
// 00620432  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00620436  894808               mov dword ptr [eax + 8], ecx
// 00620439  8b442430             mov eax, dword ptr [esp + 0x30]
// 0062043d  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00620445  89642414             mov dword ptr [esp + 0x14], esp
// 00620449  85c0                 test eax, eax
// 0062044b  740c                 je 0x620459
// 0062044d  83c004               add eax, 4
// 00620450  ba01000000           mov edx, 1
// 00620455  f00fc110             lock xadd dword ptr [eax], edx
// 00620459  8bce                 mov ecx, esi
// 0062045b  e830efffff           call 0x61f390
// 00620460  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00620464  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0062046c  85ff                 test edi, edi
// 0062046e  742a                 je 0x62049a
// 00620470  8d4704               lea eax, [edi + 4]
// 00620473  83c9ff               or ecx, 0xffffffff
// 00620476  f00fc108             lock xadd dword ptr [eax], ecx
// 0062047a  751e                 jne 0x62049a
// 0062047c  8b17                 mov edx, dword ptr [edi]
// 0062047e  8b4204               mov eax, dword ptr [edx + 4]
// 00620481  8bcf                 mov ecx, edi
// 00620483  ffd0                 call eax
// 00620485  8d4f08               lea ecx, [edi + 8]
// 00620488  83caff               or edx, 0xffffffff
// 0062048b  f00fc111             lock xadd dword ptr [ecx], edx
// 0062048f  7509                 jne 0x62049a
// 00620491  8b07                 mov eax, dword ptr [edi]
// 00620493  8b5008               mov edx, dword ptr [eax + 8]
// 00620496  8bcf                 mov ecx, edi
// 00620498  ffd2                 call edx
// 0062049a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062049e  5f                   pop edi
// 0062049f  8bc6                 mov eax, esi
// 006204a1  64890d00000000       mov dword ptr fs:[0], ecx
// 006204a8  5e                   pop esi
// 006204a9  83c410               add esp, 0x10
// 006204ac  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
