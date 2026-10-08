// roc 2007-03 0048f760  unit: seg_00480000  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0048f760
//
// 0048f760  83ec08               sub esp, 8
// 0048f763  56                   push esi
// 0048f764  57                   push edi
// 0048f765  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0048f769  57                   push edi
// 0048f76a  e861feffff           call 0x48f5d0
// 0048f76f  8bf0                 mov esi, eax
// 0048f771  83c404               add esp, 4
// 0048f774  85f6                 test esi, esi
// 0048f776  745d                 je 0x48f7d5
// 0048f778  83ec08               sub esp, 8
// 0048f77b  8bc4                 mov eax, esp
// 0048f77d  89642410             mov dword ptr [esp + 0x10], esp
// 0048f781  57                   push edi
// 0048f782  50                   push eax
// 0048f783  e818a7faff           call 0x439ea0
// 0048f788  83c408               add esp, 8
// 0048f78b  8d4c2410             lea ecx, [esp + 0x10]
// 0048f78f  51                   push ecx
// 0048f790  8bce                 mov ecx, esi
// 0048f792  e859d2ffff           call 0x48c9f0
// 0048f797  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0048f79b  85f6                 test esi, esi
// 0048f79d  8b7c2408             mov edi, dword ptr [esp + 8]
// 0048f7a1  742a                 je 0x48f7cd
// 0048f7a3  8d5604               lea edx, [esi + 4]
// 0048f7a6  83c8ff               or eax, 0xffffffff
// 0048f7a9  f00fc102             lock xadd dword ptr [edx], eax
// 0048f7ad  751e                 jne 0x48f7cd
// 0048f7af  8b16                 mov edx, dword ptr [esi]
// 0048f7b1  8b4204               mov eax, dword ptr [edx + 4]
// 0048f7b4  8bce                 mov ecx, esi
// 0048f7b6  ffd0                 call eax
// 0048f7b8  8d4e08               lea ecx, [esi + 8]
// 0048f7bb  83caff               or edx, 0xffffffff
// 0048f7be  f00fc111             lock xadd dword ptr [ecx], edx
// 0048f7c2  7509                 jne 0x48f7cd
// 0048f7c4  8b06                 mov eax, dword ptr [esi]
// 0048f7c6  8b5008               mov edx, dword ptr [eax + 8]
// 0048f7c9  8bce                 mov ecx, esi
// 0048f7cb  ffd2                 call edx
// 0048f7cd  8bc7                 mov eax, edi
// 0048f7cf  5f                   pop edi
// 0048f7d0  5e                   pop esi
// 0048f7d1  83c408               add esp, 8
// 0048f7d4  c3                   ret 
// 0048f7d5  5f                   pop edi
// 0048f7d6  33c0                 xor eax, eax
// 0048f7d8  5e                   pop esi
// 0048f7d9  83c408               add esp, 8
// 0048f7dc  c3                   ret 
// library rbxgs-net/Players.cpp (function ?getPlayerFromCharacter@Players@Network@RBX@@SAPAVPlayer@23@PAVInstance@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
