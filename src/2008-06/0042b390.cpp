// from server: 100% by auto
// roc 2008-06 0042b390  unit: EventHandler  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042b390
//
// 0042b390  53                   push ebx
// 0042b391  8bd9                 mov ebx, ecx
// 0042b393  8b4314               mov eax, dword ptr [ebx + 0x14]
// 0042b396  57                   push edi
// 0042b397  8b38                 mov edi, dword ptr [eax]
// 0042b399  8900                 mov dword ptr [eax], eax
// 0042b39b  8b4314               mov eax, dword ptr [ebx + 0x14]
// 0042b39e  894004               mov dword ptr [eax + 4], eax
// 0042b3a1  c7431800000000       mov dword ptr [ebx + 0x18], 0
// 0042b3a8  3b7b14               cmp edi, dword ptr [ebx + 0x14]
// 0042b3ab  7448                 je 0x42b3f5
// 0042b3ad  55                   push ebp
// 0042b3ae  56                   push esi
// 0042b3af  90                   nop 
// 0042b3b0  8b770c               mov esi, dword ptr [edi + 0xc]
// 0042b3b3  8b2f                 mov ebp, dword ptr [edi]
// 0042b3b5  85f6                 test esi, esi
// 0042b3b7  742a                 je 0x42b3e3
// 0042b3b9  8d4604               lea eax, [esi + 4]
// 0042b3bc  83c9ff               or ecx, 0xffffffff
// 0042b3bf  f00fc108             lock xadd dword ptr [eax], ecx
// 0042b3c3  751e                 jne 0x42b3e3
// 0042b3c5  8b16                 mov edx, dword ptr [esi]
// 0042b3c7  8b4204               mov eax, dword ptr [edx + 4]
// 0042b3ca  8bce                 mov ecx, esi
// 0042b3cc  ffd0                 call eax
// 0042b3ce  8d4e08               lea ecx, [esi + 8]
// 0042b3d1  83caff               or edx, 0xffffffff
// 0042b3d4  f00fc111             lock xadd dword ptr [ecx], edx
// 0042b3d8  7509                 jne 0x42b3e3
// 0042b3da  8b06                 mov eax, dword ptr [esi]
// 0042b3dc  8b5008               mov edx, dword ptr [eax + 8]
// 0042b3df  8bce                 mov ecx, esi
// 0042b3e1  ffd2                 call edx
// 0042b3e3  57                   push edi
// 0042b3e4  e891522700           call 0x6a067a
// 0042b3e9  83c404               add esp, 4
// 0042b3ec  8bfd                 mov edi, ebp
// 0042b3ee  3b6b14               cmp ebp, dword ptr [ebx + 0x14]
// 0042b3f1  75bd                 jne 0x42b3b0
// 0042b3f3  5e                   pop esi
// 0042b3f4  5d                   pop ebp
// 0042b3f5  5f                   pop edi
// 0042b3f6  5b                   pop ebx
// 0042b3f7  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?clear@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
