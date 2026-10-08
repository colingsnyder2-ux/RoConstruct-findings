// from server: 100% by auto
// roc 2010-06 00704810  unit: RBX::VInstance::?$NonFactoryProduct  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00704810
//
// 00704810  53                   push ebx
// 00704811  8bd9                 mov ebx, ecx
// 00704813  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00704816  57                   push edi
// 00704817  8b38                 mov edi, dword ptr [eax]
// 00704819  8900                 mov dword ptr [eax], eax
// 0070481b  8b4314               mov eax, dword ptr [ebx + 0x14]
// 0070481e  894004               mov dword ptr [eax + 4], eax
// 00704821  c7431800000000       mov dword ptr [ebx + 0x18], 0
// 00704828  3b7b14               cmp edi, dword ptr [ebx + 0x14]
// 0070482b  7448                 je 0x704875
// 0070482d  55                   push ebp
// 0070482e  56                   push esi
// 0070482f  90                   nop 
// 00704830  8b770c               mov esi, dword ptr [edi + 0xc]
// 00704833  8b2f                 mov ebp, dword ptr [edi]
// 00704835  85f6                 test esi, esi
// 00704837  742a                 je 0x704863
// 00704839  8d4604               lea eax, [esi + 4]
// 0070483c  83c9ff               or ecx, 0xffffffff
// 0070483f  f00fc108             lock xadd dword ptr [eax], ecx
// 00704843  751e                 jne 0x704863
// 00704845  8b16                 mov edx, dword ptr [esi]
// 00704847  8b4204               mov eax, dword ptr [edx + 4]
// 0070484a  8bce                 mov ecx, esi
// 0070484c  ffd0                 call eax
// 0070484e  8d4e08               lea ecx, [esi + 8]
// 00704851  83caff               or edx, 0xffffffff
// 00704854  f00fc111             lock xadd dword ptr [ecx], edx
// 00704858  7509                 jne 0x704863
// 0070485a  8b06                 mov eax, dword ptr [esi]
// 0070485c  8b5008               mov edx, dword ptr [eax + 8]
// 0070485f  8bce                 mov ecx, esi
// 00704861  ffd2                 call edx
// 00704863  57                   push edi
// 00704864  e831310a00           call 0x7a799a
// 00704869  83c404               add esp, 4
// 0070486c  8bfd                 mov edi, ebp
// 0070486e  3b6b14               cmp ebp, dword ptr [ebx + 0x14]
// 00704871  75bd                 jne 0x704830
// 00704873  5e                   pop esi
// 00704874  5d                   pop ebp
// 00704875  5f                   pop edi
// 00704876  5b                   pop ebx
// 00704877  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?clear@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
