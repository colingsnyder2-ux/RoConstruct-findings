// roc 2008-06 00464670  unit: CScriptEditor  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00464670
//
// 00464670  6aff                 push -1
// 00464672  6828327c00           push 0x7c3228
// 00464677  64a100000000         mov eax, dword ptr fs:[0]
// 0046467d  50                   push eax
// 0046467e  64892500000000       mov dword ptr fs:[0], esp
// 00464685  51                   push ecx
// 00464686  56                   push esi
// 00464687  57                   push edi
// 00464688  8bf9                 mov edi, ecx
// 0046468a  897c2408             mov dword ptr [esp + 8], edi
// 0046468e  8b7758               mov esi, dword ptr [edi + 0x58]
// 00464691  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00464699  85f6                 test esi, esi
// 0046469b  742a                 je 0x4646c7
// 0046469d  8d4604               lea eax, [esi + 4]
// 004646a0  83c9ff               or ecx, 0xffffffff
// 004646a3  f00fc108             lock xadd dword ptr [eax], ecx
// 004646a7  751e                 jne 0x4646c7
// 004646a9  8b16                 mov edx, dword ptr [esi]
// 004646ab  8b4204               mov eax, dword ptr [edx + 4]
// 004646ae  8bce                 mov ecx, esi
// 004646b0  ffd0                 call eax
// 004646b2  8d4e08               lea ecx, [esi + 8]
// 004646b5  83caff               or edx, 0xffffffff
// 004646b8  f00fc111             lock xadd dword ptr [ecx], edx
// 004646bc  7509                 jne 0x4646c7
// 004646be  8b06                 mov eax, dword ptr [esi]
// 004646c0  8b5008               mov edx, dword ptr [eax + 8]
// 004646c3  8bce                 mov ecx, esi
// 004646c5  ffd2                 call edx
// 004646c7  8bcf                 mov ecx, edi
// 004646c9  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004646d1  e846c32300           call 0x6a0a1c
// 004646d6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004646da  5f                   pop edi
// 004646db  5e                   pop esi
// 004646dc  64890d00000000       mov dword ptr fs:[0], ecx
// 004646e3  83c410               add esp, 0x10
// 004646e6  c3                   ret 
// library boost-1.44.0/libs\regex\src\cregex.cpp (function ??1?$regex_iterator_implementation@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@DU?$regex_traits@DV?$w32_regex_traits@D@boost@@@boost@@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.44.0 libs/regex/src/cregex.cpp
