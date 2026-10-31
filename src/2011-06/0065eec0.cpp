// roc 2011-06 0065eec0  unit: RBX::VExplosion::?$FactoryProduct  size: 281 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0065eec0
//
// 0065eec0  6aff                 push -1
// 0065eec2  68e1d89e00           push 0x9ed8e1
// 0065eec7  64a100000000         mov eax, dword ptr fs:[0]
// 0065eecd  50                   push eax
// 0065eece  64892500000000       mov dword ptr fs:[0], esp
// 0065eed5  83ec14               sub esp, 0x14
// 0065eed8  56                   push esi
// 0065eed9  57                   push edi
// 0065eeda  c744240800000000     mov dword ptr [esp + 8], 0
// 0065eee2  51                   push ecx
// 0065eee3  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0065eee7  8bc4                 mov eax, esp
// 0065eee9  8908                 mov dword ptr [eax], ecx
// 0065eeeb  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0065eeef  89642410             mov dword ptr [esp + 0x10], esp
// 0065eef3  83ec08               sub esp, 8
// 0065eef6  8bc4                 mov eax, esp
// 0065eef8  8910                 mov dword ptr [eax], edx
// 0065eefa  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0065eefe  894804               mov dword ptr [eax + 4], ecx
// 0065ef01  8b442448             mov eax, dword ptr [esp + 0x48]
// 0065ef05  bf01000000           mov edi, 1
// 0065ef0a  897c2430             mov dword ptr [esp + 0x30], edi
// 0065ef0e  8964244c             mov dword ptr [esp + 0x4c], esp
// 0065ef12  85c0                 test eax, eax
// 0065ef14  7409                 je 0x65ef1f
// 0065ef16  83c004               add eax, 4
// 0065ef19  8bd7                 mov edx, edi
// 0065ef1b  f00fc110             lock xadd dword ptr [eax], edx
// 0065ef1f  8d4c241c             lea ecx, [esp + 0x1c]
// 0065ef23  e8c8feffff           call 0x65edf0
// 0065ef28  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0065ef2c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0065ef30  8b542434             mov edx, dword ptr [esp + 0x34]
// 0065ef34  890e                 mov dword ptr [esi], ecx
// 0065ef36  895604               mov dword ptr [esi + 4], edx
// 0065ef39  8b08                 mov ecx, dword ptr [eax]
// 0065ef3b  894e08               mov dword ptr [esi + 8], ecx
// 0065ef3e  8b4804               mov ecx, dword ptr [eax + 4]
// 0065ef41  894e0c               mov dword ptr [esi + 0xc], ecx
// 0065ef44  85c9                 test ecx, ecx
// 0065ef46  7409                 je 0x65ef51
// 0065ef48  83c104               add ecx, 4
// 0065ef4b  8bd7                 mov edx, edi
// 0065ef4d  f00fc111             lock xadd dword ptr [ecx], edx
// 0065ef51  8b4008               mov eax, dword ptr [eax + 8]
// 0065ef54  894610               mov dword ptr [esi + 0x10], eax
// 0065ef57  8b442414             mov eax, dword ptr [esp + 0x14]
// 0065ef5b  897c2408             mov dword ptr [esp + 8], edi
// 0065ef5f  85c0                 test eax, eax
// 0065ef61  742c                 je 0x65ef8f
// 0065ef63  8bf8                 mov edi, eax
// 0065ef65  83c004               add eax, 4
// 0065ef68  83c9ff               or ecx, 0xffffffff
// 0065ef6b  f00fc108             lock xadd dword ptr [eax], ecx
// 0065ef6f  751e                 jne 0x65ef8f
// 0065ef71  8b17                 mov edx, dword ptr [edi]
// 0065ef73  8b4204               mov eax, dword ptr [edx + 4]
// 0065ef76  8bcf                 mov ecx, edi
// 0065ef78  ffd0                 call eax
// 0065ef7a  8d4f08               lea ecx, [edi + 8]
// 0065ef7d  83caff               or edx, 0xffffffff
// 0065ef80  f00fc111             lock xadd dword ptr [ecx], edx
// 0065ef84  7509                 jne 0x65ef8f
// 0065ef86  8b07                 mov eax, dword ptr [edi]
// 0065ef88  8b5008               mov edx, dword ptr [eax + 8]
// 0065ef8b  8bcf                 mov ecx, edi
// 0065ef8d  ffd2                 call edx
// 0065ef8f  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0065ef93  c644242400           mov byte ptr [esp + 0x24], 0
// 0065ef98  85ff                 test edi, edi
// 0065ef9a  742a                 je 0x65efc6
// 0065ef9c  8d4704               lea eax, [edi + 4]
// 0065ef9f  83c9ff               or ecx, 0xffffffff
// 0065efa2  f00fc108             lock xadd dword ptr [eax], ecx
// 0065efa6  751e                 jne 0x65efc6
// 0065efa8  8b17                 mov edx, dword ptr [edi]
// 0065efaa  8b4204               mov eax, dword ptr [edx + 4]
// 0065efad  8bcf                 mov ecx, edi
// 0065efaf  ffd0                 call eax
// 0065efb1  8d4f08               lea ecx, [edi + 8]
// 0065efb4  83caff               or edx, 0xffffffff
// 0065efb7  f00fc111             lock xadd dword ptr [ecx], edx
// 0065efbb  7509                 jne 0x65efc6
// 0065efbd  8b07                 mov eax, dword ptr [edi]
// 0065efbf  8b5008               mov edx, dword ptr [eax + 8]
// 0065efc2  8bcf                 mov ecx, edi
// 0065efc4  ffd2                 call edx
// 0065efc6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0065efca  5f                   pop edi
// 0065efcb  8bc6                 mov eax, esi
// 0065efcd  64890d00000000       mov dword ptr fs:[0], ecx
// 0065efd4  5e                   pop esi
// 0065efd5  83c420               add esp, 0x20
// 0065efd8  c3                   ret 
// copied from an identical function in another client (function ??$bind@XVDHTMLWindowService@@V?$function@$$A6AXPAVCLuaHtmlView@@@ZV?$allocator@X@std@@@boost@@V?$shared_ptr@VDHTMLWindowService@@@3@P8CLuaHtmlView@@AEXXZ@boost@@YA?AV?$bind_t@XV?$mf1@XVDHTMLWindowService@@V?$function@$$A6AXPAVCLuaHtmlView@@@ZV?$allocator@X@std@@@boost@@@_mfi@boost@@V?$list2@V?$value@V?$shared_ptr@VDHTMLWindowService@@@boost@@@_bi@boost@@V?$value@P8CLuaHtmlView@@AEXXZ@23@@_bi@3@@_bi@0@P8DHTMLWindowService@@AEXV?$function@$$A6AXPAVCLuaHtmlView@@@ZV?$allocator@X@std@@@0@@ZV?$shared_ptr@VDHTMLWindowService@@@0@P8CLuaHtmlView@@AEXXZ@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: boost-1.35.0-dll roc_espeon_dhtmlnativefunction034ab6d87e50f0c3f.cpp