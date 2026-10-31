// roc 2012-06 00882d40  unit: RBX::VFunctionalTest::?$FactoryProduct  size: 281 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00882d40
//
// 00882d40  6aff                 push -1
// 00882d42  68510aad00           push 0xad0a51
// 00882d47  64a100000000         mov eax, dword ptr fs:[0]
// 00882d4d  50                   push eax
// 00882d4e  64892500000000       mov dword ptr fs:[0], esp
// 00882d55  83ec14               sub esp, 0x14
// 00882d58  56                   push esi
// 00882d59  57                   push edi
// 00882d5a  c744240800000000     mov dword ptr [esp + 8], 0
// 00882d62  51                   push ecx
// 00882d63  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00882d67  8bc4                 mov eax, esp
// 00882d69  8908                 mov dword ptr [eax], ecx
// 00882d6b  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00882d6f  89642410             mov dword ptr [esp + 0x10], esp
// 00882d73  83ec08               sub esp, 8
// 00882d76  8bc4                 mov eax, esp
// 00882d78  8910                 mov dword ptr [eax], edx
// 00882d7a  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00882d7e  894804               mov dword ptr [eax + 4], ecx
// 00882d81  8b442448             mov eax, dword ptr [esp + 0x48]
// 00882d85  bf01000000           mov edi, 1
// 00882d8a  897c2430             mov dword ptr [esp + 0x30], edi
// 00882d8e  8964244c             mov dword ptr [esp + 0x4c], esp
// 00882d92  85c0                 test eax, eax
// 00882d94  7409                 je 0x882d9f
// 00882d96  83c004               add eax, 4
// 00882d99  8bd7                 mov edx, edi
// 00882d9b  f00fc110             lock xadd dword ptr [eax], edx
// 00882d9f  8d4c241c             lea ecx, [esp + 0x1c]
// 00882da3  e8a8ededff           call 0x761b50
// 00882da8  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00882dac  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00882db0  8b542434             mov edx, dword ptr [esp + 0x34]
// 00882db4  890e                 mov dword ptr [esi], ecx
// 00882db6  895604               mov dword ptr [esi + 4], edx
// 00882db9  8b08                 mov ecx, dword ptr [eax]
// 00882dbb  894e08               mov dword ptr [esi + 8], ecx
// 00882dbe  8b4804               mov ecx, dword ptr [eax + 4]
// 00882dc1  894e0c               mov dword ptr [esi + 0xc], ecx
// 00882dc4  85c9                 test ecx, ecx
// 00882dc6  7409                 je 0x882dd1
// 00882dc8  83c104               add ecx, 4
// 00882dcb  8bd7                 mov edx, edi
// 00882dcd  f00fc111             lock xadd dword ptr [ecx], edx
// 00882dd1  8b4008               mov eax, dword ptr [eax + 8]
// 00882dd4  894610               mov dword ptr [esi + 0x10], eax
// 00882dd7  8b442414             mov eax, dword ptr [esp + 0x14]
// 00882ddb  897c2408             mov dword ptr [esp + 8], edi
// 00882ddf  85c0                 test eax, eax
// 00882de1  742c                 je 0x882e0f
// 00882de3  8bf8                 mov edi, eax
// 00882de5  83c004               add eax, 4
// 00882de8  83c9ff               or ecx, 0xffffffff
// 00882deb  f00fc108             lock xadd dword ptr [eax], ecx
// 00882def  751e                 jne 0x882e0f
// 00882df1  8b17                 mov edx, dword ptr [edi]
// 00882df3  8b4204               mov eax, dword ptr [edx + 4]
// 00882df6  8bcf                 mov ecx, edi
// 00882df8  ffd0                 call eax
// 00882dfa  8d4f08               lea ecx, [edi + 8]
// 00882dfd  83caff               or edx, 0xffffffff
// 00882e00  f00fc111             lock xadd dword ptr [ecx], edx
// 00882e04  7509                 jne 0x882e0f
// 00882e06  8b07                 mov eax, dword ptr [edi]
// 00882e08  8b5008               mov edx, dword ptr [eax + 8]
// 00882e0b  8bcf                 mov ecx, edi
// 00882e0d  ffd2                 call edx
// 00882e0f  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 00882e13  c644242400           mov byte ptr [esp + 0x24], 0
// 00882e18  85ff                 test edi, edi
// 00882e1a  742a                 je 0x882e46
// 00882e1c  8d4704               lea eax, [edi + 4]
// 00882e1f  83c9ff               or ecx, 0xffffffff
// 00882e22  f00fc108             lock xadd dword ptr [eax], ecx
// 00882e26  751e                 jne 0x882e46
// 00882e28  8b17                 mov edx, dword ptr [edi]
// 00882e2a  8b4204               mov eax, dword ptr [edx + 4]
// 00882e2d  8bcf                 mov ecx, edi
// 00882e2f  ffd0                 call eax
// 00882e31  8d4f08               lea ecx, [edi + 8]
// 00882e34  83caff               or edx, 0xffffffff
// 00882e37  f00fc111             lock xadd dword ptr [ecx], edx
// 00882e3b  7509                 jne 0x882e46
// 00882e3d  8b07                 mov eax, dword ptr [edi]
// 00882e3f  8b5008               mov edx, dword ptr [eax + 8]
// 00882e42  8bcf                 mov ecx, edi
// 00882e44  ffd2                 call edx
// 00882e46  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00882e4a  5f                   pop edi
// 00882e4b  8bc6                 mov eax, esi
// 00882e4d  64890d00000000       mov dword ptr fs:[0], ecx
// 00882e54  5e                   pop esi
// 00882e55  83c420               add esp, 0x20
// 00882e58  c3                   ret 
// copied from an identical function in another client (function ??$bind@XVDHTMLWindowService@@V?$function@$$A6AXPAVCLuaHtmlView@@@ZV?$allocator@X@std@@@boost@@V?$shared_ptr@VDHTMLWindowService@@@3@P8CLuaHtmlView@@AEXXZ@boost@@YA?AV?$bind_t@XV?$mf1@XVDHTMLWindowService@@V?$function@$$A6AXPAVCLuaHtmlView@@@ZV?$allocator@X@std@@@boost@@@_mfi@boost@@V?$list2@V?$value@V?$shared_ptr@VDHTMLWindowService@@@boost@@@_bi@boost@@V?$value@P8CLuaHtmlView@@AEXXZ@23@@_bi@3@@_bi@0@P8DHTMLWindowService@@AEXV?$function@$$A6AXPAVCLuaHtmlView@@@ZV?$allocator@X@std@@@0@@ZV?$shared_ptr@VDHTMLWindowService@@@0@P8CLuaHtmlView@@AEXXZ@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: boost-1.35.0-dll roc_espeon_dhtmlnativefunction034ab6d87e50f0c3f.cpp