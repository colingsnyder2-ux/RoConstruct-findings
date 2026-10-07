// roc 2012-06 0086c760  unit: RBX::ContentFilter  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0086c760
//
// 0086c760  57                   push edi
// 0086c761  8b7c2408             mov edi, dword ptr [esp + 8]
// 0086c765  85ff                 test edi, edi
// 0086c767  743c                 je 0x86c7a5
// 0086c769  56                   push esi
// 0086c76a  8b7704               mov esi, dword ptr [edi + 4]
// 0086c76d  85f6                 test esi, esi
// 0086c76f  742a                 je 0x86c79b
// 0086c771  8d4604               lea eax, [esi + 4]
// 0086c774  83c9ff               or ecx, 0xffffffff
// 0086c777  f00fc108             lock xadd dword ptr [eax], ecx
// 0086c77b  751e                 jne 0x86c79b
// 0086c77d  8b16                 mov edx, dword ptr [esi]
// 0086c77f  8b4204               mov eax, dword ptr [edx + 4]
// 0086c782  8bce                 mov ecx, esi
// 0086c784  ffd0                 call eax
// 0086c786  8d4e08               lea ecx, [esi + 8]
// 0086c789  83caff               or edx, 0xffffffff
// 0086c78c  f00fc111             lock xadd dword ptr [ecx], edx
// 0086c790  7509                 jne 0x86c79b
// 0086c792  8b06                 mov eax, dword ptr [esi]
// 0086c794  8b5008               mov edx, dword ptr [eax + 8]
// 0086c797  8bce                 mov ecx, esi
// 0086c799  ffd2                 call edx
// 0086c79b  57                   push edi
// 0086c79c  e873591100           call 0x982114
// 0086c7a1  83c404               add esp, 4
// 0086c7a4  5e                   pop esi
// 0086c7a5  5f                   pop edi
// 0086c7a6  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??$checked_delete@U?$regex_traits_wrapper@U?$regex_traits@DV?$w32_regex_traits@D@boost@@@boost@@@boost@@@boost@@YAXPAU?$regex_traits_wrapper@U?$regex_traits@DV?$w32_regex_traits@D@boost@@@boost@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
