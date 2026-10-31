// roc 2009-12 006c7750  unit: RBX::VExplosion::?$FactoryProduct  size: 281 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006c7750
//
// 006c7750  6aff                 push -1
// 006c7752  68619a9400           push 0x949a61
// 006c7757  64a100000000         mov eax, dword ptr fs:[0]
// 006c775d  50                   push eax
// 006c775e  64892500000000       mov dword ptr fs:[0], esp
// 006c7765  83ec14               sub esp, 0x14
// 006c7768  56                   push esi
// 006c7769  57                   push edi
// 006c776a  c744240800000000     mov dword ptr [esp + 8], 0
// 006c7772  51                   push ecx
// 006c7773  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 006c7777  8bc4                 mov eax, esp
// 006c7779  8908                 mov dword ptr [eax], ecx
// 006c777b  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 006c777f  89642410             mov dword ptr [esp + 0x10], esp
// 006c7783  83ec08               sub esp, 8
// 006c7786  8bc4                 mov eax, esp
// 006c7788  8910                 mov dword ptr [eax], edx
// 006c778a  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 006c778e  894804               mov dword ptr [eax + 4], ecx
// 006c7791  8b442448             mov eax, dword ptr [esp + 0x48]
// 006c7795  bf01000000           mov edi, 1
// 006c779a  897c2430             mov dword ptr [esp + 0x30], edi
// 006c779e  8964244c             mov dword ptr [esp + 0x4c], esp
// 006c77a2  85c0                 test eax, eax
// 006c77a4  7409                 je 0x6c77af
// 006c77a6  83c004               add eax, 4
// 006c77a9  8bd7                 mov edx, edi
// 006c77ab  f00fc110             lock xadd dword ptr [eax], edx
// 006c77af  8d4c241c             lea ecx, [esp + 0x1c]
// 006c77b3  e878fcffff           call 0x6c7430
// 006c77b8  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 006c77bc  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006c77c0  8b542434             mov edx, dword ptr [esp + 0x34]
// 006c77c4  890e                 mov dword ptr [esi], ecx
// 006c77c6  895604               mov dword ptr [esi + 4], edx
// 006c77c9  8b08                 mov ecx, dword ptr [eax]
// 006c77cb  894e08               mov dword ptr [esi + 8], ecx
// 006c77ce  8b4804               mov ecx, dword ptr [eax + 4]
// 006c77d1  894e0c               mov dword ptr [esi + 0xc], ecx
// 006c77d4  85c9                 test ecx, ecx
// 006c77d6  7409                 je 0x6c77e1
// 006c77d8  83c104               add ecx, 4
// 006c77db  8bd7                 mov edx, edi
// 006c77dd  f00fc111             lock xadd dword ptr [ecx], edx
// 006c77e1  8b4008               mov eax, dword ptr [eax + 8]
// 006c77e4  894610               mov dword ptr [esi + 0x10], eax
// 006c77e7  8b442414             mov eax, dword ptr [esp + 0x14]
// 006c77eb  897c2408             mov dword ptr [esp + 8], edi
// 006c77ef  85c0                 test eax, eax
// 006c77f1  742c                 je 0x6c781f
// 006c77f3  8bf8                 mov edi, eax
// 006c77f5  83c004               add eax, 4
// 006c77f8  83c9ff               or ecx, 0xffffffff
// 006c77fb  f00fc108             lock xadd dword ptr [eax], ecx
// 006c77ff  751e                 jne 0x6c781f
// 006c7801  8b17                 mov edx, dword ptr [edi]
// 006c7803  8b4204               mov eax, dword ptr [edx + 4]
// 006c7806  8bcf                 mov ecx, edi
// 006c7808  ffd0                 call eax
// 006c780a  8d4f08               lea ecx, [edi + 8]
// 006c780d  83caff               or edx, 0xffffffff
// 006c7810  f00fc111             lock xadd dword ptr [ecx], edx
// 006c7814  7509                 jne 0x6c781f
// 006c7816  8b07                 mov eax, dword ptr [edi]
// 006c7818  8b5008               mov edx, dword ptr [eax + 8]
// 006c781b  8bcf                 mov ecx, edi
// 006c781d  ffd2                 call edx
// 006c781f  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 006c7823  c644242400           mov byte ptr [esp + 0x24], 0
// 006c7828  85ff                 test edi, edi
// 006c782a  742a                 je 0x6c7856
// 006c782c  8d4704               lea eax, [edi + 4]
// 006c782f  83c9ff               or ecx, 0xffffffff
// 006c7832  f00fc108             lock xadd dword ptr [eax], ecx
// 006c7836  751e                 jne 0x6c7856
// 006c7838  8b17                 mov edx, dword ptr [edi]
// 006c783a  8b4204               mov eax, dword ptr [edx + 4]
// 006c783d  8bcf                 mov ecx, edi
// 006c783f  ffd0                 call eax
// 006c7841  8d4f08               lea ecx, [edi + 8]
// 006c7844  83caff               or edx, 0xffffffff
// 006c7847  f00fc111             lock xadd dword ptr [ecx], edx
// 006c784b  7509                 jne 0x6c7856
// 006c784d  8b07                 mov eax, dword ptr [edi]
// 006c784f  8b5008               mov edx, dword ptr [eax + 8]
// 006c7852  8bcf                 mov ecx, edi
// 006c7854  ffd2                 call edx
// 006c7856  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006c785a  5f                   pop edi
// 006c785b  8bc6                 mov eax, esi
// 006c785d  64890d00000000       mov dword ptr fs:[0], ecx
// 006c7864  5e                   pop esi
// 006c7865  83c420               add esp, 0x20
// 006c7868  c3                   ret 
// copied from an identical function in another client (function ??$bind@XVDHTMLWindowService@@V?$function@$$A6AXPAVCLuaHtmlView@@@ZV?$allocator@X@std@@@boost@@V?$shared_ptr@VDHTMLWindowService@@@3@P8CLuaHtmlView@@AEXXZ@boost@@YA?AV?$bind_t@XV?$mf1@XVDHTMLWindowService@@V?$function@$$A6AXPAVCLuaHtmlView@@@ZV?$allocator@X@std@@@boost@@@_mfi@boost@@V?$list2@V?$value@V?$shared_ptr@VDHTMLWindowService@@@boost@@@_bi@boost@@V?$value@P8CLuaHtmlView@@AEXXZ@23@@_bi@3@@_bi@0@P8DHTMLWindowService@@AEXV?$function@$$A6AXPAVCLuaHtmlView@@@ZV?$allocator@X@std@@@0@@ZV?$shared_ptr@VDHTMLWindowService@@@0@P8CLuaHtmlView@@AEXXZ@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: boost-1.35.0-dll roc_espeon_dhtmlnativefunction034ab6d87e50f0c3f.cpp