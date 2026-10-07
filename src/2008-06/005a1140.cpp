// roc 2008-06 005a1140  unit: RBX::PartTool  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a1140
//
// 005a1140  57                   push edi
// 005a1141  8b7c2408             mov edi, dword ptr [esp + 8]
// 005a1145  3b7c240c             cmp edi, dword ptr [esp + 0xc]
// 005a1149  7464                 je 0x5a11af
// 005a114b  53                   push ebx
// 005a114c  55                   push ebp
// 005a114d  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 005a1151  56                   push esi
// 005a1152  8b4500               mov eax, dword ptr [ebp]
// 005a1155  8907                 mov dword ptr [edi], eax
// 005a1157  8b5d04               mov ebx, dword ptr [ebp + 4]
// 005a115a  3b5f04               cmp ebx, dword ptr [edi + 4]
// 005a115d  7444                 je 0x5a11a3
// 005a115f  85db                 test ebx, ebx
// 005a1161  740c                 je 0x5a116f
// 005a1163  8d4b04               lea ecx, [ebx + 4]
// 005a1166  ba01000000           mov edx, 1
// 005a116b  f00fc111             lock xadd dword ptr [ecx], edx
// 005a116f  8b7704               mov esi, dword ptr [edi + 4]
// 005a1172  85f6                 test esi, esi
// 005a1174  742a                 je 0x5a11a0
// 005a1176  8d4604               lea eax, [esi + 4]
// 005a1179  83c9ff               or ecx, 0xffffffff
// 005a117c  f00fc108             lock xadd dword ptr [eax], ecx
// 005a1180  751e                 jne 0x5a11a0
// 005a1182  8b16                 mov edx, dword ptr [esi]
// 005a1184  8b4204               mov eax, dword ptr [edx + 4]
// 005a1187  8bce                 mov ecx, esi
// 005a1189  ffd0                 call eax
// 005a118b  8d4e08               lea ecx, [esi + 8]
// 005a118e  83caff               or edx, 0xffffffff
// 005a1191  f00fc111             lock xadd dword ptr [ecx], edx
// 005a1195  7509                 jne 0x5a11a0
// 005a1197  8b06                 mov eax, dword ptr [esi]
// 005a1199  8b5008               mov edx, dword ptr [eax + 8]
// 005a119c  8bce                 mov ecx, esi
// 005a119e  ffd2                 call edx
// 005a11a0  895f04               mov dword ptr [edi + 4], ebx
// 005a11a3  83c708               add edi, 8
// 005a11a6  3b7c2418             cmp edi, dword ptr [esp + 0x18]
// 005a11aa  75a6                 jne 0x5a1152
// 005a11ac  5e                   pop esi
// 005a11ad  5d                   pop ebp
// 005a11ae  5b                   pop ebx
// 005a11af  5f                   pop edi
// 005a11b0  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Fill@PAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@V12@@std@@YAXPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@0ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
