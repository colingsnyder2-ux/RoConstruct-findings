// roc 2008-06 005c1810  unit: RBX::VGeometryService::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c1810
//
// 005c1810  6aff                 push -1
// 005c1812  68a9677c00           push 0x7c67a9
// 005c1817  64a100000000         mov eax, dword ptr fs:[0]
// 005c181d  50                   push eax
// 005c181e  64892500000000       mov dword ptr fs:[0], esp
// 005c1825  83ec0c               sub esp, 0xc
// 005c1828  8d442404             lea eax, [esp + 4]
// 005c182c  50                   push eax
// 005c182d  c744240400000000     mov dword ptr [esp + 4], 0
// 005c1835  e856ffffff           call 0x5c1790
// 005c183a  8b08                 mov ecx, dword ptr [eax]
// 005c183c  83c404               add esp, 4
// 005c183f  85c9                 test ecx, ecx
// 005c1841  7405                 je 0x5c1848
// 005c1843  83c110               add ecx, 0x10
// 005c1846  eb02                 jmp 0x5c184a
// 005c1848  33c9                 xor ecx, ecx
// 005c184a  56                   push esi
// 005c184b  57                   push edi
// 005c184c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005c1850  890f                 mov dword ptr [edi], ecx
// 005c1852  8b4004               mov eax, dword ptr [eax + 4]
// 005c1855  894704               mov dword ptr [edi + 4], eax
// 005c1858  85c0                 test eax, eax
// 005c185a  740c                 je 0x5c1868
// 005c185c  83c004               add eax, 4
// 005c185f  b901000000           mov ecx, 1
// 005c1864  f00fc108             lock xadd dword ptr [eax], ecx
// 005c1868  8b742410             mov esi, dword ptr [esp + 0x10]
// 005c186c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005c1874  c744240801000000     mov dword ptr [esp + 8], 1
// 005c187c  85f6                 test esi, esi
// 005c187e  742a                 je 0x5c18aa
// 005c1880  8d5604               lea edx, [esi + 4]
// 005c1883  83c8ff               or eax, 0xffffffff
// 005c1886  f00fc102             lock xadd dword ptr [edx], eax
// 005c188a  751e                 jne 0x5c18aa
// 005c188c  8b16                 mov edx, dword ptr [esi]
// 005c188e  8b4204               mov eax, dword ptr [edx + 4]
// 005c1891  8bce                 mov ecx, esi
// 005c1893  ffd0                 call eax
// 005c1895  8d4e08               lea ecx, [esi + 8]
// 005c1898  83caff               or edx, 0xffffffff
// 005c189b  f00fc111             lock xadd dword ptr [ecx], edx
// 005c189f  7509                 jne 0x5c18aa
// 005c18a1  8b06                 mov eax, dword ptr [esi]
// 005c18a3  8b5008               mov edx, dword ptr [eax + 8]
// 005c18a6  8bce                 mov ecx, esi
// 005c18a8  ffd2                 call edx
// 005c18aa  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005c18ae  8bc7                 mov eax, edi
// 005c18b0  5f                   pop edi
// 005c18b1  5e                   pop esi
// 005c18b2  64890d00000000       mov dword ptr fs:[0], ecx
// 005c18b9  83c418               add esp, 0x18
// 005c18bc  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
