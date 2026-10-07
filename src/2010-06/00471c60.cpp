// roc 2010-06 00471c60  unit: CScriptEditor  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00471c60
//
// 00471c60  6aff                 push -1
// 00471c62  6878469800           push 0x984678
// 00471c67  64a100000000         mov eax, dword ptr fs:[0]
// 00471c6d  50                   push eax
// 00471c6e  64892500000000       mov dword ptr fs:[0], esp
// 00471c75  51                   push ecx
// 00471c76  56                   push esi
// 00471c77  57                   push edi
// 00471c78  8bf9                 mov edi, ecx
// 00471c7a  897c2408             mov dword ptr [esp + 8], edi
// 00471c7e  8b7758               mov esi, dword ptr [edi + 0x58]
// 00471c81  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00471c89  85f6                 test esi, esi
// 00471c8b  742a                 je 0x471cb7
// 00471c8d  8d4604               lea eax, [esi + 4]
// 00471c90  83c9ff               or ecx, 0xffffffff
// 00471c93  f00fc108             lock xadd dword ptr [eax], ecx
// 00471c97  751e                 jne 0x471cb7
// 00471c99  8b16                 mov edx, dword ptr [esi]
// 00471c9b  8b4204               mov eax, dword ptr [edx + 4]
// 00471c9e  8bce                 mov ecx, esi
// 00471ca0  ffd0                 call eax
// 00471ca2  8d4e08               lea ecx, [esi + 8]
// 00471ca5  83caff               or edx, 0xffffffff
// 00471ca8  f00fc111             lock xadd dword ptr [ecx], edx
// 00471cac  7509                 jne 0x471cb7
// 00471cae  8b06                 mov eax, dword ptr [esi]
// 00471cb0  8b5008               mov edx, dword ptr [eax + 8]
// 00471cb3  8bce                 mov ecx, esi
// 00471cb5  ffd2                 call edx
// 00471cb7  8bcf                 mov ecx, edi
// 00471cb9  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00471cc1  e870603300           call 0x7a7d36
// 00471cc6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00471cca  5f                   pop edi
// 00471ccb  5e                   pop esi
// 00471ccc  64890d00000000       mov dword ptr fs:[0], ecx
// 00471cd3  83c410               add esp, 0x10
// 00471cd6  c3                   ret 
// library boost-1.44.0/libs\regex\src\cregex.cpp (function ??1?$regex_iterator_implementation@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@DU?$regex_traits@DV?$w32_regex_traits@D@boost@@@boost@@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.44.0 libs/regex/src/cregex.cpp
