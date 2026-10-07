// roc 2009-06 00465610  unit: CScriptEditor  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00465610
//
// 00465610  6aff                 push -1
// 00465612  68f82c8500           push 0x852cf8
// 00465617  64a100000000         mov eax, dword ptr fs:[0]
// 0046561d  50                   push eax
// 0046561e  64892500000000       mov dword ptr fs:[0], esp
// 00465625  51                   push ecx
// 00465626  56                   push esi
// 00465627  57                   push edi
// 00465628  8bf9                 mov edi, ecx
// 0046562a  897c2408             mov dword ptr [esp + 8], edi
// 0046562e  8b7758               mov esi, dword ptr [edi + 0x58]
// 00465631  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00465639  85f6                 test esi, esi
// 0046563b  742a                 je 0x465667
// 0046563d  8d4604               lea eax, [esi + 4]
// 00465640  83c9ff               or ecx, 0xffffffff
// 00465643  f00fc108             lock xadd dword ptr [eax], ecx
// 00465647  751e                 jne 0x465667
// 00465649  8b16                 mov edx, dword ptr [esi]
// 0046564b  8b4204               mov eax, dword ptr [edx + 4]
// 0046564e  8bce                 mov ecx, esi
// 00465650  ffd0                 call eax
// 00465652  8d4e08               lea ecx, [esi + 8]
// 00465655  83caff               or edx, 0xffffffff
// 00465658  f00fc111             lock xadd dword ptr [ecx], edx
// 0046565c  7509                 jne 0x465667
// 0046565e  8b06                 mov eax, dword ptr [esi]
// 00465660  8b5008               mov edx, dword ptr [eax + 8]
// 00465663  8bce                 mov ecx, esi
// 00465665  ffd2                 call edx
// 00465667  8bcf                 mov ecx, edi
// 00465669  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00465671  e858372b00           call 0x718dce
// 00465676  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0046567a  5f                   pop edi
// 0046567b  5e                   pop esi
// 0046567c  64890d00000000       mov dword ptr fs:[0], ecx
// 00465683  83c410               add esp, 0x10
// 00465686  c3                   ret 
// library boost-1.44.0/libs\regex\src\cregex.cpp (function ??1?$regex_iterator_implementation@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@DU?$regex_traits@DV?$w32_regex_traits@D@boost@@@boost@@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.44.0 libs/regex/src/cregex.cpp
