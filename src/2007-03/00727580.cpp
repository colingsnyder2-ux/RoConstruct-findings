// roc 2007-03 00727580  unit: seg_00720000  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00727580
//
// 00727580  83ec08               sub esp, 8
// 00727583  53                   push ebx
// 00727584  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00727588  85db                 test ebx, ebx
// 0072758a  55                   push ebp
// 0072758b  56                   push esi
// 0072758c  8b742420             mov esi, dword ptr [esp + 0x20]
// 00727590  57                   push edi
// 00727591  8bf9                 mov edi, ecx
// 00727593  895c2410             mov dword ptr [esp + 0x10], ebx
// 00727597  7506                 jne 0x72759f
// 00727599  ff1544e97700         call dword ptr [0x77e944]
// 0072759f  3b7304               cmp esi, dword ptr [ebx + 4]
// 007275a2  7506                 jne 0x7275aa
// 007275a4  ff1544e97700         call dword ptr [0x77e944]
// 007275aa  3b7704               cmp esi, dword ptr [edi + 4]
// 007275ad  8b2e                 mov ebp, dword ptr [esi]
// 007275af  741c                 je 0x7275cd
// 007275b1  8b4604               mov eax, dword ptr [esi + 4]
// 007275b4  8bcd                 mov ecx, ebp
// 007275b6  8908                 mov dword ptr [eax], ecx
// 007275b8  8b16                 mov edx, dword ptr [esi]
// 007275ba  8b4604               mov eax, dword ptr [esi + 4]
// 007275bd  56                   push esi
// 007275be  894204               mov dword ptr [edx + 4], eax
// 007275c1  e82a6befff           call 0x61e0f0
// 007275c6  83c404               add esp, 4
// 007275c9  834708ff             add dword ptr [edi + 8], -1
// 007275cd  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007275d1  5f                   pop edi
// 007275d2  5e                   pop esi
// 007275d3  896804               mov dword ptr [eax + 4], ebp
// 007275d6  5d                   pop ebp
// 007275d7  8918                 mov dword ptr [eax], ebx
// 007275d9  5b                   pop ebx
// 007275da  83c408               add esp, 8
// 007275dd  c20c00               ret 0xc
// library rbxgs/v8datamodel\FlagStand.cpp (function ?erase@?$list@PAVFlagStand@RBX@@V?$allocator@PAVFlagStand@RBX@@@std@@@std@@QAE?AV?$_Iterator@$00@12@V312@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
