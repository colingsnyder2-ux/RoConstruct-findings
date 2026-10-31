// roc 2010-06 00633490  unit: RBX::VExplosion::?$FactoryProduct  size: 281 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00633490
//
// 00633490  6aff                 push -1
// 00633492  68b1c19900           push 0x99c1b1
// 00633497  64a100000000         mov eax, dword ptr fs:[0]
// 0063349d  50                   push eax
// 0063349e  64892500000000       mov dword ptr fs:[0], esp
// 006334a5  83ec14               sub esp, 0x14
// 006334a8  56                   push esi
// 006334a9  57                   push edi
// 006334aa  c744240800000000     mov dword ptr [esp + 8], 0
// 006334b2  51                   push ecx
// 006334b3  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 006334b7  8bc4                 mov eax, esp
// 006334b9  8908                 mov dword ptr [eax], ecx
// 006334bb  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 006334bf  89642410             mov dword ptr [esp + 0x10], esp
// 006334c3  83ec08               sub esp, 8
// 006334c6  8bc4                 mov eax, esp
// 006334c8  8910                 mov dword ptr [eax], edx
// 006334ca  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 006334ce  894804               mov dword ptr [eax + 4], ecx
// 006334d1  8b442448             mov eax, dword ptr [esp + 0x48]
// 006334d5  bf01000000           mov edi, 1
// 006334da  897c2430             mov dword ptr [esp + 0x30], edi
// 006334de  8964244c             mov dword ptr [esp + 0x4c], esp
// 006334e2  85c0                 test eax, eax
// 006334e4  7409                 je 0x6334ef
// 006334e6  83c004               add eax, 4
// 006334e9  8bd7                 mov edx, edi
// 006334eb  f00fc110             lock xadd dword ptr [eax], edx
// 006334ef  8d4c241c             lea ecx, [esp + 0x1c]
// 006334f3  e878fcffff           call 0x633170
// 006334f8  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 006334fc  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00633500  8b542434             mov edx, dword ptr [esp + 0x34]
// 00633504  890e                 mov dword ptr [esi], ecx
// 00633506  895604               mov dword ptr [esi + 4], edx
// 00633509  8b08                 mov ecx, dword ptr [eax]
// 0063350b  894e08               mov dword ptr [esi + 8], ecx
// 0063350e  8b4804               mov ecx, dword ptr [eax + 4]
// 00633511  894e0c               mov dword ptr [esi + 0xc], ecx
// 00633514  85c9                 test ecx, ecx
// 00633516  7409                 je 0x633521
// 00633518  83c104               add ecx, 4
// 0063351b  8bd7                 mov edx, edi
// 0063351d  f00fc111             lock xadd dword ptr [ecx], edx
// 00633521  8b4008               mov eax, dword ptr [eax + 8]
// 00633524  894610               mov dword ptr [esi + 0x10], eax
// 00633527  8b442414             mov eax, dword ptr [esp + 0x14]
// 0063352b  897c2408             mov dword ptr [esp + 8], edi
// 0063352f  85c0                 test eax, eax
// 00633531  742c                 je 0x63355f
// 00633533  8bf8                 mov edi, eax
// 00633535  83c004               add eax, 4
// 00633538  83c9ff               or ecx, 0xffffffff
// 0063353b  f00fc108             lock xadd dword ptr [eax], ecx
// 0063353f  751e                 jne 0x63355f
// 00633541  8b17                 mov edx, dword ptr [edi]
// 00633543  8b4204               mov eax, dword ptr [edx + 4]
// 00633546  8bcf                 mov ecx, edi
// 00633548  ffd0                 call eax
// 0063354a  8d4f08               lea ecx, [edi + 8]
// 0063354d  83caff               or edx, 0xffffffff
// 00633550  f00fc111             lock xadd dword ptr [ecx], edx
// 00633554  7509                 jne 0x63355f
// 00633556  8b07                 mov eax, dword ptr [edi]
// 00633558  8b5008               mov edx, dword ptr [eax + 8]
// 0063355b  8bcf                 mov ecx, edi
// 0063355d  ffd2                 call edx
// 0063355f  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 00633563  c644242400           mov byte ptr [esp + 0x24], 0
// 00633568  85ff                 test edi, edi
// 0063356a  742a                 je 0x633596
// 0063356c  8d4704               lea eax, [edi + 4]
// 0063356f  83c9ff               or ecx, 0xffffffff
// 00633572  f00fc108             lock xadd dword ptr [eax], ecx
// 00633576  751e                 jne 0x633596
// 00633578  8b17                 mov edx, dword ptr [edi]
// 0063357a  8b4204               mov eax, dword ptr [edx + 4]
// 0063357d  8bcf                 mov ecx, edi
// 0063357f  ffd0                 call eax
// 00633581  8d4f08               lea ecx, [edi + 8]
// 00633584  83caff               or edx, 0xffffffff
// 00633587  f00fc111             lock xadd dword ptr [ecx], edx
// 0063358b  7509                 jne 0x633596
// 0063358d  8b07                 mov eax, dword ptr [edi]
// 0063358f  8b5008               mov edx, dword ptr [eax + 8]
// 00633592  8bcf                 mov ecx, edi
// 00633594  ffd2                 call edx
// 00633596  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0063359a  5f                   pop edi
// 0063359b  8bc6                 mov eax, esi
// 0063359d  64890d00000000       mov dword ptr fs:[0], ecx
// 006335a4  5e                   pop esi
// 006335a5  83c420               add esp, 0x20
// 006335a8  c3                   ret 
// copied from an identical function in another client (function ??$bind@XVDHTMLWindowService@@V?$function@$$A6AXPAVCLuaHtmlView@@@ZV?$allocator@X@std@@@boost@@V?$shared_ptr@VDHTMLWindowService@@@3@P8CLuaHtmlView@@AEXXZ@boost@@YA?AV?$bind_t@XV?$mf1@XVDHTMLWindowService@@V?$function@$$A6AXPAVCLuaHtmlView@@@ZV?$allocator@X@std@@@boost@@@_mfi@boost@@V?$list2@V?$value@V?$shared_ptr@VDHTMLWindowService@@@boost@@@_bi@boost@@V?$value@P8CLuaHtmlView@@AEXXZ@23@@_bi@3@@_bi@0@P8DHTMLWindowService@@AEXV?$function@$$A6AXPAVCLuaHtmlView@@@ZV?$allocator@X@std@@@0@@ZV?$shared_ptr@VDHTMLWindowService@@@0@P8CLuaHtmlView@@AEXXZ@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: boost-1.35.0-dll roc_espeon_dhtmlnativefunction034ab6d87e50f0c3f.cpp