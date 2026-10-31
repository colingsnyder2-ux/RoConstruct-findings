// roc 2009-06 0064dae0  unit: RBX::VExplosion::?$FactoryProduct  size: 281 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064dae0
//
// 0064dae0  6aff                 push -1
// 0064dae2  6841af8600           push 0x86af41
// 0064dae7  64a100000000         mov eax, dword ptr fs:[0]
// 0064daed  50                   push eax
// 0064daee  64892500000000       mov dword ptr fs:[0], esp
// 0064daf5  83ec14               sub esp, 0x14
// 0064daf8  56                   push esi
// 0064daf9  57                   push edi
// 0064dafa  c744240800000000     mov dword ptr [esp + 8], 0
// 0064db02  51                   push ecx
// 0064db03  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0064db07  8bc4                 mov eax, esp
// 0064db09  8908                 mov dword ptr [eax], ecx
// 0064db0b  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0064db0f  89642410             mov dword ptr [esp + 0x10], esp
// 0064db13  83ec08               sub esp, 8
// 0064db16  8bc4                 mov eax, esp
// 0064db18  8910                 mov dword ptr [eax], edx
// 0064db1a  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0064db1e  894804               mov dword ptr [eax + 4], ecx
// 0064db21  8b442448             mov eax, dword ptr [esp + 0x48]
// 0064db25  bf01000000           mov edi, 1
// 0064db2a  897c2430             mov dword ptr [esp + 0x30], edi
// 0064db2e  8964244c             mov dword ptr [esp + 0x4c], esp
// 0064db32  85c0                 test eax, eax
// 0064db34  7409                 je 0x64db3f
// 0064db36  83c004               add eax, 4
// 0064db39  8bd7                 mov edx, edi
// 0064db3b  f00fc110             lock xadd dword ptr [eax], edx
// 0064db3f  8d4c241c             lea ecx, [esp + 0x1c]
// 0064db43  e818feffff           call 0x64d960
// 0064db48  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0064db4c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0064db50  8b542434             mov edx, dword ptr [esp + 0x34]
// 0064db54  890e                 mov dword ptr [esi], ecx
// 0064db56  895604               mov dword ptr [esi + 4], edx
// 0064db59  8b08                 mov ecx, dword ptr [eax]
// 0064db5b  894e08               mov dword ptr [esi + 8], ecx
// 0064db5e  8b4804               mov ecx, dword ptr [eax + 4]
// 0064db61  894e0c               mov dword ptr [esi + 0xc], ecx
// 0064db64  85c9                 test ecx, ecx
// 0064db66  7409                 je 0x64db71
// 0064db68  83c104               add ecx, 4
// 0064db6b  8bd7                 mov edx, edi
// 0064db6d  f00fc111             lock xadd dword ptr [ecx], edx
// 0064db71  8b4008               mov eax, dword ptr [eax + 8]
// 0064db74  894610               mov dword ptr [esi + 0x10], eax
// 0064db77  8b442414             mov eax, dword ptr [esp + 0x14]
// 0064db7b  897c2408             mov dword ptr [esp + 8], edi
// 0064db7f  85c0                 test eax, eax
// 0064db81  742c                 je 0x64dbaf
// 0064db83  8bf8                 mov edi, eax
// 0064db85  83c004               add eax, 4
// 0064db88  83c9ff               or ecx, 0xffffffff
// 0064db8b  f00fc108             lock xadd dword ptr [eax], ecx
// 0064db8f  751e                 jne 0x64dbaf
// 0064db91  8b17                 mov edx, dword ptr [edi]
// 0064db93  8b4204               mov eax, dword ptr [edx + 4]
// 0064db96  8bcf                 mov ecx, edi
// 0064db98  ffd0                 call eax
// 0064db9a  8d4f08               lea ecx, [edi + 8]
// 0064db9d  83caff               or edx, 0xffffffff
// 0064dba0  f00fc111             lock xadd dword ptr [ecx], edx
// 0064dba4  7509                 jne 0x64dbaf
// 0064dba6  8b07                 mov eax, dword ptr [edi]
// 0064dba8  8b5008               mov edx, dword ptr [eax + 8]
// 0064dbab  8bcf                 mov ecx, edi
// 0064dbad  ffd2                 call edx
// 0064dbaf  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0064dbb3  c644242400           mov byte ptr [esp + 0x24], 0
// 0064dbb8  85ff                 test edi, edi
// 0064dbba  742a                 je 0x64dbe6
// 0064dbbc  8d4704               lea eax, [edi + 4]
// 0064dbbf  83c9ff               or ecx, 0xffffffff
// 0064dbc2  f00fc108             lock xadd dword ptr [eax], ecx
// 0064dbc6  751e                 jne 0x64dbe6
// 0064dbc8  8b17                 mov edx, dword ptr [edi]
// 0064dbca  8b4204               mov eax, dword ptr [edx + 4]
// 0064dbcd  8bcf                 mov ecx, edi
// 0064dbcf  ffd0                 call eax
// 0064dbd1  8d4f08               lea ecx, [edi + 8]
// 0064dbd4  83caff               or edx, 0xffffffff
// 0064dbd7  f00fc111             lock xadd dword ptr [ecx], edx
// 0064dbdb  7509                 jne 0x64dbe6
// 0064dbdd  8b07                 mov eax, dword ptr [edi]
// 0064dbdf  8b5008               mov edx, dword ptr [eax + 8]
// 0064dbe2  8bcf                 mov ecx, edi
// 0064dbe4  ffd2                 call edx
// 0064dbe6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0064dbea  5f                   pop edi
// 0064dbeb  8bc6                 mov eax, esi
// 0064dbed  64890d00000000       mov dword ptr fs:[0], ecx
// 0064dbf4  5e                   pop esi
// 0064dbf5  83c420               add esp, 0x20
// 0064dbf8  c3                   ret 
// copied from an identical function in another client (function ??$bind@XVDHTMLWindowService@@V?$function@$$A6AXPAVCLuaHtmlView@@@ZV?$allocator@X@std@@@boost@@V?$shared_ptr@VDHTMLWindowService@@@3@P8CLuaHtmlView@@AEXXZ@boost@@YA?AV?$bind_t@XV?$mf1@XVDHTMLWindowService@@V?$function@$$A6AXPAVCLuaHtmlView@@@ZV?$allocator@X@std@@@boost@@@_mfi@boost@@V?$list2@V?$value@V?$shared_ptr@VDHTMLWindowService@@@boost@@@_bi@boost@@V?$value@P8CLuaHtmlView@@AEXXZ@23@@_bi@3@@_bi@0@P8DHTMLWindowService@@AEXV?$function@$$A6AXPAVCLuaHtmlView@@@ZV?$allocator@X@std@@@0@@ZV?$shared_ptr@VDHTMLWindowService@@@0@P8CLuaHtmlView@@AEXXZ@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: boost-1.35.0-dll roc_espeon_dhtmlnativefunction034ab6d87e50f0c3f.cpp