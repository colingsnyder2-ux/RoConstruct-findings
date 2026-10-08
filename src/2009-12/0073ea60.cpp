// roc 2009-12 0073ea60  unit: RBX::VCollectionService::?$FactoryProduct  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0073ea60
//
// 0073ea60  57                   push edi
// 0073ea61  8b7c2408             mov edi, dword ptr [esp + 8]
// 0073ea65  85ff                 test edi, edi
// 0073ea67  743c                 je 0x73eaa5
// 0073ea69  56                   push esi
// 0073ea6a  8b7704               mov esi, dword ptr [edi + 4]
// 0073ea6d  85f6                 test esi, esi
// 0073ea6f  742a                 je 0x73ea9b
// 0073ea71  8d4604               lea eax, [esi + 4]
// 0073ea74  83c9ff               or ecx, 0xffffffff
// 0073ea77  f00fc108             lock xadd dword ptr [eax], ecx
// 0073ea7b  751e                 jne 0x73ea9b
// 0073ea7d  8b16                 mov edx, dword ptr [esi]
// 0073ea7f  8b4204               mov eax, dword ptr [edx + 4]
// 0073ea82  8bce                 mov ecx, esi
// 0073ea84  ffd0                 call eax
// 0073ea86  8d4e08               lea ecx, [esi + 8]
// 0073ea89  83caff               or edx, 0xffffffff
// 0073ea8c  f00fc111             lock xadd dword ptr [ecx], edx
// 0073ea90  7509                 jne 0x73ea9b
// 0073ea92  8b06                 mov eax, dword ptr [esi]
// 0073ea94  8b5008               mov edx, dword ptr [eax + 8]
// 0073ea97  8bce                 mov ecx, esi
// 0073ea99  ffd2                 call edx
// 0073ea9b  57                   push edi
// 0073ea9c  e8b94d0b00           call 0x7f385a
// 0073eaa1  83c404               add esp, 4
// 0073eaa4  5e                   pop esi
// 0073eaa5  5f                   pop edi
// 0073eaa6  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??$checked_delete@U?$regex_traits_wrapper@U?$regex_traits@DV?$w32_regex_traits@D@boost@@@boost@@@boost@@@boost@@YAXPAU?$regex_traits_wrapper@U?$regex_traits@DV?$w32_regex_traits@D@boost@@@boost@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
