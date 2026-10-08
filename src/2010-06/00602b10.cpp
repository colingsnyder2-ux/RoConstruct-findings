// from server: 100% by auto
// roc 2010-06 00602b10  unit: RBX::HeartbeatInstance  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00602b10
//
// 00602b10  57                   push edi
// 00602b11  8b7c2408             mov edi, dword ptr [esp + 8]
// 00602b15  3b7c240c             cmp edi, dword ptr [esp + 0xc]
// 00602b19  7464                 je 0x602b7f
// 00602b1b  53                   push ebx
// 00602b1c  55                   push ebp
// 00602b1d  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00602b21  56                   push esi
// 00602b22  8b4500               mov eax, dword ptr [ebp]
// 00602b25  8907                 mov dword ptr [edi], eax
// 00602b27  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00602b2a  3b5f04               cmp ebx, dword ptr [edi + 4]
// 00602b2d  7444                 je 0x602b73
// 00602b2f  85db                 test ebx, ebx
// 00602b31  740c                 je 0x602b3f
// 00602b33  8d4b04               lea ecx, [ebx + 4]
// 00602b36  ba01000000           mov edx, 1
// 00602b3b  f00fc111             lock xadd dword ptr [ecx], edx
// 00602b3f  8b7704               mov esi, dword ptr [edi + 4]
// 00602b42  85f6                 test esi, esi
// 00602b44  742a                 je 0x602b70
// 00602b46  8d4604               lea eax, [esi + 4]
// 00602b49  83c9ff               or ecx, 0xffffffff
// 00602b4c  f00fc108             lock xadd dword ptr [eax], ecx
// 00602b50  751e                 jne 0x602b70
// 00602b52  8b16                 mov edx, dword ptr [esi]
// 00602b54  8b4204               mov eax, dword ptr [edx + 4]
// 00602b57  8bce                 mov ecx, esi
// 00602b59  ffd0                 call eax
// 00602b5b  8d4e08               lea ecx, [esi + 8]
// 00602b5e  83caff               or edx, 0xffffffff
// 00602b61  f00fc111             lock xadd dword ptr [ecx], edx
// 00602b65  7509                 jne 0x602b70
// 00602b67  8b06                 mov eax, dword ptr [esi]
// 00602b69  8b5008               mov edx, dword ptr [eax + 8]
// 00602b6c  8bce                 mov ecx, esi
// 00602b6e  ffd2                 call edx
// 00602b70  895f04               mov dword ptr [edi + 4], ebx
// 00602b73  83c708               add edi, 8
// 00602b76  3b7c2418             cmp edi, dword ptr [esp + 0x18]
// 00602b7a  75a6                 jne 0x602b22
// 00602b7c  5e                   pop esi
// 00602b7d  5d                   pop ebp
// 00602b7e  5b                   pop ebx
// 00602b7f  5f                   pop edi
// 00602b80  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Fill@PAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@V12@@std@@YAXPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@0ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
