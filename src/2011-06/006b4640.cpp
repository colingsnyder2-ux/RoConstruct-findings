// roc 2011-06 006b4640  unit: RBX::VInsertService::?$FactoryProduct  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006b4640
//
// 006b4640  6aff                 push -1
// 006b4642  68e8139f00           push 0x9f13e8
// 006b4647  64a100000000         mov eax, dword ptr fs:[0]
// 006b464d  50                   push eax
// 006b464e  64892500000000       mov dword ptr fs:[0], esp
// 006b4655  51                   push ecx
// 006b4656  56                   push esi
// 006b4657  57                   push edi
// 006b4658  8bf9                 mov edi, ecx
// 006b465a  897c2408             mov dword ptr [esp + 8], edi
// 006b465e  8b7744               mov esi, dword ptr [edi + 0x44]
// 006b4661  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006b4669  85f6                 test esi, esi
// 006b466b  742a                 je 0x6b4697
// 006b466d  8d4604               lea eax, [esi + 4]
// 006b4670  83c9ff               or ecx, 0xffffffff
// 006b4673  f00fc108             lock xadd dword ptr [eax], ecx
// 006b4677  751e                 jne 0x6b4697
// 006b4679  8b16                 mov edx, dword ptr [esi]
// 006b467b  8b4204               mov eax, dword ptr [edx + 4]
// 006b467e  8bce                 mov ecx, esi
// 006b4680  ffd0                 call eax
// 006b4682  8d4e08               lea ecx, [esi + 8]
// 006b4685  83caff               or edx, 0xffffffff
// 006b4688  f00fc111             lock xadd dword ptr [ecx], edx
// 006b468c  7509                 jne 0x6b4697
// 006b468e  8b06                 mov eax, dword ptr [esi]
// 006b4690  8b5008               mov edx, dword ptr [eax + 8]
// 006b4693  8bce                 mov ecx, esi
// 006b4695  ffd2                 call edx
// 006b4697  8bcf                 mov ecx, edi
// 006b4699  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006b46a1  e8eaf8ffff           call 0x6b3f90
// 006b46a6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006b46aa  5f                   pop edi
// 006b46ab  5e                   pop esi
// 006b46ac  64890d00000000       mov dword ptr fs:[0], ecx
// 006b46b3  83c410               add esp, 0x10
// 006b46b6  c3                   ret 
// library boost-1.44.0/libs\regex\src\cregex.cpp (function ??1?$regex_iterator_implementation@PBDDU?$regex_traits@DV?$w32_regex_traits@D@boost@@@boost@@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.44.0 libs/regex/src/cregex.cpp
