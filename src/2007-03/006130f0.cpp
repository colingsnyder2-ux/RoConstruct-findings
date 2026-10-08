// roc 2007-03 006130f0  unit: seg_00610000  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006130f0
//
// 006130f0  8b5104               mov edx, dword ptr [ecx + 4]
// 006130f3  8b4204               mov eax, dword ptr [edx + 4]
// 006130f6  80781100             cmp byte ptr [eax + 0x11], 0
// 006130fa  56                   push esi
// 006130fb  57                   push edi
// 006130fc  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00613100  7516                 jne 0x613118
// 00613102  8b37                 mov esi, dword ptr [edi]
// 00613104  3b700c               cmp esi, dword ptr [eax + 0xc]
// 00613107  7306                 jae 0x61310f
// 00613109  8bd0                 mov edx, eax
// 0061310b  8b00                 mov eax, dword ptr [eax]
// 0061310d  eb03                 jmp 0x613112
// 0061310f  8b4008               mov eax, dword ptr [eax + 8]
// 00613112  80781100             cmp byte ptr [eax + 0x11], 0
// 00613116  74ec                 je 0x613104
// 00613118  8b7104               mov esi, dword ptr [ecx + 4]
// 0061311b  8b4604               mov eax, dword ptr [esi + 4]
// 0061311e  80781100             cmp byte ptr [eax + 0x11], 0
// 00613122  7516                 jne 0x61313a
// 00613124  8b3f                 mov edi, dword ptr [edi]
// 00613126  39780c               cmp dword ptr [eax + 0xc], edi
// 00613129  7305                 jae 0x613130
// 0061312b  8b4008               mov eax, dword ptr [eax + 8]
// 0061312e  eb04                 jmp 0x613134
// 00613130  8bf0                 mov esi, eax
// 00613132  8b00                 mov eax, dword ptr [eax]
// 00613134  80781100             cmp byte ptr [eax + 0x11], 0
// 00613138  74ec                 je 0x613126
// 0061313a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0061313e  5f                   pop edi
// 0061313f  897004               mov dword ptr [eax + 4], esi
// 00613142  8908                 mov dword ptr [eax], ecx
// 00613144  894808               mov dword ptr [eax + 8], ecx
// 00613147  89500c               mov dword ptr [eax + 0xc], edx
// 0061314a  5e                   pop esi
// 0061314b  c20800               ret 8
// library rbxgs/script\ScriptContext.cpp (function ?equal_range@?$_Tree@V?$_Tset_traits@PAVScript@RBX@@U?$less@PAVScript@RBX@@@std@@V?$allocator@PAVScript@RBX@@@4@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@PAVScript@RBX@@U?$less@PAVScript@RBX@@@std@@V?$allocator@PAVScript@RBX@@@4@$0A@@std@@@std@@V123@@2@ABQAVScript@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
